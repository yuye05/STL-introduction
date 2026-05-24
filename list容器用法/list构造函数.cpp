#include "list.h"
//list容器的构造和vector几乎一样

void test1()
{
	list<int> L1;
	//添加数据——默认构造
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	Print(L1);

	//按照区间构造
	list<int> L2(L1.begin(), L1.end());
	Print(L2);
	
	//拷贝构造
	list<int> L3(L1);
	Print(L3);

	//n个elem
	list<int> L4(10, 99);
	Print(L4);
}

int main()
{
	test1();

	return 0;
}