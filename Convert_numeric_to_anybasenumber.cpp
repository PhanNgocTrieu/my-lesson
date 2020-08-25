#include <stdio.h>
#include <math.h>

void convert(int n, int c)
{
	int remainder;
	int i = 0;
	char arr_output[50];
	while (n > 0)
	{
		remainder = n % c;
		if (remainder > 9)
		{
			arr_output[i] = 55 + remainder;
		}
		else
		{
			arr_output[i] = 48 + remainder;
		}
		
		n = n / c;
		i++;
	}
	for (i; i - 1 >= 0 ; i--)
	{
		printf("%c",arr_output[i-1]);
	}
}
int main()
{
    int n;
    int c;
    
    //printf("Nhap vao n: ");
    //scanf("%d",&n);
    //printf("\nNhap vao co so: ");
    //scanf("%d",&c);
    convert(250,10);
    return 0;
}
