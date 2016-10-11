#include <iostream>
#include <Windows.h>

using std::endl;
using std::cin;
using std::cout;

int main() {
	int counter;

	do {
		cout << "How many \"Wub\"s do you want? Enter 0 to exit. ";
		cin >> counter;

		for(int i = 0; i < counter; ++i) {
			Beep(100, 90);
			Beep(150, 90);
			Beep(60, 90);
			Beep(1500, 90);

			cout << ((i == 0) ? "Wub" : " wub");
		}

		cout << endl << endl;
	} while(counter > 0);

	return 0;
}