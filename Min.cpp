#include <stdio.h>
int main () 
{
	int a, b, c, MIN;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	MIN = a;
	if (b < MIN)
	{
		MIN = b;	
	}	
	if (c < MIN)
	{
		MIN = c;
	}
	printf("So nho nhat la: %d", MIN);
}
