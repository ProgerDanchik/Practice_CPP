/*
	The program displays the equivalent value in days, hours, minutes and seconds
*/
#include <iostream>

int main() {
	using namespace std;

	long long seconds;

	cout << "Enter the number of seconds: ";
	cin >> seconds;

	const int secInMin = 60;
	const int minInHour = 60;
	const int hourInDay = 24;

	long long outSecond = seconds % secInMin;
	long long outMinutes = (seconds / secInMin) % minInHour;
	long long outHours = ((seconds / secInMin) / minInHour) % hourInDay;
	long long outDays = ((seconds / secInMin) / minInHour) / hourInDay;

	cout << seconds << " seconds = "
		<< outDays << " days, "
		<< outHours << " hours, "
		<< outMinutes << " minutes, "
		<< outSecond << " seconds\n";

	return 0;

}
