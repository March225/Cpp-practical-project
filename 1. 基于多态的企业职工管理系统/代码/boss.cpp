#include "boss.h"

Boss::Boss(int id, string name, int deptId)
{
	// 注意：列表初始化只能初始化类自身的成员变量，不能直接初始化继承过来的成员变量，所以这里用赋值的方式
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = deptId;
}

void Boss::showInfo()
{
	cout << "职工编号： " << this->m_Id
		<< " \t职工姓名： " << this->m_Name
		<< " \t岗位：" << this->getDeptName()
		<< " \t岗位职责：管理公司所有事务" << endl;
}

std::string Boss::getDeptName()
{
	return string("总裁");
}
