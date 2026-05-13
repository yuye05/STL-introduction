#include "deque.h"

void test1()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	Print(d1);

	//区间构造
	deque<int> d2(d1.begin(), d1.end());
	Print(d2);

	//n个elem
	deque<int> d3(10, 99);	//10个99
	Print(d3);

	//拷贝构造
	deque<int> d4(d3);
	Print(d4);
}

//int main()
//{
//	test1();
//	return 0;
//}