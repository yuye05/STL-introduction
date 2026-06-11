#include "set.h"

void test7()
{
	set<int> s1;
	//s1.insert(10);
	//转到定义看看底层返回值类型不同
	pair<set<int>::iterator, bool> ret = s1.insert(10);

	if (ret.second)
		cout << "第一次插入成功！" << endl;
	else
		cout << "第一次插入失败" << endl;

	ret = s1.insert(10);
	if (ret.second)
		cout << "第二次插入成功！" << endl;
	else
		cout << "第二次插入失败" << endl;

	Print(s1);

	multiset<int> s2;
	///允许插入多个
	s2.insert(20);
	s2.insert(20);

	for (multiset<int>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}