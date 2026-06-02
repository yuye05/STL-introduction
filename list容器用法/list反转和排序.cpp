#include "list.h"

void test7()
{
	list<int> L1;
	L1.push_back(30);
	L1.push_back(10);
	L1.push_back(40);
	L1.push_back(20);
	cout << "反转前：" << endl;
	Print(L1);
	
	//反转
	L1.reverse();	//注意！这里容易和vector的reserve(预留)关键词混淆，注意区分！
	cout << "反转后：" << endl;
	Print(L1);
}

bool myCompare(int v1, int v2)
{
	//降序，就让第一个数 > 第二个数
	return v1 > v2;

}

//排序
#include <algorithm>
void test8()
{
	list<int> L1;
	L1.push_back(30);
	L1.push_back(10);
	L1.push_back(40);
	L1.push_back(20);
	cout << "排序前：" << endl;
	Print(L1);

	//sort(L1.begin(), L1.end());
	//注意！这里会报错，因为所有不支持随机访问迭代器的容器(比如vector,deque)，不可以使用标准算法

	L1.sort();
	cout << "升序排序后：" << endl;
	Print(L1);

	L1.sort(myCompare);
	cout << "降序排序后：" << endl;
	Print(L1);

}

int main()
{
	//test7();
	test8();
	return 0;
}