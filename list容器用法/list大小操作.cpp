#include "list.h"

void test4()
{
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	Print(L1);

	//判断容器是否为空——empty(),返回值为true/false
	bool ret = L1.empty();
	if (ret)
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		cout << "L1的元素个数为：" << L1.size() << endl;
	}

	//重新指定大小
	L1.resize(8);	//把L1扩展为10个元素空间
	Print(L1);

	L1.resize(10, 99);	//可以指定填充的元素
	Print(L1);

}

int main()
{
	test4();
	return 0;
}