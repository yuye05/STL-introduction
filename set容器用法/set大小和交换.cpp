#include "set.h"

//函数原型：
//size() 返回容器中元素数目
//empty() 判断容器是否为空，“空”-> true；“非空”-> false
//swap(st) 交换两个容器

void test2()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);

	Print(s1);

	//为空
	bool ret = s1.empty();
	if (ret)
		cout << "set容器为空" << endl;
	else
	{
		cout << "set容器不为空" << endl;
		cout << "set容器大小为：" << s1.size() << endl;
	}

	//大小
	int len = s1.size();
	cout << "s1容器的大小为：" << len << endl;
}

//交换
void test3()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);

	set<int> s2;
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "\n交换前：" << endl;
	Print(s1);
	Print(s2);

	cout << "交换后：" << endl;
	s1.swap(s2);
	Print(s1);
	Print(s2);

}