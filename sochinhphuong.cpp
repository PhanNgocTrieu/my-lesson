//Viet chuong tr�nh c� su dung h�m kiem tra n (nh?p t? b�n ph�m) c� ph?i s? ch�nh phuong kh�ng?
#include <stdio.h>
#include <math.h>

void scp(int n)
{
	int i=sqrt(n);
	if(i*i==n)
	printf(" %d la so chinh phuong ", n);
	else
	printf(" %d khong phai so chinh phuong ",n);
}
main()
{
	int n;
	printf(" nhap vao gia tri n =");
	scanf(" %d ",&n);
	scp(n);
}
