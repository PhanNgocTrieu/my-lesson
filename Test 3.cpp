#include <stdio.h>
#include <math.h>

main()
{
	int n,i,a[10],dem=0,donvi,sodao;
	
	printf("nhap vao gia tri n =");
	scanf(" %d ",&n);
	
	sodao=0;
	while(n>0)
	{
		
		donvi= n % 10;
		n=n/10;
		dem++;
		a[dem]=donvi;
		sodao=sodao*10 + donvi;
	}
	if(sodao==n)
	{
		printf("so doi xung");
	}
	else
	{
		printf(" khong phai so doi xung ");
	}
}
