// chuong trinh lai suat hang nam
#include <stdio.h>
#include <math.h>

main()
{
	float tichluy=0,a,p,r;
	int n;
	
	printf("nhap gia tri von = ");scanf(" %f ", &p);
	printf("thoi han gui tien = ");scanf(" %d ", &n);
	printf("gia tri lai suat moi nam");scanf(" %f ", &r);
	
	for(int i=0;i<=n;i++)
	{
		a=p*pow((1+r),i);
		tichluy=a;
		printf(" gia tri lai cua nam %d la %f \n",n,tichluy);
	}
		
}
