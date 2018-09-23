#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout << "Enter the limit for printing Primes(More than 2): ";
	cin >> n;

	int prime[n];
	
	for (int i = 0; i < n; ++i)
		prime[i] = 1;

	for (int i = 2; i < n; ++i)
	{
		for (int j=2; i*j < n; ++j)
		{
			prime[i*j] = 0;
		}
	}
	cout << "List of primes: ";
	for (int i = 2; i < n; ++i)
	{
		if (prime[i])
		{
			cout << i << " ";
		}
		
	}
	

	cout << endl;
	return 0;
}