//Viet chuong trình có su dung hàm kiem tra n (nh?p t? bàn phím) có ph?i s? chính phuong không?
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
