#include <stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	double F = 1;
	int i = 1;
	while (i <= n)
	{
		F *= i;
		i++;
	}
	printf("%d! = %.0lf", n, F);
}
