#include <stdio.h>

int main()
{
	float S = 0;
	int n = 1000;
	int i = 1;
	while (i <= n)
	{
		S += (float)1/i;
		i++;
	}
	printf("Tong tat ca cac so la: %f", S);
}
