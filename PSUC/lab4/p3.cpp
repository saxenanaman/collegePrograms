#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float a, b, sum, diff, mult, div;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;

	sum = a+b;
	diff = a-b;
	mult = a*b;
	div = a/b;
	cout << endl <<"Arithmetic Operations" << endl;
	cout << "Sum: a + b = " << sum << endl;
	cout << "Difference: a - b = " << a-b << endl;
	cout << "Product: a * b = " << a*b << endl;
	cout << "Quotient: a / b = " << a/b << endl;

	return 0;
}
