#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int B,totalScore;
string N;

int main() {
	totalScore = 0;
	2 <= B <= 36;
	totalScore < 1000000000;
	cin >> N >> B;
	int leng = N.length()-1;
	for (int i = leng; i >= 0; i--) {
		if (N[leng-i] > 58) {
			N[leng-i] -= 55;
		}
		else {
			N[leng-i] -= 48;
		}
		totalScore += N[leng - i] * pow(B,i);
	}

	cout << totalScore;

}