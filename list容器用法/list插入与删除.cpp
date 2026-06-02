#include "list.h"

void test5()
{
	list<int> L1;
	L1.push_back(10);	//头插
	L1.push_back(20);
	L1.push_back(30);
	L1.push_front(100);	//尾插
	L1.push_front(200);
	L1.push_front(300);

	Print(L1);

	L1.pop_back();	//尾删
	L1.pop_front();	//头删
	Print(L1);

	//insert插入
	L1.insert(L1.begin(), 99);	//指向200，从头插入一个99
	list<int>::iterator it = L1.begin();	//重新指向99
	Print(L1);
	L1.insert(++it, 88);	//++it指向200
	//要注意！list里面迭代器不支持直接+1这样的算术操作，但是vector,deque可以
	Print(L1); 

	//it = L1.begin();
	L1.erase(it);
	Print(L1);

	//移除remove
	L1.push_back(1000);
	L1.push_back(1000);
	Print(L1);
	L1.remove(1000);	//直接移除所有不要的数值
	Print(L1);

	//清空
	L1.clear();
	Print(L1);
	cout << "容器已清空！" << endl;
}

//int main()
//{
//	test5();
//	return 0;
//}