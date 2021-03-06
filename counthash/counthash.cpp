#include "stdafx.h"

int main(int argc, const char* argv[])
{
	ParametrLine PL(argv, argc);
	CommandInterface CI;
	if (!CI.Init(PL))
		std::cout << "Не удалось произвести инициализацию команды" << std::endl;
	else
		if (!CI.Exec())
			std::cout << "Не удалось выполнить команду" << std::endl;
	return 0;
}