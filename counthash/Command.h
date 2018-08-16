#pragma once

class Command
{

public:

	virtual bool Init(const ParametrLine& param) = 0;
	virtual bool Exec() = 0;
};

//  Класс для подсчета слов в файле

class CountWords_Command : public Command 
{
	std::string fin;
	std::string uword; 

public:

	bool Init(const ParametrLine& param);
	bool Exec();
}; 

//  Класс для вычисление суммы  

class SumContents_Command : public Command 
{
	std::string fin;

public:

	bool Init(const ParametrLine& param);
	bool Exec();
};


//  Класс - справка
class ShowHelp_Command : public Command 
{

public:

	bool Init(const ParametrLine& param);
	bool Exec();
};