#pragma once
#include <iostream>
using namespace std;
class RAM
{
	//���
	string name;
	//��������
	int speed;
	//����
	int cost;

public:
	RAM(string name = "\0", int speed = 0, int cost = 0)
		:name{ name }, speed{ speed }, cost{ cost }
	{
		cout << "MainBoard Created: " << this << endl;
	}

	~RAM()
	{
		cout << "MainBoard Destroy: " << this << endl;
	}

	void print()
	{
		cout << "Name: " << name << endl;
	}
};