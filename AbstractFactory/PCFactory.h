#pragma once
#include "PC.h"

//��������� ������� ��� �������� ������������ ���������� �����
//������������� ����������

class PCFactory
{
public:
	virtual MainBoard* createMainBoard() = 0;
	virtual CPU* createCPU() = 0;
	virtual RAM* createRAM() = 0;
};
