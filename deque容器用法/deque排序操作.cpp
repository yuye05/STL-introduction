#include "deque.h"
#include <algorithm> //标准算法头文件
//deque容器排序
void test7()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);

	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	Print(d);

	//排序——sort（默认排升序）
	sort(d.begin(), d.end());
	cout << "排序后：" << endl;
	Print(d);
}

int main()
{
	test7();
	return 0;
}