#include <stdio.h>
#include <math.h>

main()
{
	int n;

	float tich1=1,tich2=1;
	int a = 2;
	int b = 1;
	printf("Nhap vao gia tri n = ");
	scanf("%d",&n);
	if(n%2 == 0)
	{
	do
	{
		tich1=tich1*a;
		a = a + 2;
	}
	while (n >= a);
	printf(" N chan = %f",tich1);
	}
	else
	{
		do
		{
			tich2*=b;
			b = b + 2;
		}
		while (n >= b);
	printf(" N le = %f", tich2);
	}
}
