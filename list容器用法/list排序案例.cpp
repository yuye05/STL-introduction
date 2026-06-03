#include "list.h"
#include <string>

class Person
{
public:
	string m_name;
	int m_age;
	int m_height;

	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
};

//手动指定排序规则
bool comparePerson(Person& p1, Person& p2)
{
	//先按照年龄进行升序,如果年龄相同，按照身高降序/升序
	if (p1.m_age == p2.m_age)
	{
		return p1.m_height > p2.m_height;
	}
	else
	{
		return p1.m_age < p2.m_age;
	}
}

void test9()
{
	list<Person> L;	//创建容器
	Person p1("刘备", 35, 175);
	Person p2("张飞", 38, 180);
	Person p3("关羽", 32, 185);
	Person p4("赵云", 35, 178);
	Person p5("马超", 35, 188);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << " 身高：" << it->m_height << endl;
	}

	//排序
	cout << "-------------------------" << endl;
	cout << "排序后：" << endl;
	//问题：一个成员有三个信息，直接传给sort函数，不知道按照哪个进行排序，所以要自己手写排序

	L.sort(comparePerson);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 年龄：" << it->m_age << " 身高：" << it->m_height << endl;
	}


}
int main()
{
	test9();
	return 0;
}