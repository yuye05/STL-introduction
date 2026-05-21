#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>//sort算法
#include <iomanip>	//输出精度转换
#include <ctime>	//随机数种子

using namespace std;

//题目描述：有五名选手ABCDE，10个评委分别给每一名选手打分，去除最高分和最低分，然后取平均分

//实现步骤：
//1.创建五名选手，放到vector中
//2.遍历vector容器，取出来每个选手，执行for循环，可以把10个评委打分存到deque容器中
//3.sort算法deque容器进行分数排序，取出最高最低分
//4.deque容器遍历，累加总分
//5.获取平均分

//总结：
//string容器存放选手名字
//vector容器存放五名选手(name, score)信息
//deque容器存放每个选手的分数

class Person
{
private:

public:
	string m_name; //姓名
	double m_score;   //分数

	Person(string name, double score)
	{
		this->m_name = name;
		this->m_score = score;
	}

};


void createPerson(vector<Person>& v);

void setScore(vector<Person>& v);

void showScore(vector<Person>& v);






