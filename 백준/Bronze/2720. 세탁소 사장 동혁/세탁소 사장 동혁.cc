#include <iostream>

using namespace std;

int main() {
	int n, money;
	cin >> n;
	int* quarter = new int[n]();
	int* dime = new int[n]();
	int* nickel = new int[n]();
	int* penny = new int[n]();

	for (int i = 0; i < n; i++) {
		cin >> money;
		quarter[i] = money / 25;
		money %= 25;
		dime[i] = money / 10;
		money %= 10;
		nickel[i] = money / 5;
		money %= 5;
		penny[i] = money;
	}
	for (int i = 0; i < n; i++) {
		cout << quarter[i] << " " << dime[i] << " " << nickel[i] << " " << penny[i];
		cout << endl;
	}
	delete[] quarter;
	delete[] dime;
	delete[] nickel;
	delete[] penny;

	return 0;
}
