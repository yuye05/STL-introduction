#include "model.h"

//函数：
//at(int idx);	//返回索引idx所指的数据
//operator[];		//同上
//front();	//返回容器第一个数据
//back();		//返回容器最后一个数据

void test9()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//最安全兼容性最好的访问
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//利用[]遍历——类似数组
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//利用at函数遍历——类似[]遍历，但是会自动检查下标是否越界，更安全
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//返回第一个元素
	cout << "第一个元素为：" << v1.front() << endl;

	//返回最后一个元素
	cout << "最后一个元素为：" << v1.back() << endl;
}

//int main()
//{
//	test9();
//	return 0;
//}