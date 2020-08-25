//bài 1: Tính S = 1 + x + x^2/2! + x^3/3! + ... + x^k/k! (k: 0 - n); 
#include <iostream>
#include <math.h>
`
using namespace std;

long double Factor(long n)
{
    if (n == 1 || n == 0)
        return 1;
    return n*Factor(n-1);
}

double Sum(double x, long n)
{
    double sum = 0;
    for (int k = 0; k <= n; k++)
    {
        sum += pow(x,k)/Factor(k);
    }
    
    return sum;
}

int main()
{
    long n;
    double x;
    cout << "\nEnter x: ";
    cin >> x;

    cout << "\nEnter n: ";
    cin >> n;

    cout << "S = " << Sum(x,n) << endl;

    return 0;
}













/* Bai 2:
Cho đoạn chương trình sau:
 int Chiahet(int a[], int n)
  {int i;
   int s=0;
  for (i=0; i<n; i++)
  if(a[i]%5==0)s+=a[i];
  return s; 
  }   
a.	Viết chương trình nhập mảng một chiều với n phần tử là số nguyên với n>=10.Xuất mảng A ra màn hình (2điểm) 
b.	Đưa hàm trên vào chương trình và xuất kết quả tổng ra màn hình (4 điểm)
*/

#include <iostream>

#define Max 100
using namespace std;
int Chiahet(int a[], int n)
{   int i;
    int s=0;
    for (i=0; i<n; i++)
        if(a[i]%5==0)
            s+=a[i];
    return s; 
}  
void Nhapmang(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter A[" << i << "]: ";
        cin >> arr[i];
    }
}

void Print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Print_chiahet5(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 5 == 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    int Arr[Max];
    do 
    {
        cout << "Enter size: ";
        cin >> size;
    }while(size < 10);

    Nhapmang(Arr,size);
    cout << "==========LIST OF ARRAY=============" << endl;;
    Print(Arr,size);
    cout << "==========LIST mod 5 equals 0 in Array============" << endl;
    Print_chiahet5(Arr,size);
    cout << "==========Sum of all numbers which modes 5 equals 0 =======" << endl;
    cout << Chiahet(Arr,size);
    
    return 0;
}
