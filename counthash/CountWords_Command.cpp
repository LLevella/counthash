#include "stdafx.h"

extern std::string fkey,vkey, mkey;

bool CountWords_Command::Init(const ParametrLine& param)
{
	std::string uf = param.GetParametr(fkey);
	std::string uv = param.GetParametr(vkey);
	
	if(uf == param.Empty() || uv == param.Empty()) return false;

	this -> fin = uf;
	this -> uword = uv;

	return true;
}

bool CountWords_Command::Exec()
{
	std::ifstream input(fin.c_str());

	if(!input) return false;
	
	Counter Count;
	std::cout<< Count.Calc(input,uword) << std::endl;
	input.close();

	return true;	
}