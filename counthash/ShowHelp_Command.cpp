#include "stdafx.h"

bool ShowHelp_Command::Init(const ParametrLine& param)
{
	return true;
}

bool ShowHelp_Command::Exec()
{
	std::cout << "Используйте ключи -f -m -v для корректной работы с файлом" << std::endl;
	return true;	
}