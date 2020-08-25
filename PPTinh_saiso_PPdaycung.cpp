#include <iostream>

using namespace std;

// PP_day cung: x^3 + 2*x + 57 = 0; voi sai so khong qua 10^-4



float f(float_t n) {
	
	float_t f;

	f = pow(n, 3) - 2 * n + 57;


	return f;
}

int main() {
	float_t a, b;
	float_t x;


	cout << "Enter a: ";
	cin >> a; cout << endl << "Enter b: ";
	cin >> b;
	cout << endl;
	

	x = a - (b - a) * f(a) / (f(b) - f(a));

	if (f(x)*f(b) < 0)
	{

		do
		{
			b = x;
			x = a - (b - a) * f(a) / (f(b) - f(a));
		} while (abs(x - b) > 0.0001);

	}
	else
	{
		do
		{
			a = x;

			x = a - (b - a) * f(a) / (f(b) - f(a));
		} while (abs(x - a) > 0.0001);
	}


	cout << "Nghiem x: " << x << endl;
}
