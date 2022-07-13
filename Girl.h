#pragma once
#include<string>
#include<iostream>

class Boy;
using namespace std;

class Girl
{
public:

	Girl();
	Girl(int age, string name, int yanZhi);
	~Girl();
	int getAge();
	string getName();
	int getYanZhi();
	void description();
	bool satisfied(Boy& boy);

private:
	int age = 0;
	string name = "δ֪";
	int yanZhi = 0;

};

