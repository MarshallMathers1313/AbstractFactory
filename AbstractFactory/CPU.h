#pragma once
#include <iostream>
using namespace std;
class CPU
{
	//Имя
	string name;
	//скорость
	int speed;
	//Цена
	int cost;

public:
	CPU(string name = "\0", int speed = 0, int cost = 0)
		:name{ name }, speed{ speed }, cost{ cost }
	{
		cout << "MainBoard Created: " << this << endl;
	}

	~CPU()
	{
		cout << "MainBoard Destroy: " << this << endl;
	}

	void print()
	{
		cout << "Name: " << name << endl;
	}
};