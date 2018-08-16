#pragma once

//////////////////////////////////////////////////////////////////////
//  ����� �������� � ������� � ���������� ��������� ������ 
//////////////////////////////////////////////////////////////////////

class ParametrLine  
{
	std::vector<std::string> argv;
	int argc;

public:

	ParametrLine (const char* argv[], int argc);

	// ������� ��������� ���������� �� ������
	std::string GetParametr(std::string& CommandKey) const;

	// ����� �����
	bool HasKey(std::string& CommandKey) const; 

	// ������ ������
	inline std::string Empty() const 
	{
		return "";
	}
};
