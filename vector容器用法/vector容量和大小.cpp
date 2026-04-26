#include "model.h"


//empty();	//判断容器是否为空——返回类型true/false
//capacity(); //容器的容量（大于等于size()的值）
//size();		//返回容器元素的个数
//resize(int num);	//重新制定容器长度num
//resize(int num, elem);

void test7()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	Print(v1);

	//判断
	if (v1.empty())
	{
		cout << "v1为空" << endl;

	}
	else
	{
		cout << "v1包含的元素个数：" << v1.size() << endl;
		cout << "v1容量为：" << v1.capacity() << endl;
	}

	//重新指定大小
	v1.resize(15);	//多的位置默认用0填充如果比原来短会删除
	Print(v1);
	v1.resize(20, 99);	//也可以指定填充元素
	Print(v1);
	v1.resize(5);	//如果比原来短会删除
	Print(v1);
}

//int main()
//{
//	test7();
//	return 0;
//}