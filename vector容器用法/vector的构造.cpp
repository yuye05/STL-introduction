#include "model.h"

//创建对象初始化时就有值
//扩展空间：并不是在原空间之后续接新空间，而是寻找更大内存空间，将原数据拷贝进新空间，释放原空间
//void Print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}

void test5()
{
	//1.默认构造
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	Print(v1);

	//2.通过区间的方式构造——v2可以选择性的拷贝v1的数据
	vector<int> v2(v1.begin(), v1.end());
	//vector<int> v2(v1);
	Print(v2);

	//3.n个元素的方式构造——存入n个x数
	vector<int> v3(10, 99);	//10个99
	Print(v3);

	//4.全拷贝构造——类比方式2
	vector<int> v4(v3);
	Print(v4);
}

//int main()
//{
//	test5();
//	return 0;
//}