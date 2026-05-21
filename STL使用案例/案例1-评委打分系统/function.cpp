#include "model.h"

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";	//对应下标0-4
	for (int i = 0; i < 5; i++)
	{
		//姓名拼接
		string name = "选手";
		name += nameSeed[i];

		//分数
		double score = 0;

		//创建对象
		Person p(name, score);

		//将创建的Person对象放入容器中
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	//外层循环，对应五个选手
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将十个评委的分数放到deque容器中
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			//随机数代码分两步看：rand()%41表示任何数对41取余，结果只能是0-40；
			//把上面的0-40全部加上60，得到60-100，即最终随机数范围
			d.push_back(score);	//一个选手得十个分数

		}
		cout << "姓名：" << it->m_name << "  " << "分数：" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl << endl;
		//先从小到大排序，为找大小做准备
		sort(d.begin(), d.end());

		//去除最高分和最低分
		d.pop_back();	//去掉最高
		d.pop_front();	//去掉最低

		//取平均分
		int sum = 0;
		//先类加
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)//注意在一个定义域中迭代器名字要不一样
		{
			sum += *dit;
		}
		//再取平均
		double  average = 0;
		average = sum / (double)d.size();

		//将平均分赋值给选手
		it->m_score = average;

		//测试打分
		//cout << "平均分为：" << it->m_score << endl << endl;
	}
}

void showScore(vector<Person>& v)
{
	cout << "====== 分数统计 ======" << endl;
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << fixed << setprecision(2);	//强制转换成两位小数输出
		cout << "选手" << it->m_name << "的平均分为：" << it->m_score << endl;
	}

}
