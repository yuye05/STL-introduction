#include "model.h"

//pop_back();	//删除最后一个元素
//insert(const_iterator pos, ele);	//迭代器指向位置pos前面！插入元素ele
//insert(const_iterator pos, int count, ele);	//指定插入数量
//erase(const_iterator pos);	//删除
//erase(const_iterator start, const_iterator end);	//删除start到end之间的元素
//clear();	//清空

void test8()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	//遍历
	Print(v1);

	//尾删
	v1.pop_back();
	Print(v1);

	//插入——注意迭代器和插入位置
	v1.insert(v1.begin() + 1, 100);
	Print(v1);
	v1.insert(v1.begin(), 3, 99);
	Print(v1);

	//删除
	v1.erase(v1.begin());
	Print(v1);
	v1.erase(v1.begin(), v1.begin() + 2);
	Print(v1);

	//清空
	v1.clear();
	Print(v1);
}

//int main()
//{
//	test8();
//	return 0;
//}
