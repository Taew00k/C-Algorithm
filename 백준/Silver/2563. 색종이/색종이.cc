#include <iostream>
using namespace std;
int n, count;
int width, height;

int main() {
	int arr[100][100] = { 0, };
	int count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> width >> height;
		for (int j = width; j < width + 10; j++) {
			for (int k = height; k < height + 10; k++) {
				arr[j][k] += 1;
				if (arr[j][k] > 1) {
					count += 1;
				}
			}
		}
	}
	cout << 100 * n - count;
}