#include <stdio.h>

int main()
{
	int a,b,bcnn;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if ((a == 0 || b == 0) || (a == 0 && b == 0)) 
	{
		printf("Hai so nay khong co boi chung");
	}
	else
	{
		for (int i = 1; i <= a*b; i++)
		{
			if (i%a == 0 && i%b == 0)
			{
				bcnn = i;
				break;
			}
		}
		printf("Boi chung nho nhat cua hai so la: %d", bcnn);	
	}
}

