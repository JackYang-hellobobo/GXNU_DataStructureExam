#include <stdio.h>
#include <string.h>
/*
���� / ������ = �� ... ����
...
              = 0  ... ����(����) 

*/

// �ǵݹ�
int f1(int x)
{
	char path[100];
	int k = 0;
	while (x)
	{
		int a = x / 2;
		int b = x % 2; // a:�� b:����
		path[k++] = (b + '0');
		x = a; // ��һ����������
	}
	while (k >= 0)
		printf("%c", path[--k]);
}

// �ݹ�
void f2(int x)
{
	int a = x / 2, b = x % 2;
	if (a == 0)
	{
		printf("%d", b);
		return;
	}
	f2(a), printf("%d", b);
}
int main()
{
	f1(15);
	printf("\n");
	f2(15);
	return 0;
}
