#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
//string是一个类，本质上是一个动态的char*数组

//1.赋值（类比strcpy）—— 可直接通过 s1 = s2来赋值
//int main()
//{
//	string s1 = "abcdef";
//	string s2 = s1;
//	cout << s2 << endl;
//	return 0;
//}

//2.长度（类比strlen）—— str.size() / str.length()
//返回类型都为 size_t，但是也可以用int, 注意：不会计算字符串末尾 \0 的那一位
//int main()
//{
//	string s1 = "abcdef";
//	string s2 = "apple";
//	const size_t n1 = s1.size();
//	const int n2 = s2.length();
//	cout << n1 << endl;
//	cout << n2 << endl;
//	//遍历输出
//	for (int i = 0; i < n1; i++)
//	{
//		cout << s1[i] << " ";
//	}
//	return 0;
//}

//3.拼接（类比strcat）—— 直接用 + 追加在原字符串后面
//int main()
//{
//	string s1 = "abc";
//	string s2 = "def";
//	string s = s1 + s2;
//	//更简单
//	s1 = s1 + s2;
//	cout << s << endl;
//	cout << s1 << endl;
//	return 0;
//}

//4.比较（类比strcmp）—— 直接用 == < > 符号判断
//int main()
//{
//	string s1, s2;
//	cin >> s1 >> s2;
//	if (s1 == s2)
//		cout << "s1 == s2" << endl;
//	else if (s1 < s2)
//		cout << "s1 < s2" << endl;
//	else
//		cout << "s1 > s2" << endl;
//	return 0;
//}

//5.查找（类比strstr）—— s.find()
//注意！find()返回得是int类型，其值是子串在原字符串的起始位数
//如果没找到，都返回 -1 
//可通过判断语句来写
//int main()
//{
//	string s = "abcdef";
//	string x1 = "cd";
//	string x2 = "g";
//	string x3 = "def";
//	int ret1 = s.find(x1);
//	int ret2 = s.find(x2);
//	int ret3 = s.find(x3);
//	cout << ret1 << endl;
//	cout << ret2 << endl;
//	cout << ret3 << endl;
//	if (ret2 == -1)
//		cout << "查找失败\n";
//	else
//		cout << ret2 << endl;
//	return 0;
//}

//6.提取，类似s.find()—— s.substr()
//int main()
//{
//	string text = "hello world";	//'h'索引为0，空格也算一位
//	string x = text.substr(6.5);	//从索引6，也就是第6个字符'w'开始访问，向后访问5个字符
//	cout << x << endl;
//	return 0;
//}

//7.修改 —— insert() replace() erase() clear()
// 以上函数都可以直接操作原字符串，不用重新声明新字符串接收

//111 插入 isnert
//合法的插入位置范围：0 - s.size()（即 0 到 5），共 6 个合法位置
//int main()
//{
//	string s = "hello";
//	s.insert(5, " world");	//5 意为从索引为5的地方，即o之后开始插入
//	cout << s << endl;
//	s.insert(5, 3, '!');	//意为在第五个字符之后插入3个'!'
//	//注：只有单个字符才可以这样批量添加
//	cout << s << endl;
//	return 0;
//}

//222 替换 replace
//int main()
//{
//	string s = "I like python";
//	s.replace(7, 6, "C++");	//意为从索引为7的字符开始，把这及其之后6个字符全部清除并替换为C++（长度不限）
//	cout << s << endl;
//	s.replace(2, 4, "loveee");	//同理，清除like，并替换成love
//	cout << s << endl;
//	return 0;
//}

//333 删除 erase()
//int main()
//{
//	string s = "hello world!!!";
//	string s1 = s;
//	s.erase(5, 1);	//把索引为5的1个字符（空格）删去
//	cout << s << endl;
//	s1.erase(11);	//把索引为11的字符及其后面的内容全部清空
//	cout << s1 << endl;
//	return 0;
//}

//444 清空 clear()
//int main()
//{
//	string s = "临时数据";
//	s.clear();
//	cout << s << endl;
//	//用empty()来检查——empty()返回的是布尔类型，即true/false
//	if (s.empty())	//判断为true
//		cout << "这是一个空字符串\n";
//	return 0;
//}


//字符串补充
//int main()
//{
//	//C风格写法，但是必须加const
//	const char* name = "wangzhenyu";
//	cout << name << endl;
//	char name1[5] = { 'w', 'a', 'n','g' ,'\0'};
//	cout << name1 << endl;
//	
//
//	return 0;
//}

int main()
{
	//以下两种是等价的
	char name[6] = "wa\0ng";
	const char* name1 = "wang";
	cout << strlen(name) << endl;
	cout << sizeof(name) << endl;	//sizeof()会计算\0，也算作一个字节

	return 0;
}

