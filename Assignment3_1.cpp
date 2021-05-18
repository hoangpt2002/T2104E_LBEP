#include <stdio.h>

int main()
{
	int x;
	int y;
	printf("Nhap x: ");
	scanf("%d", &x);
	if (x<0 || x>9999)
	{
		printf("So vua nhap khong dung voi de bai yeu cau");	
	}	
	else
	{
		if(x < 10)
			printf("So nay khong co nghich dao");
		else
		{
			while (x > 0)
			{
				y = y*10 + x%10;
				x/=10;
			}
			printf("So nghich dao la: %d",y);
		}
	}
} 
