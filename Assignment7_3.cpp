#include <stdio.h>

int main()
{
	int a[100];
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
	int dem = 0;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			dem++;
			if (dem > max)
			{
				max = dem;
			}
		}
		else
		{
			dem = 0;
		}
	}
	if (max == 0)
	{
		printf("Mang khong co so duong");
	}
	else
	{
		printf("So duong lien tiep trong mang la: %d", max);
	}
}

