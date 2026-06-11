#pragma once
#include <iostream>
#include <set>
#include <string>

using namespace std;

//set基本概念：所有元素会在插入时自动排序，底层结构是二叉树实现
//注意：set和multiset的区别：set不允许容器有重复元素，但是multiset允许

class Person
{
public:
	string m_Name;
	int m_Age;
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
};

class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		//按年龄降序
		return p1.m_Age > p2.m_Age;
	}
};

void Print_Multiset(multiset<int>& s);

void Print(set<int>& s);


void Print_Person1(set<Person, comparePerson>& s);

void Print_Person2(set<Person>& s);

void test1();

void test2();

void test3();

void test4();

void test5();

void test6();

void test7();

void test8();

void test9();

void test10();
