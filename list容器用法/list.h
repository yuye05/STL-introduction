#include <iostream>
#include <list>

using namespace std;

void Print(const list<int>& L);

//list是链表，不同于vector和deque是连续储存，list是按结点进行储存
//优势：可以对任意位置进行插入等操作
//缺点：对容器的遍历速度较慢，且占用的空间较大（因为有指针域）

//结点分为：数据域和指针域，指针域储存的是下一个节点的地址





