#include <stdio.h>
#include <math.h>

// viet chuong trinh tinh tong S= x^n/n = 1 + x + x^2/2 + ... + x^n/n
main()
{
	int i,n;
	float x,s=1;
	printf(" nhap vao gia tri n = ");
	scanf(" %d ", &n);
	printf(" nhap vao gia tri x = ");
	scanf(" %f ", &x);
	for(i=1;i<=n;i++)
	{
		s=s + pow(x,i)/i;
	}
	printf(" s = %0.5f", s);
}

