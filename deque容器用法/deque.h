#include <iostream>
#include <deque>
#include <vector>

using namespace std;

//deque的基本概念：本质上是一个双端数组，可以对头端进行插入删除操作

//相对于deque而言，对头部的插入和删除速度更快
//push_front();	//对头部的插入
//pop_front();	//对头部的删除
//push_back();	//对尾部的插入
//pop_back();	//对尾部的删除

void Print(deque<int>& d);