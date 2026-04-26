#include "model.h"

//功能：减少vector在动态扩展容量时的扩展次数
//注!动态扩展扩展的就是容量，这也是为什么capacity为什么一定大于等于size的原因
//函数：
//reverse(int len);  //向容器中预留len个元素长度，预留位置不初始化，元素不可访问

void test12()
{
	vector<int> v;

	int num = 0;	//统计开辟次数
	int* p = NULL;

	for (int i = 0; i < 1000; i++)
	{
		v.push_back(i);

		//这段代码意义：统计动态扩展次数，因为每次扩容都会重新获取新迭代器，旧的内存会直接释放
		//所以只要发现一次p不指向首元素，则一定进行了扩展，num++进行统计
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "默认扩容方式时，num = " << num << endl;
}

//利用reserve直接一次性开辟
void test13()
{
	vector<int> v;

	//关键实现
	v.reserve(1000);

	int num = 0;	
	int* p = NULL;

	for (int i = 0; i < 1000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << "使用reserve一次性扩容后，num = " << num << endl;
}
int main()
{
	test12();
	test13();

	return 0;
}