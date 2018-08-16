#include "stdafx.h"

ParametrLine::ParametrLine(const char* _argv[], int _argc)
{
	if(_argc>1)
	{
		this -> argc = _argc-1;
		for(int i = 1; i < _argc; i++)
		{
			this -> argv.push_back(_argv[i]);
		}
	}
	else
	{
		this -> argc = 0;
	}
}

//////////////////////////////////////////////////////////////////////
//  Поиск ключа 
//////////////////////////////////////////////////////////////////////

bool ParametrLine::HasKey(std::string& CommandKey) const
{	
	if(!this -> argv.empty())
	{
		for(int i = 0; i < this -> argc; i++)
		{
			if(this -> argv[i] == CommandKey) return true;
		}
	}
	return false;
}

//////////////////////////////////////////////////////////////////////
//  Параметр следующий за ключом
//////////////////////////////////////////////////////////////////////

std::string ParametrLine::GetParametr(std::string&  CommandKey) const
{
	if(!this -> argv.empty())
	{
		for(int i = 0; i < this -> argc; i++)
		{
			if(this -> argv[i] == CommandKey)
				if( i+1 < this -> argc) return this -> argv[i+1];
		}
	}

	return this -> Empty();
}