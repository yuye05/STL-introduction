#include "deque.h"

void Print(deque<int>& d)	//注意两个const加的位置！
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}