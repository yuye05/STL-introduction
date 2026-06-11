#include "set.h"

void Print_Multiset(multiset<int>& s)
{
	for (multiset<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void Print(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void Print_Person1(set<Person, comparePerson>& s)
{
	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "  年龄： " << it->m_Age << endl;
	}
	cout << endl;
}

void Print_Person2(set<Person>& s)
{
	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "  年龄： " << it->m_Age << endl;
	}
	cout << endl;
}