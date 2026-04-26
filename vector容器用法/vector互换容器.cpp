#include "model.h"

//关键函数：swap(vec)	//将vec与本身的元素互换

//1.基本使用
void test10()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "互换前：" << endl;
	Print(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	Print(v2);

	//互换
	cout << "互换后：" << endl;
	v1.swap(v2);	//互换的关键实现
	Print(v1);
	Print(v2);

}

//2.实际用途——巧用swap可以收缩内存空间
void test11()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;	//138255——比size()多，预留了空间！
	cout << "v的大小为：" << v.size() << endl;	//100000

	//重新指定大小
	v.resize(3);
	cout << "更新后v的容量为：" << v.capacity() << endl;	//容量时不会变的，会造成空间浪费
	cout << "更新后v的大小为：" << v.size() << endl;

	//巧用swap收缩内存
	vector<int>(v).swap(v);
	//1. vector<int>(v) 匿名对象，用v现在的元素，生成临时新vector，此时capacity = size = 3
	//2. .swap(v) 容器交换
	
	//进阶写法
	v.shrink_to_fit();
	cout << "收缩后v的容量为：" << v.capacity() << endl;
	cout << "收缩后v的大小为：" << v.size() << endl;

}

//int main()
//{
//	//test10();
//	test11();
//	return 0;
//}