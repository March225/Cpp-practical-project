#include<iostream>
using namespace std;
#include "speechManager.h"

int main() {
	SpeechManager sm;
	char choice; // 用来存储用户的选项
	while (true)
	{
		sm.show_Menu();

		cout << "请输入您的选择： " << endl;
		cin >> choice; // 接受用户的选项

		switch (choice)
		{
		case '1':  // 开始比赛
			sm.startSpeech();
			break;
		case '2':  // 查看记录
			sm.showRecord();
			break;
		case '3':  // 清空记录
			sm.clearRecord();
			break;
		case '0':  // 退出系统
			sm.exitSystem();
			break;
		default:
			system("cls"); // 清屏
			break;
		}

		cin.ignore(100, '\n');
	}

	system("pause");
	return 0;
}