#include "model.h"

//vector的本质：一个数组

//遍历的工具：迭代器—— 指向容器元素的 “智能指针”，专门用来遍历/访问 vector 里的数据。
//注意！迭代器变量实际上是一个指针
//常用迭代器：
//v.begin()第一个元素
//v.end()最后一个元素后面那个位置

//v.rend()第一个元素之前的那个位置
//v.rbegin()最后一个元素

//111.vector容器存放内置数据类型
void myPrint(int val)
{
	cout << val << " ";
}

void test1()
{
	vector<int> a;
	//插入数据
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);

	//两种迭代器访问容器中的数据
	vector<int>::iterator itBegin = a.begin();	//起始迭代器，指向容器第一个元素
	vector<int>::iterator itEnd = a.end();	//结束迭代器，指向容器最后一个元素的下一个位置
	cout << *itBegin << endl;

	//1.用while遍历
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}
	//2.用for循环遍历
	for (vector<int>::iterator it = itBegin; it != itEnd; it++)
	{
		cout << *it << "  ";
	}
	cout << endl;

	//3.用STL提供的遍历算法   必须包含<algorithm>头文件
	for_each(a.begin(), a.end(), myPrint);
}

//int main()
//{
//	test1();
//	return 0;
//}
