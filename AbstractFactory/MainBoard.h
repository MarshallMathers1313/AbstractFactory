#pragma once
#include <iostream>
using namespace std;
class MainBoard
{
	//���
	string name;
	//�����
	string soket;
	//����
	int cost;

public:
	MainBoard(string name = "\0", string soket = "\0", int cost = 0)
		:name{ name }, soket{ soket }, cost{ cost }
	{
		cout << "MainBoard Created: " << this << endl;
	}

	~MainBoard()
	{
		cout << "MainBoard Destroy: " << this << endl;
	}

	void print()
	{
		cout << "Name: " << name << endl;
	}
};