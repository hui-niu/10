#include "Girl.h"

//��ֵϵ��
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
	cout << "����:" << age << " ����:" << name << " ��ֵ:" << yanZhi << endl;

}

bool Girl::satisfied(Boy& boy)
{
	//todo
	return false;
}
