#include "set.h"

//插入insert(elem)
//删除erase(pos) 提供迭代器 erase(elem) 删除指定元素
void test4()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	Print(s1);

	//删除的两种方式
	s1.erase(10);
	Print(s1);

	s1.erase(++s1.begin());	//迭代器不能算术运算，只能通过前置++进行偏移
	Print(s1);

	//清空的两种
	//s1.clear();
	s1.erase(s1.begin(), s1.end());
	Print(s1);
}

