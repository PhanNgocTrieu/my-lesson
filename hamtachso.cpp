#include <stdio.h>
#include <math.h>
/*
main()
{
	int n,i,a[10],dem,donvi;
	printf("nhap vao gia tri n =");scanf("%d",&n);
	
	for(i=0;i<=10;i++)
	{
		donvi=n%10;
		n=n/10;
		printf(" a[%d] la %d\n", i,donvi);
		dem++;
		if(n<1)
		break;
	}
	printf(" so luong phan tu khac 0 trong mang a[] la %d", i+1);
}

*/

main()
{
	int n,a[10],i,donvi,dem=0;
	printf(" nhap vao so n = "); scanf("%d",&n);
	while(n>1)
	{
	
		donvi= n%10 ;
		dem++;
		a[dem]=donvi;
		n=n/10;
		if(n<1)
		break;
	}
	donvi;
	for(i=0;i<=dem;i++)
	{
		printf("mang a[%d] = %d \n", i,donvi);
		printf("mang a[] gom %d phan tu co gia tri khac 0 mang", i+1);
	}
}








