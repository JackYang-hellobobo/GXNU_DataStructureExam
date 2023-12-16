#include <stdio.h>

int main()
{
	int i = 1, s = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 != 0)
			s += i;
	}
	printf("%d\n", s);
	return 0;
}
