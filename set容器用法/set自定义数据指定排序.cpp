#include "set.h"

//类成员排序不能直接交给set，要自己写一个排序规则

//bool comparePerson(Person& p1, Person& p2)
//{
//	//先按照年龄进行升序,如果年龄相同，按照身高降序/升序
//		return p1.m_Age < p2.m_Age;
//	
//}

void test9()
{
	set<Person, comparePerson> s1;
	Person p1("刘备", 30);
	Person p2("张飞", 35);
	Person p3("关羽", 32);
	Person p4("赵云", 28);

	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	Print_Person1(s1);

}

