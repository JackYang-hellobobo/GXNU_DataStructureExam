#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	int y = 0;
	if (x >= 0)
		y = x + 1;
	else
		y = x - 1;
	printf("%d\n", y);
	return 0;
}
