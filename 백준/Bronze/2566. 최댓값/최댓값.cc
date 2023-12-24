#include <iostream>

using namespace std;

int arr[9][9];
int num;
int maxnum = -1, a, b;

int main() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> num;
            arr[i][j] = num;
            if (maxnum < num) {
                maxnum = num;
                a = i;
                b = j;
            }
        }
    }
    cout << maxnum << endl;
    cout << a + 1 << " " << b + 1 << endl;

    return 0;
}