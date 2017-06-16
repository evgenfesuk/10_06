// 10_06.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "compStr.h"
#include <iostream>


int main()
{
	char* str1 = "AAAA";
	char* str2 = "AAA";
	int result;
	result = compStr(str1, str2);
	std::cout << result << std::endl;
	system("pause");
    return 0;
}

