#include <iostream>
#include <string>
#include "workermanager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;

int main() {
	WorkerManager wm;
	char choice;
	while (true) {
		// 展示菜单
		wm.showMenu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case '0': // 退出系统
			wm.exitSystem();
			break;
		case '1': // 添加职工
			wm.Add_Emp();
			break;
		case '2': // 显示职工
			wm.Show_Emp();
			break;
		case '3': // 删除职工
			wm.Del_Emp();
			break;
		case '4': // 修改职工
			wm.Mod_Emp();
			break;
		case '5': // 查找职工
			wm.Find_Emp();
			break;
		case '6': // 排序职工
			wm.Sort_Emp();
			break;
		case '7': // 清空文件
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}

		// 增加了一行，目的是获取一个字符后就清空缓冲区
		cin.ignore(100,'\n'); //忽略cin中最多前100个字符，或是'\n'之前的字符
	}

	system("pause");
	return 0;
}