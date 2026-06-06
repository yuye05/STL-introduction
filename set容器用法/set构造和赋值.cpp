#include "set.h"

//注意！set容器没有push_back等接口，只有通过insert进行插入

void test1()
{
	//默认构造
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	Print(s1);	//输出自动按照升序进行排列，这是set容器的特性，并且不允许重复，否则不会算多次

	//拷贝构造
	//set<int> s2(s1);
	//Print(s2);

	////赋值
	//set<int> s3;
	//s3 = s1;
	//Print(s3);

	
}

