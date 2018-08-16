#include "stdafx.h"

extern std::string fkey, vkey, mkey;

bool SumContents_Command::Init(const ParametrLine& param)
{
	std::string uf = param.GetParametr(fkey);
		
	if(uf == param.Empty()) return false;

	this ->fin = uf;

	return true;
}

bool SumContents_Command::Exec()
{
	std::ifstream input(fin.c_str(), std::ios::binary);
	if(!input) return false;
	
	Counter Count;
	std::cout<< Count.Calc(input) << std::endl;
	input.close();
	return true;	
}