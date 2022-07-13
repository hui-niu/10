#include "Girl.h"

//颜值系数
constexpr auto YANZHI_FACTOR = 100;

Girl::Girl()
{
}

Girl::Girl(int age, string name, int yanZhi)
{
	this->age = age;
	this->name = name;
	this->yanZhi = yanZhi;
}



Girl::~Girl()
{
}

int Girl::getAge()
{
	return age;
}

string Girl::getName()
{
	return name;
}

int Girl::getYanZhi()
{
	return yanZhi;
}

void Girl::description()
{
	cout << "年龄:" << age << " 姓名:" << name << " 颜值:" << yanZhi << endl;

}

bool Girl::satisfied(Boy& boy)
{
	//todo
	return false;
}
