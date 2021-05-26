#include <stdio.h>

int main()
{
	int a[100];
	int n;
	int le = 0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) 
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i]%2 == 1)
		{
			le = a[i]; 
		}
	}
	if (le == 0)
	{
		printf("Mang khong co so le");
	}
	else
	{
		printf("So le cuoi cung cua mang la: %d", le);
	}
}
