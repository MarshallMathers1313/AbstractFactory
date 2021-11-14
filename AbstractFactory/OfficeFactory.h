#pragma once
#include "PCFactory.h"

class OfficeFactory : public PCFactory
{
public:
	MainBoard* createMainBoard()
	{
		return new MainBoard("Acer", "PGA", 100);
	}

	CPU* createCPU()
	{
		return new CPU("Intel Core i-9", 600, 100);
	}

	RAM* createRAM()
	{
		return new RAM("DDR4", 1800, 60);
	}
};