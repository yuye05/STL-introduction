#include "deque.h"

//deque的赋值操作和vector完全相同！

void test2()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	Print(d1);

	//等号赋值
	deque<int> d2;
	d2 = d1;
	Print(d2);

	//assign
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	Print(d3);

	//n个elem
	deque<int> d4;
	d4.assign(10, 99);
	Print(d4);
}

//int main()
//{
//	test2();
//	return 0;
//}