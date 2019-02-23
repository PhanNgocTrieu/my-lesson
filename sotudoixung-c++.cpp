/*/Viet chuong trình có su dung hàm kiem tra n (nhap tu bàn phím) có phai so tu doi xung không?



#include <stdio.h>
#include <math.h>


main()
{
	char a[];
	
}


*/

#include<stdio.h>
#include <iostream>
using namespace std;
 
int main(){
    int num,r,sum=0,temp;
 
    cout << "Enter a number: ";
     cin >> num;
 
    for(temp=num;num!=0;num=num/10){
         r=num%10;
         sum=sum*10+r;
    }
    if(temp==sum)
         cout << temp << " is a palindrome";
    else
         cout << temp << " is not a palindrome";
 
    return 0;
}



