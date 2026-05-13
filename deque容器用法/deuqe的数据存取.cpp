#include "deque.h"


void test6()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	Print(d1);

	//1.[]访问
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	//2.用迭代器，最安全兼容性最好的访问
	for (deque<int>::iterator it = d1.begin(); it != d1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	
	//3.利用at函数遍历——类似[]遍历，但是会自动检查下标是否越界，更安全
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	//front和back
	cout << "第一个元素：" << d1.front() << endl;
	cout << "最后一个元素：" << d1.back() << endl;
}

int main()
{
	test6();
	return 0;
}