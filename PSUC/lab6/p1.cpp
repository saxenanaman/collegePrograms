#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if(num%2)
		cout << "The number is odd" << endl;
	else
		cout << "The number is even" << endl;
	return 0;
}