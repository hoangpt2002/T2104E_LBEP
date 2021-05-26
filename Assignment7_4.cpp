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
	int sum = 0;
	int sumMax = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			dem++;
			sum += a[i];
			if (sum > sumMax)
			{
				sumMax = sum;
			}
		}
		else
		{
			dem = 0;
			sum = 0;
		}
	}
	printf("Chuoi so duong co tong lon nhat la: %d", sumMax);
}

