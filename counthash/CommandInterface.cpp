#include "stdafx.h"

extern std::string fkey,vkey, mkey;

//////////////////////////////////////////////////////////////////////
//  ������������� ������� 
// (� ������ ����� ��������� ���������� - ����� �������)
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
//  ���������� 
//////////////////////////////////////////////////////////////////////

bool CommandInterface:: Exec()
{
	return UCommand -> Exec();
}