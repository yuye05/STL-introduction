#include "model.h"

class Person
{
public:
	string m_name;
	int m_age;
public:
	Person(string name, int age)
		:m_name(name), m_age(age) {
	}

};

void test2()
{
	vector<Person> b;	//a是这个容器盒子的名字
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);

	//向容器中添加数据
	b.push_back(p1);
	b.push_back(p2);
	b.push_back(p3);

	//迭代器遍历容器数据
	for (vector<Person>::iterator it = b.begin(); it != b.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << endl;
	}
}

//存放自定义数据类型的指针
void test3()
{
	vector<Person*> b;	//容器中储存的都是Person*类型的数据，即都是指针
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);

	//传参必须用变量地址
	b.push_back(&p1);
	b.push_back(&p2);
	b.push_back(&p3);

	//遍历
	for (vector<Person*>::iterator it = b.begin(); it != b.end(); it++)
	{
		cout << "姓名：" << (*(*it)).m_name << "  ";	//it实际上是指针的指针，两次解引用
		//这样也可以
		cout << "年龄：" << (*it)->m_age << "  ";
	}
}

//int main()
//{
//	//test2();
//	test3();
//	return 0;
//}