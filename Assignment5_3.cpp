#include <stdio.h>

int main()
{
	int a,b,min,ucln;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if (a == 0 && b == 0)
	{
		printf("Hai so khong co uoc chung");
	}
	else
	{
		if (a == 0 || b == 0)
		{
			ucln = a + b;
		}	
		else
		{
			if (a < b)
			{
				min = a; 
			}
			else
			{
				min = b;
			}
			for (int i = 1; i <= min; i++)
			{
				if (a%i == 0 && b%i == 0)
				{
					ucln = i;
				}
			}
		}
		printf("Uoc chung lon nhat cua hai so la: %d", ucln);
	}
}
