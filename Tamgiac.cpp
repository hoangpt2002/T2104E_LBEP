#include <stdio.h>
#include <math.h>
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
		float C,p,S;
		C = a + b + c;
		p = C/2;
		S = sqrt(p*(p-a)*(p-b)*(p-c));
		printf("3 canh do la 3 canh cua tam giac\n");
		printf("Chu vi la: %f\n", C);
		printf("Dien tich la: %f", S);
	}
	return 0;
}
