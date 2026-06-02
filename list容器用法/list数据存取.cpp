#include "list.h"

//list作为链表，不是连续的线性空间储存数据，故不支持[]和at()方式进行访问，只有front()和back()
void test6()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	Print(L1);

	//不能通过L1[0]和L1.at()这两种方式进行访问！
	cout << "第一个元素为：" << L1.front() << endl;
	cout << "最后一个元素为：" << L1.back() << endl;

	//验证迭代器不支持随机访问
	list<int>::iterator it = L1.begin();
	//it = it + 1;//错误！
	it++;	//正确，指向第二个元素20
	cout << *it << endl;
	it--;	//再前移
	cout << *it << endl;

}

//int main()
//{
//	test6();
//	return 0;
//}