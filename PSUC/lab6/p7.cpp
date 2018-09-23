#include <iostream>
#include <math.h>

using namespace std;

double factorial (int n)
{
	double fact = 1;
	for (int i = 2; i <= n; ++i)
	{
		fact *= i;
	}
	return fact;
}

int main(int argc, char const *argv[])
{
	double terms, x, accuracy;
	cout << "Enter the value of x: ";
	cin >> x;
	cout << "Enter the number of terms to be used for computation: ";
	cin >> terms;
	cout << "Enter the accuracy ";
	cin >> accuracy;

	double sinx = 0;
	double sign;

	for (int i = 1; i <= terms; ++i)
	{
		if(i%2 == 1)
			sign = 1;
		else
			sign = -1;
		sinx = sinx + sign * pow(x,2*i-1)/factorial(2*i-1);
	}

	cout << "sin(" << x << " = " << sinx;

	return 0;
}