#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	while(number)
	{
		cout << number % 10;
		number /=10;
	}

	return 0;
}