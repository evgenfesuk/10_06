// 10_06.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "compStr.h"
#include <iostream>


int main()
{
	char* str1 = "a";
	char* str2 = "aaa";
	int result = compStr(str1, str2);
	std::cout << result << std::endl;
	system("pause");
    return 0;
}

