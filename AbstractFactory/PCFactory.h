#pragma once
#include "PC.h"

//»нтерфейс фабрики дл€ создани€ конфигур€ции системного блока
//персонального компьютера

class PCFactory
{
public:
	virtual MainBoard* createMainBoard() = 0;
	virtual CPU* createCPU() = 0;
	virtual RAM* createRAM() = 0;
};
