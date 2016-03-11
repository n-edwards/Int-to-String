// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int _tmain()
{
	int i;
	char buffer[33];

	printf("Enter a number: ");
	scanf_s("%d", &i);

	_itoa_s(i, buffer, 10);
	printf("string decimal: %s\n", buffer);

	//itoa(i, buffer, 16);
	//printf("hexadecimal: %s\n", buffer);

	//itoa(i, buffer, 2);
	//printf("binary: %s\n", buffer);
}
