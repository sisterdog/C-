#include <iostream>
using namespace std;
string pass_word = "����ϲ��С����";
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
	pass_word = "����ϲ��С����";
	cout << "�����������Զ�������" << endl;
}

	


void help()
{
	cout << "-help�鿴����" << endl;
	cout << "-go ��ʼ��ѯ����" << endl;
	cout << "-init ����" << endl;
}
void az()
{
	char help;
	cout << "������A----Z�е�һ����ĸ��-help �鿴������" << endl;
	cin >> help;
	if (help == 't')
	{
		cout << "��������һ��Ͱ�������" << endl;
	}
}

int main(int argc[], char* argv[])
{
	while (true)
	{
		cout << "�����루-help �鿴������" << endl;
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