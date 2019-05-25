#include <stdio.h>
#include <math.h>

main()
{
	int n,i,a[10],dem=0,donvi,daoso;
	
	printf("nhap vao gia tri n =");scanf(" %d ",&n);
	
	while(n>0)
	{
		donvi= n % 10;
		n=n/10;
		dem++;
		a[dem]=donvi;
	}
	for(i=1;i<=dem;i++)
	{
		printf(" a[%d] : %d \n", i,donvi);
	}
	
}
