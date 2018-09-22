#include <iostream>
#include <math.h>

using namespace std;

// Finding prime numbers

int main(int argc, char const *argv[])
{
	int n;
	cout << "Enter the limit for printing Primes: ";
	cin >> n;
	if ( n < 2 ) {
		cout << "No primes found";
	}
	else {
		if ( n == 2) {
			cout << "Primes: 2";
		}
		else {
			for (int i = 2; i < n; ++i) {
				int flag = 0;
				for (int j = 2; j <= sqrt(i); ++j) {
					if( (i%j) == 0 ) {
						flag = 1;
						break;
					}
				}
				if ( flag == 0 )
					cout << i << " ";
			}
		}
	}

	cout << endl;
	return 0;
}