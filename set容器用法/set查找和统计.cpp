#include "set.h"

//查找关键词：find(key)，查找key是否存在，返回该元素的迭代器；若不存在，返回set.end()
//统计关键词：count(key)，统计key元素的个数
//注意，对于set容器，因为元素不能重复，所以只会有0/1两种结果，但是multiset可能大于1

void test5()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(300);	//注意查找用set迭代器接收
	if (pos != s1.end())	//如果返回值不是s1.end()，则说明查找成功
		cout << "查找成功！" << endl;
	else
		cout << "未找到该元素！" << endl;
}

//统计
void test6()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	Print(s1);

	int num1 = s1.count(30);
	cout << "该元素有" << num1<< "个" << endl;

	int num2 = s1.count(200);
	cout << "该元素有" << num2 << "个" << endl;

}