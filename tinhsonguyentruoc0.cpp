#include <stdio.h>
#include <math.h>
//Nh?p v�o c�c s? nguy�n b?t k?,h�y t�nh t?ng c�c s? nguy�n d� ch?ng n�o khi nh?p v�o ban phim 0

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

