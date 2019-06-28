#include <stdio.h>
#include <math.h>

/*ham de qui

int fibonacci(int n)
{
	
	if(n<=1)
	{
		return 1;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

main()
{
	int n;
	printf("nhap vao so n =");
	scanf(" %d ",&n);
	
	fibonacci(n);
	
	printf(" gia tri cua day fibonacci = %d",fibonacci(n));
}




*/// ham binh thuong
main()
{
	int n;
	int f1=0,f2=1,f3;
	printf("nhap vao gia tri n= ");
	scanf("%d",&n);
	
	printf(" %d \n", f1);
	printf(" %d \n", f2);

	for(int i=0;i<n;i++)
		{
			f3=f2+f1;
			printf(" %d \n", f3);
			f1=f2;
			f2=f3;
		}
}
