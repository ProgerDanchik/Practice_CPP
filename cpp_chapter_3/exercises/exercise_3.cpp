// Latitude calculation
#include <iostream>

int main() {
	using namespace std;

	const int degrees_sec{ 60 };
	const int degrees_min{ 60 };

	double degress, min, sec;
	double res;

	cout << "First, enter the degrees: ";
	cin >> degress;
	cout << "Next, enter the minutes of arc: ";
	cin >> min;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sec;

	res = min + sec / degrees_sec;
	res = degress + min / degrees_min;

	cout << endl << degress << " degrees, " << min << " minutes, "
		<< sec << " seconds = " << res << " degrees";

	return 0;
}
