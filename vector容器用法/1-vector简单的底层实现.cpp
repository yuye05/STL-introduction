#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <ctime>

using namespace std;

//实践一：手搓基础的vector，做到增删改查
class Array
{
private:
    int *mpArr; //指向可扩容的数组内存地址
    int mSize; //数组的容量
    int ele;  //数组中元素的个数
public:
    //构造函数
    Array(int size = 10)
        :mSize(size), ele(0)
        {
            mpArr = new int[mSize]();
        } 

    //析构函数
    ~Array()
    {
        delete[] mpArr;
        mpArr = nullptr;
    }

    //拷贝构造函数（深拷贝：新开内存再拷数据，两个对象各持一份内存，互不相干）
    Array(const Array& other)
        :mSize(other.mSize), ele(other.ele)
    {
        mpArr = new int[mSize]();
        memcpy(mpArr, other.mpArr, sizeof(int) * mSize);
    }

    //拷贝赋值运算符（深拷贝，注意防自赋值）
    Array& operator=(const Array& other)
    {
        if(this != &other)  //防自赋值：a = a 直接跳过，否则会先删掉自己的内存再拷贝已经没了的数据
        {
            delete[] mpArr;              //1.释放旧内存
            mSize = other.mSize;         //2.更新容量和元素个数
            ele = other.ele;
            mpArr = new int[mSize]();    //3.新开内存
            memcpy(mpArr, other.mpArr, sizeof(int) * mSize);  //4.拷贝数据
        }
        return *this;
    }

    //打印数组
    void show()
    {
        for(int i = 0; i < ele;i++)
        {
            cout<<mpArr[i]<<" ";
        }
        cout<<endl;
    }

private:
//扩容函数接口
    void expand(int size)
    {
        int *p = new int[size]();   //1.开辟新内存空间
        memcpy(p,mpArr,sizeof(int)*mSize);  //2.将原数组中的数据拷贝到新数组中
        delete[] mpArr;  //3.释放原数组的内存空间
        mpArr = p;       //4.将新数组的首地址赋值给原数组指针
        mSize = size;    //5.更新数组的容量
    }

//主要实现的接口
public:
    //1.末尾增加元素
    void push_back(int val)
    {
        if(ele == mSize)
        {
            expand(2 * mSize);
        }
        mpArr[ele] = val;
        ele++;
    }

    //2.末尾删除元素
    void pop_back()
    {
        if(ele == 0)
        {
            cout << "数组为空！" << endl;
            return;
        }
        else
        {
            ele--;
        }
    }

    //3.在指定位置插入元素
    void insert(int pos, int val)
    {
        //位置的有效性检验
        if(pos < 0 || pos > ele)
        {
            cout << "超出范围！" << endl;
            return;
        }
        if(ele == mSize)
        {
            expand(2 * mSize);
        }

        //将pos位置及其后面的元素向后移动一位
        for(int i = ele - 1; i >= pos; i--)
        {
            mpArr[i + 1] = mpArr[i];

        }
        //最后把插入的元素放进去并且把总ele+1
        mpArr[pos] = val;
        ele++;
    }

    //4.删除指定位置元素
    void remove(int pos)
    {
        //依旧合法性校验，注意边界取舍和插入时的区别
        if(pos < 0 || pos >= ele)
        {
            cout << "超出范围！" << endl;
            return;
        }
        //将pos位置后面的元素向前移动一位
        for(int i = pos + 1; i < ele; i++)
        {
            mpArr[i - 1] = mpArr[i];
        }
        ele--;
    }

    //5.元素查询
    //返回-1表示没找到，返回正值表示找到了
    int find(int val)
    {
        for(int i = 0;i < ele; i++)
        {
            if(mpArr[i] == val)
            {
                return i;
            }
        }
        return -1;
    }

    //6.下标访问，返回引用所以既能读也能写
    int& operator[](int pos)
    {
        return mpArr[pos];
    }
};

int main()
{
    Array arr;

    //直接写随机数种子
    srand((unsigned)time(NULL));
    for(int i = 0;i < 10; i++)
    {
        arr.push_back(rand() % 100);
    }
    arr.show();

    //测试1—-删除末尾元素
    arr.pop_back();
    arr.show();

    //测试2—-增加末尾元素
    arr.push_back(100);
    arr.show();

    //测试3—-在指定位置插入元素
    arr.insert(3, 999);
    arr.show();

    //测试4—-删除指定位置元素
    arr.remove(3);
    arr.show();

    //测试5—-元素查询
    int index = arr.find(100);
    if(index != -1)
    {
        cout << "找到了，对应的数组索引是：" << index << endl;
    }
    else
    {
        cout << "没找到！" << endl;
    }

    //测试6—-下标访问 operator[]：写
    arr[0] = 777;
    arr.show();

    //测试6—-下标访问 operator[]：读
    cout << "arr[3] = " << arr[3] << endl;

    //测试7—-拷贝构造：b 是 arr 的深拷贝
    Array b = arr;      //调用拷贝构造
    b[0] = 888;         //改 b 的
    arr.show();         //arr 开头仍是 777，不受影响 = 深拷贝成功
    b.show();           //b 开头是 888

    //测试8—-拷贝赋值：c = arr 是深拷贝
    Array c;
    c = arr;            //调用拷贝赋值
    c[0] = 666;         //改 c 的
    arr.show();         //arr 仍不受影响
    c.show();           //c 开头是 666

    return 0;
}