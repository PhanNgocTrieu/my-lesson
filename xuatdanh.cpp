#include <stdio.h>
#include <math.h>

main()
{
	int a,b,n,i,j,k;
	printf(" nhap vao a = ");scanf("%d",&a );
	printf(" nhap vao b = ");scanf("%d",&b);
	printf(" nhap vao n = ");scanf("%d",&n);
	for(i=0;i<a;i++)
	{
		for(j=1;j<b;j++)
		{
			for(k=1;k<n;k++)
				printf(" %d %d %d \n", i,j,k);
		}
	}
}
