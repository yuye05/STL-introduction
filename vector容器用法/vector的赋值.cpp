#include "model.h"

//先创建再后续赋值
void test6()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	Print(v1);

	//赋值 operator=(系统内置重载转换)
	vector<int> v2;
	v2 = v1;
	Print(v2);

	//assign关键词
	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	Print(v3);

	//n个元素赋值
	vector<int> v4;
	v4.assign(10, 88);
	Print(v4);
}

//int main()
//{
//	test6();
//	return 0;
//}