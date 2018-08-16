#include "stdafx.h"
	
long Counter::Calc(std::ifstream& input) const
{
	long sum;
	long fsize;
	long cword;
	int sizeword;

	sizeword = (sizeof cword);
	input.seekg(0,std::ios::end);
	fsize = input.tellg();
	input.seekg(0,std::ios::beg);
	
	sum = 0;

	for(int i = 0; i < fsize; i += sizeword)
	{
		input.read((char*)&cword, sizeword);//Читает каждые четыре байта
		sum += cword;
	}
	return sum;
}

long Counter::Calc(std::ifstream& input, std::string& words) const
{
	long sum;
	long fsize;
	long curpos; 

	std::string readw;

	input.seekg(0,std::ios::end);
	fsize = input.tellg();
	input.seekg(0,std::ios::beg);

	sum = 0;
	curpos = 0;
	while (curpos<fsize) // читаем построчно и считаем те, что совпадают с параметром
	{
		getline(input,readw); 
		if(readw == words) sum++;
		curpos = input.tellg();
	}
	return sum;
}
