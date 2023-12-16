#include <stdio.h>

void f(int a[], int l, int r)
{
	int i = l - 1, j = r + 1;
	while (i < j)
	{
		while (a[++i] % 2 != 0)
			;
		while (a[--j] % 2 == 0)
			;
		if (i < j)
		{
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
}

int main()
{
	// ��������
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	f(a, 0, 9 - 1);
	int i;
	for (i = 0; i < 9; i++)
		printf("%d ", a[i]);

	return 0;
}
