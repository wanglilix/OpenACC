
#include <stdio.h>
#include <stdlib.h>
#include <ctime> 
#include <math.h>
#include <string.h>
#include <omp.h>
#define MAX 5000
#define MIN 4000

int A[MAX][MAX];
int B[MAX][MAX];

int main(int argc, char* argv[])
{
	clock_t start, finish;
	start = clock();

	const int m = MAX;
	memset(A, 0, m*m*sizeof(int));
	memset(B, 1, m*m*sizeof(int));
#pragma acc data copyin(A), copyin(B)
#pragma acc kernels
#pragma acc loop independent
	for (int m = 0; m<MIN; ++m)   //无数据依赖性
	{
		for (int i = 0; i<m; ++i)  //无数据依赖性
		{
			for (int j = 0; j<m; ++j)
			{
				 int tmp = A[i][j];
				 tmp = B[i][j];
			}
		}
	}



	finish = clock();
	printf("%d", finish - start);
	system("pause");
	return 1;

}

