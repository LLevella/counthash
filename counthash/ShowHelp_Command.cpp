#include "stdafx.h"

bool ShowHelp_Command::Init(const ParametrLine& param)
{
	return true;
}

bool ShowHelp_Command::Exec()
{
	std::cout << "����������� ����� -f -m -v ��� ���������� ������ � ������" << std::endl;
	return true;	
}