#include <stdio.h>

#define N 5

int A[N][N], B[N][N];

// A => ת�� => B
void change(int A[N][N], int B[N][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			B[j][i] = A[i][j];
		}
	}
}

void p(int q[N][N])
{
	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d ", q[i][j]);
		}
		printf("\n");
	}
	printf("==========\n");
}

int main()
{
	// ��A��ʼ��
	int i;
	for (i = 0; i < N * N; i++)
	{
		A[i / N][i % N] = i;
	}
	p(A);
	change(A, B);
	p(B);
	return 0;
}
