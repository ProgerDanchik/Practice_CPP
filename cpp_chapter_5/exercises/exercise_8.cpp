#include <iostream>
#include <cstring>

int main() {
	using namespace std;

	char word[30];
	int count = 0;

	// Получения слов, пока оно не будет равно "done"
	cout << "Enter the word:\n";

	cin >> word;
	while (strcmp(word, "done"))
	{
		count++;
		cin >> word;
	}

	cout << "Count words = " << count << endl;

	return 0;
}
