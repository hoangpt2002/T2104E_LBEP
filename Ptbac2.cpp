#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	float dt, x, x1, x2;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	if (a == 0)
		if (b == 0)
			if (c == 0)
				printf("Phuong trinh co vo so nghiem");
			else
				printf("Phuong trinh vo nghiem");
		else
			{
				x = -c/b;
				printf("Phuong trinh co nghiem la: %.2f", x);
			}
	else
		{
			dt = b*b - 4*a*c;
			if (dt > 0)
				{
					x1 = (-b + sqrt(dt))/(2*a);
					x2 = (-b - sqrt(dt))/(2*a);
					printf("Phuong trinh co nghiem kep x1 va x2 la: %.2f, %.2f", x1, x2);
				}
			else
				if(dt == 0)
				{
					x = -b/(2*a);
					printf("Phuong trinh co nghiem kep la: %.2f", x);
				}
				else
					printf("Phuong trinh vo nghiem");
		}		
}
