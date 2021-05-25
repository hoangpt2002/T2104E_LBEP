#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,bill;
	do 
	{
		menu: printf("MENU\n1. Chon mon an\n2. Goi do uong\n3. Thanh toan\n4. Thoat chuong trinh\nMoi chon menu: ");
		scanf("%d", &n);
		system("cls");
		switch(n)
		{
			case 1:
				int i;
				printf("1. Com ga        35k\n2. Hu tieu       25k\n3. Banh canh     25k\n4. Mi bo         30k\n5. Com suon      35k\n6. Com chien tom 30k\n");
				printf("Moi chon mon: ");
				scanf("%d", &i);
				system("cls");
				switch (i)
				{
					case 1: 
						printf("Ban da chon com ga. Xin cam on\n");
						bill += 35000;
						break;
					case 2: 
						printf("Ban da chon hu tieu. Xin cam on\n");
						bill += 25000;
						break;
					case 3: 
						printf("Ban da chon banh canh. Xin cam on\n");
						bill += 25000;
						break;
					case 4: 
						printf("Ban da chon mi bo. Xin cam on\n");
						bill += 30000;
						break;
					case 5: 
						printf("Ban da chon com suon. Xin cam on\n");
						bill += 35000;
						break;
					case 6: 
						printf("Ban da chon com chien tom. Xin cam on\n");
						bill += 30000;
						break;
				}
				goto menu;
			case 2:
				int j;
				printf("1. Pessi             10k\n2. Coca              10k\n3. Tra dao           15k\n4. Nuoc cam          15k\n5. Tra xanh khong do 10k\n6. C2                10k\n");
				printf("Moi chon do uong: ");
				scanf("%d", &j);
				system("cls");
				switch (j)
				{
					case 1:
						printf("Ban da chon pessi. Xin cam on\n");
						bill += 10000;
						break;
					case 2:
						printf("Ban da chon coca. Xin cam on\n");
						bill += 10000;
						break;
					case 3:
						printf("Ban da chon tra dao. Xin cam on\n");
						bill += 15000;
						break;
					case 4:
						printf("Ban da chon nuoc cam. Xin cam on\n");
						bill += 15000;
						break;
					case 5:
						printf("Ban da chon tra xanh khong do. Xin cam on\n");
						bill += 10000;
						break;
					case 6:
						printf("Ban da chon C2. Xin cam on\n");
						bill += 10000;
						break;
				}
				goto menu;
			case 3:
			 	if (bill == 0)
				{
					printf("Ban chua chon mon an nen khong can phai thanh toan\n");	
				} 
				else
				{
					printf("So tien can thanh toan la: %d. Xin cam on\n", bill);
				}
			 	goto menu;
			case 4:
				printf("Ban da thoat chuong trinh");
				break;
		}
	}
	while (n<1 || n>4);
}
