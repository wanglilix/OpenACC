// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctime> 

int _tmain(int argc, _TCHAR* argv[])
{
	clock_t start, finish;
	start = clock();

	const int max = 5000;
//	const int MAX = 5000;
	int ** A;
	A = (int**)malloc(5000*sizeof(int*));
	for (int i = 0; i < 5000; ++i)
	{
		A[i] = (int*)malloc(5000 * sizeof(int));
	}
	A[4999][4999] = 1;
//nt B[max][MAX];



	return 0;
}

