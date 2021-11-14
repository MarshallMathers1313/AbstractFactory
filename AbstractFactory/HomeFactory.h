#pragma once
#include "PCFactory.h"

class HomeFactory : public PCFactory
{
public:
	MainBoard* createMainBoard()
	{
		return new MainBoard("Acer", "PGA", 50);
	}

	CPU* createCPU()
	{
		return new CPU("Intel Core i-5", 400, 80);
	}

	RAM* createRAM()
	{
		return new RAM("DDR4", 1600, 40);
	}
};