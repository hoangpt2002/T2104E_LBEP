#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	while (a+b<=c || a+c<=b || b+c<=a)
	{
		printf("Nhap sai 3 canh cua tam giac xin moi nhap lai\n");
		printf("Nhap a: ");
		scanf("%d", &a);
		printf("Nhap b: ");
		scanf("%d", &b);
		printf("Nhap c: ");
		scanf("%d", &c);
	}
	int C;
	float p,S;
	C = a + b + c;
	p = (float)C/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi cua tam giac la: %d\n", C);
	printf("Dien tich cua tam giac la: %f", S);
}
