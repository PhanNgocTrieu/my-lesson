#include <stdio.h>
#include <math.h>
// chuong trinh tinh tong x^k/k! = 1 + x + x^2/2! + ... + x^n/n!
main()
{
	int n,k,gt=1;
	float t=0,x,s=1;
	printf("nhap vao gia tri n = ");
	scanf(" %d ", &n);
	printf("nhap vao gia tri x = ");
	scanf(" %f ", &x);
	for(k=1;k<=n;k++)
	{
		gt=gt*(k);
		t=pow(x,k);
		s=s+t/gt;

	}
	printf("\n s = %0.5f ",s);
	
}
