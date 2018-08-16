#include "stdafx.h"

extern std::string fkey,vkey, mkey;

//////////////////////////////////////////////////////////////////////
//  Инициализация команды 
// (в случае ввода ошибочных параметров - вывод справки)
//////////////////////////////////////////////////////////////////////

bool CommandInterface:: Init(const ParametrLine& param)
{
	std::string scom;

	if(param.HasKey(fkey)) scom = param.GetParametr(mkey);
	else scom = "help";

	if(scom == "words") UCommand = new CountWords_Command;
	if(scom == "checksum") UCommand = new SumContents_Command;
	if(scom != "words" && scom != "checksum")	UCommand = new ShowHelp_Command;

	return UCommand -> Init(param);	
}

//////////////////////////////////////////////////////////////////////
//  Выполнение 
//////////////////////////////////////////////////////////////////////

bool CommandInterface:: Exec()
{
	return UCommand -> Exec();
}