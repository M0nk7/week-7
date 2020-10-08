#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int matrix1[2][2], matrix2[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", matrix1[i][j] + matrix2[i][j]);
		}
		printf("\n");
	}
	return 0;
}