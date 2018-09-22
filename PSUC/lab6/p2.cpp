#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	float a, b, c, r1, r2, temp;
	
	cout << "Quadratic Equation: A x² + B x + C" << endl;
	cout << "Enter the Value of A: ";
	cin >> a;
	cout << "Enter the Value of B: ";
	cin >> b;
	cout << "Enter the Value of C: ";
	cin >> c;
	cout << "The roots of the equation are: ";

	temp = pow(b,2) - 4* a * c;
	if (temp < 0) {
		temp = temp * -1;
		temp = sqrt(temp) / (2*a);
		cout << endl << "Root1 = " << (-1*b/(2*a)) << " + " << temp << " i";
		cout << endl << "Root1 = " << (-1*b/(2*a)) << " - " << temp << " i";
	}
	else {
		if(temp == 0) {
			cout << endl << "Root1 = Root2 = " << (-1*b/(2*a));
		}
		else {
			temp = sqrt(temp) / (2*a);
		cout << endl << "Root1 = " << (-1*b/(2*a)) << " + " << temp;
		cout << endl << "Root1 = " << (-1*b/(2*a)) << " - " << temp;		
		}
	}

	
	return 0;
}