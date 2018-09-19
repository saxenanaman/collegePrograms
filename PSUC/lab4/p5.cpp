#include <iostream>

using namespace std;

int main()
{
	int seconds, minutes, hours;
	cout << "Enter number of seconds: ";
	cin >> seconds;
	hours = seconds / 3600;
	minutes = seconds % 3600;
	seconds = minutes % 60;
	minutes = minutes / 60;

	cout<< "Hours: " << hours << endl << "Minutes: " << minutes << endl << "Seconds: " << seconds;
	return 0;
}
