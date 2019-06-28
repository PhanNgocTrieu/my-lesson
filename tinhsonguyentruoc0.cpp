#include <stdio.h>
#include <math.h>
//Nh?p vào các s? nguyên b?t k?,hãy tính t?ng các s? nguyên dó ch?ng nào khi nh?p vào ban phim 0

main()
{
	int n;
	float b,t,s = 0;
	int i;
	
	printf(" Nhap vao so nguyen n = ");
	scanf("%d",&n);
	
	do
	{
		t = n % 10;
		s = s + t;
		n =	n/10;
	}
	while (t!=0);
	
	printf("tong la s = %f", s);
	
}

