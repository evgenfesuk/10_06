#include "stdafx.h"
#include "compStr.h"
#include <iostream>

int compStr(char *str1, char *str2)
{
	int length;
	std::strlen(str1) > std::strlen(str2) ? length = std::strlen(str1) : length = std::strlen(str2);

	for (int i = 0; i < length; i++)
	{
		if (*(str1 + i) > *(str2 + i))	return 1;
	}

	for (int i = 0; i < length; i++)
	{
		if (*(str1 + i) < *(str2 + i))	return -1;
	}
	return 0;
}
