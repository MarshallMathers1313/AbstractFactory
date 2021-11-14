#pragma once
#include "PCFactory.h"
class PCConfigurator
{
	//�������, ������� ���������� ���������

	PCFactory* pcFactory;

public:
	PCConfigurator()
	{
	}

	PCFactory* getFactory()
	{
		return pcFactory;
	}

	void setFactory(PCFactory* pcCurrentFactory)
	{
		pcFactory = pcCurrentFactory;
	}

	void configure(PC* pc)
	{
		pc->setMainBoard(pcFactory->createMainBoard());
		pc->setCPU(pcFactory->createCPU());
		pc->setRAM(pcFactory->createRAM());
	}

};