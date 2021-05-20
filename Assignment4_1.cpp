#include <stdio.h>

int main()
{
	double S = 0;
	int n = 100000;
	int i = 1;
	while (i <= n)
	{
		S += i;
		i++;
	}
	printf("Tong tat ca cac so la: %0.lf", S);
}
