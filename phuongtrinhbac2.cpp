// giai phuong trinh bac 2 và bien luan ca truong hop suy bien
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
main()
{
	float a,b,c,denta,x1,x2;
	
	
	printf (" nhap cac gia tri a, b, c: ");
	scanf(" %f %0.5f% 0.5f", &a,&b,&c);
	
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			printf(" vo so nghiem ");
			else
			printf (" phuong trinh vo nghiem");
		}
		else
		printf (" phuong trinh co nghiem la %f ", -c/b);
	}
	else
	{
		denta= pow(-b,2)-4*a*c;
		if(denta<=0)
		{
			if(denta==0)
			printf(" phuong trinh co nghiem kep x1=x2 = %f ", -b/(2*a));
			else
			printf(" phuong trinh vo nghiem ");
		}
		else
		{
			x1 =(-b+sqrt(denta))/(2*a);
			x2 =(-b-sqrt(denta))/(2*a);
			
			printf(" phuong trinh co 2 nghiem x1 = %f  x2 = %f", x1,x2);
		}
		
	}
	getch();
	
}
