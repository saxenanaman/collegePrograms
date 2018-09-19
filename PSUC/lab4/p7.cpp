#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	float centigrade, fahrenheit;
	cout << "Enter temperature in Centigrade: ";
	cin >> centigrade;
	fahrenheit = centigrade * 1.8 + 32;
	cout << centigrade << " degree Centigrade =  " << fahrenheit << " degree Fahrenheit";
	
	cout << endl << "Enter temperature in Fahrenheit: ";
	cin >> fahrenheit;
	centigrade = (fahrenheit - 32) / 1.8;
	cout << fahrenheit << " degree Fahrenheit =  " << centigrade << " degree Centigrade";

	return 0;
}
