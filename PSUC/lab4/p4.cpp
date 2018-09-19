#include <iostream>

using namespace std;

int main()
{
	float radius;
	float area;
	cout << "Enter the radius: ";
	cin >> radius;
	area = 3.14159265 * radius * radius;
	cout << "Area = " << area;
	return 0;
}
