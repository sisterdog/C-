#include <iostream>
using namespace std;
string pass_word = "我最喜欢小狗妹";
string cin_pass_word;
string _a_;
int password()
{
	int pass_word_number = 0;
	for (int i = 1; i <= 3; i++)
	{
		cin >> cin_pass_word;
		if (cin_pass_word == pass_word)
		{
			break;
		}
		if (cin_pass_word != pass_word)
		{
			pass_word_number++;
		}
	}
	if (pass_word_number >= 3)
	{
		return 0;
	}
	if (pass_word_number < 3)
	{
		return 1;
	}
}
void __init__()
{
	pass_word = "我最喜欢小狗妹";
	cout << "已重置所有自定义设置" << endl;
}

	


void help()
{
	cout << "-help查看帮助" << endl;
	cout << "-go 开始查询代码" << endl;
	cout << "-init 重置" << endl;
}
void az()
{
	char help;
	cout << "请输入A----Z中的一个字母（-help 查看帮助）" << endl;
	cin >> help;
	if (help == 't')
	{
		cout << "本程序是一个桶排序程序。" << endl;
	}
}

int main(int argc[], char* argv[])
{
	while (true)
	{
		cout << "请输入（-help 查看帮助）" << endl;
		cin >> _a_;
		system("cls");
		if (_a_ == "-help")
		{
			help();
		}
		if (_a_ == "-go")
		{
			az();
		}
		if (_a_ == "-init")
		{
			__init__();
		}
	}
}