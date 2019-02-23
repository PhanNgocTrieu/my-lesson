#include <stdio.h>
#include <math.h>

int sohoanhao(int n)
{
	int sum=0;
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	if(sum==n)
	return true;
	return false;
	
}
main()
{
	int n;
	printf(" nhap so n: ");
	scanf(" %d ", &n);
	if(sohoanhao(n))
		printf("%d la so hoan hao", n);
	else
		printf("%d khong phai so hoan hao", n);
	
	return 0;
}
