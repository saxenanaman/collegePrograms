#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, k;
	cout << "Enter number of numbers: ";
	cin >> n;
	cout << "Enter the limit for the table: ";
	cin >> k;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= k; ++j)
		{
			cout << i*j << " ";
		}
		cout << endl;
	}

	return 0;
}