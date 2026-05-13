#include "deque.h"

void test3()
{
	deque<int> d1;
	//尾插
	d1.push_back(10);
	d1.push_back(20);	//在10之后

	//头插
	d1.push_front(100);
	d1.push_front(200);	//在100之前
	Print(d1);

	//尾删 pop_back();
	d1.pop_back();
	Print(d1);

	//头删
	d1.pop_front();
	Print(d1);
}

void test4()
{
	deque<int> d2;
	d2.push_back(10);
	d2.push_back(20);
	d2.push_back(100);
	d2.push_back(200);

	Print(d2);
	
	//insert插入——插入位置为输入迭代器前面的地方
	d2.insert(d2.begin(), 1000);
	Print(d2);
	//指定插入元素个数
	d2.insert(d2.begin(), 2, 999);
	Print(d2);

	//按照区间来进行插入
	deque<int> d3;
	d3.push_back(1);
	d3.push_back(2);
	d3.push_back(3);

	d2.insert(d2.begin(), d3.begin(), d3.end());//在d2.begin()之前插入d3.begin()到d3.end()之间的所有元素
	Print(d2);

}

void test5()
{
	deque<int> d4;
	d4.push_back(10);
	d4.push_back(20);
	d4.push_back(100);
	d4.push_back(200);

	//删除——指定迭代器位置
	deque<int>::iterator it = d4.begin();
	it++;
	d4.erase(it);
	Print(d4);

	//按照区间进行删除
	d4.erase(d4.begin() + 1, d4.end());
	Print(d4);

	//clear清空
	d4.clear();
	Print(d4);
}

//int main()
//{
//	//test3();
//	//test4();
//	test5();
//	return 0;
//}