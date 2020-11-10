#include "manager.h"

Manager::Manager(int id, string name, int deptId)
{
	// 注意：列表初始化只能初始化类自身的成员变量，不能直接初始化继承过来的成员变量，所以这里用赋值的方式
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = deptId;
}

void Manager::showInfo()
{
	cout << "职工编号： " << this->m_Id
		<< " \t职工姓名： " << this->m_Name
		<< " \t岗位：" << this->getDeptName()
		<< " \t岗位职责：完成老板交给的任务,并下发任务给员工" << endl;
}

std::string Manager::getDeptName()
{
	return string("经理");
}

