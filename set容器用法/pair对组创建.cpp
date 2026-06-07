#include "set.h"

//对组pair的两种创建方式：
//pair<type, type> p(value1, value2);
//pair<type, type> p = make_pair(value1, value2);

void test8()
{
	//第一种——默认构造
	pair<string, int> p1("Jimmy", 19);

	//注意解引用时的格式！first/second
	cout << "姓名：" << p1.first << "  年龄：" << p1.second << endl;

	//第二种——make_pair()
	pair<string, int> p2 = make_pair("Nancy", 18);
	cout << "姓名：" << p2.first << "  年龄：" << p2.second << endl;

}