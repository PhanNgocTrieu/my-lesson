#include <iostream>

using namespace std;

// PP_Tiep tuyen: x^3 + 2*x + 57 = 0; voi sai so khong qua 10^-4


float f(float_t a) {
	
	float f;
	f = pow(a, 3) - 2 * a + 57;

	return f;
}

float fdh(float_t a) {

	float_t fdh;

	fdh = 3*pow(a,2) - 2;


	return fdh;
}


int main() {
	
	float_t x;
	
	cout << "Enter value of x: ";
	cin >> x;

	float_t y;
	do
	{
		y = x;
		x = y - (f(y) / fdh(y));
	} while (abs(x-y) > 0.0001);


	cout << "Nghiem x: " << x << " and Nghiem y: " << y;



}
