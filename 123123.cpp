#include <stdio.h>
#include <math.h>
main()
{
	int n,a[10],i,donvi,dem=0;
	printf(" nhap vao so n = "); scanf("%d",&n);
	while(n>0)
	{
		donvi= n % 10;
		n=n/10;
		dem++;
		a[dem]=donvi;
	}
	for(i=1;i<=dem;i++)
	{
		printf(" a[%d] : %d \n",i,a[i]);
	}
}

