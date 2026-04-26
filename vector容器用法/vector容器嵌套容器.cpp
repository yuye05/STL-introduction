#include "model.h"

//类比二维数组
void test4()
{
	vector<vector<int>> v;
	//创建小容器—— v的下标决定有多少行
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	//添加数据—— i决定有多少列
	for (int i = 0; i < 5; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}
	//将小容器插入到大容器中—— 插入一个四行五列的二维数组
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//通过大容器遍历所有数据 —— 类比二维数组嵌套for循环输出
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//(*it) 就是指：四个小容器vector<int> v1-v4
		for (vector<int>::iterator jt = (*it).begin(); jt != (*it).end(); jt++)
		{
			cout << (*jt) << "  ";
		}
		cout << endl;
	}

}

//int main()
//{
//	test4();
//	return 0;
//}