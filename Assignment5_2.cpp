#include <stdio.h>

int main()
{
	int n;
	int sum = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0)
		{
			printf("%d  ", i);
			sum += i;
		}
	}
	printf("\nTong tat ca cac uoc la: %d", sum);
}
