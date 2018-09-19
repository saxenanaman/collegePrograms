#include <iostream>

using namespace std;

int main()
{
	int num;
	int sum = 0;
	cout << "Enter a  digit number: ";
	cin >> num;
	while(num)
	{
		sum += num%10;
		num /=10;
	}
	cout << "Sum of digits = " << sum;

	return 0;
}
