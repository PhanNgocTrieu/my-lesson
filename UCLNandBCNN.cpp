/*
#include <stdio.h>
#include <math.h>

int UCLN(int a,int b)
{
	if(b==0)
	return a;
	return UCLN(b, a%b);
}

int BCNN(int a,int b)
{
	return (a*b);
}


main()
{
	int a,b;
	printf("Nhap vao a: ");scanf("&a");
	printf("Nhap vao b: ");scanf("%b");
	
	printf("BCNN cua %d va %d la %d \n", a,b,BCNN(a,b));
	printf("UCLN cua %d va %d la %d", a ,b,UCLN(a,b));
	
		
}
*/
/*
 * Chuong trinh tim uoc chung lon nhat (USCLN)
 * va boi so chung nho nhat (BSCNN) cua 2 so a và b
 * 
 * @author viettuts.vn
 */
#include<stdio.h>
 
/**
 * Tim uoc so chung lon nhat (USCLN)
 */
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
 
/**
 * Tim boi so chung nho nhat (BSCNN)
 */
int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}
 
/**
 * Ham main
 */
int main() {
    int a, b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    // tinh USCLN cua a và b
    printf("USCLN cua %d va %d la: %d \n", a, b, USCLN(a, b));
    // tinh BSCNN cua a và b
    printf("USCLN cua %d va %d la: %d", a, b, BSCNN(a, b));
}
*/
