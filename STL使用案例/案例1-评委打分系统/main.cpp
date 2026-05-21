#include "model.h"

int main()
{
	//初始加一个随机数种子（时间戳）
	srand((unsigned int)time(NULL));

	//1.创建五名选手
	vector<Person> v;
	createPerson(v);

	//测试
	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << "姓名：" << (*it).m_name << "  " << "分数：" << (*it).m_score << endl;
	//}

	//2.打分
	setScore(v);

	//3.显示最后得分
	showScore(v);
	return 0;
}