#include <stdio.h>

int main()
{
	int a[100];
	int n;
	int x = 0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			x = a[i];
			break;
		}
	}
	if (x == 0)
	{
		printf("Mang khong co so nguyen duong");
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if(a[i] < x && a[i] > 0)
			{
				x = a[i];
			}
		}
		printf("So duong nho nhat la: %d", x);
	}
}
