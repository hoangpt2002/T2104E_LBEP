#include <stdio.h>

int main ()
{
	int a,b,c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	if (a+b<=c || a+c<=b || b+c<=a)
	{
		printf("3 canh do khong phai la 3 canh cua tam giac\n");
	}
	else
	{
		int C;
		float p,S;
		C = a + b + c;
		p = c/2;
		S = p*(p-a)*(p-b)*(p-c);
		printf("3 canh do la 3 canh cua tam giac\n");
		printf("Chu vi la: %d\n", C);
		printf("Dien tich la: %f", S);
	}
	return 0;
}
