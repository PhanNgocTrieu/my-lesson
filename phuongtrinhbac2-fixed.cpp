// giai phuong trinh bac 2 và bien luan ca truong hop suy bien
#include <stdio.h>
#include <conio.h>
#include <math.h>

main()
{
	int a,b,c;
	float denta,x1,x2;
	
	printf("nhap vao gia tri a = ");scanf("%d",&a);
	printf("nhap vao gia tri b = ");scanf("%d",&b);
	printf("nhap vao gia tri c = ");scanf("%d",&c);
	
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				printf("phuong trinh vo so nghiem");
			}
			else
			{
				printf("Phuong trinh vo nghiem");
			}
		}
		else
		{
			printf("phuong trinh co nghiem x = %f", (-c)/b);
		}
	}
	else
	{
		denta = pow(b,2)-(4*a*c);
		if(denta==0)
			{
				printf("phuong trinh co nghiem kep x1 = x2 = %f", (-b)/(2*a));
			}
		else
			{
				x1 = ((-b)+sqrt(denta))/(2*a);
				x2 = ((-b)-sqrt(denta))/(2*a);
				printf("phuong trinh co 2 nghiem");
				printf("\n x1 = %f",x1);
				printf("\n x2 = %f",x2);
			}
	}
		
	
	
	getch();
	
}
