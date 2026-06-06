#pragma once
#include <iostream>
#include <set>
#include <string>

using namespace std;

//set基本概念：所有元素会在插入时自动排序，底层结构是二叉树实现
//注意：set和multiset的区别：set不允许容器有重复元素，但是multiset允许

void Print(multiset<int>& s);

void Print(set<int>& s);

void test1();

void test2();

void test3();

