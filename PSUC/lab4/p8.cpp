#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int mm;
	float cm, inch, feet;
	cout << "Enter distance in mm: ";
	cin >> mm;
	cm = mm/10;
	inch = cm / 2.54;
	feet = inch / 12;
	cout << mm << " mm = " << cm << " cm = " << inch << " inch = " << feet << " feet" << endl;
	return 0;
}