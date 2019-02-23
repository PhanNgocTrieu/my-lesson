#include <stdio.h>
#include <math.h>


int C(int n,int k)
{
	if(k==0 || k==n)
	return 1;
	if(k == 1)
	return n;
	
	return C(k - 1,n - 1) + C(k,n-1);
}

main()
{
	int n,k;
	printf("nhap vao gia tri n = ");
	scanf("%d",&n);
	printf("nhap vao gia tri k = ");
	scanf("%d",&k);
	C(n,k);
}
