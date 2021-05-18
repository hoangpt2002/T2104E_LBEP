#include <stdio.h>

int main()
{
	float tien = 4000;
	int n = 4;
	for (int i = 0; i < n; i++)
	{
		tien *= 1.08;  
	}
	printf("Tong so tien co duoc sau 4 nam gui ngan hang la: %f", tien);
}
