#include <stdio.h>

double f2c(double f)
{
	return 5 * (f - 32) / 9;
}

int main()
{
	double f;
	scanf("%lf", &f);
	printf("%.2lf\n", f2c(f));

	return 0;
}
