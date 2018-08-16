#pragma once

//////////////////////////////////////////////////////////////////////
//  Класс хранения и доступа у параметрам командной строки 
//////////////////////////////////////////////////////////////////////

class ParametrLine  
{
	std::vector<std::string> argv;
	int argc;

public:

	ParametrLine (const char* argv[], int argc);

	// возврат параметра следующего за ключом
	std::string GetParametr(std::string& CommandKey) const;

	// поиск ключа
	bool HasKey(std::string& CommandKey) const; 

	// пустая строка
	inline std::string Empty() const 
	{
		return "";
	}
};
