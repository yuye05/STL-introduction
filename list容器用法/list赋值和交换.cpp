#include "list.h"

//赋值
void test2()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	Print(L1);

	//利用等号赋值
	list<int> L2;
	L2 = L1;
	Print(L2);

	//assign赋值
	list<int> L3;
	L3.assign(L2.begin(), L2.end());
	Print(L3);

	//n个ele
	list<int> L4;
	L4.assign(10, 99);
	Print(L4);
}

//交换
void test3()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int> L2;
	L2.assign(10, 99);
	cout << "交换前：" << endl;
	Print(L1);
	Print(L2);
	
	//交换的关键实现
	//L1.swap(L2);
	swap(L1, L2);	//这样另一种写法写更容易理解
	cout << "交换后：" << endl;
	Print(L1);
	Print(L2);

}
int main()
{
	//test2();
	test3();
	return 0;
}