#pragma once
#include "CPU.h"
#include "MainBoard.h"
#include "RAM.h"
//Класс Компьютер
class PC
{
	MainBoard* mainbord;
	CPU* cpu;
	RAM* ram;

public:
	PC()
	{
		mainbord = nullptr;
		cpu = nullptr;
		ram = nullptr;
	}


	void setMainBoard(MainBoard* mainBoard)
	{
		this->mainbord = mainBoard;
	}

	void setCPU(CPU* cpu)
	{
		this->cpu = cpu;
	}

	void setRAM(RAM* ram)
	{
		this->ram = ram;
	}
	

	MainBoard* getMainBoard()
	{
		return mainbord;
	}

	CPU* getCPU()
	{
		return cpu;
	}

	RAM* getRam()
	{
		return ram;
	}

	void print()
	{
		cout << "Mainboard: \n";
		mainbord->print();

		cout << "CPU: \n";
		cpu->print();

		cout << "RAM: \n";
		ram->print();
	}

	~PC()
	{
		delete mainbord;
		delete cpu;
		delete ram;
	}

};