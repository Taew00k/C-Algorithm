#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int tenNum, B;
string result;

int main() {
	cin >> tenNum >> B;
	while (tenNum != 0) {
		if (tenNum % B < 10)
		{
			result += (tenNum % B + 48); 
		}
		else {
			result += (tenNum % B + 55); 
		}
		tenNum /= B; 
	}
	reverse(result.begin(), result.end());
	cout << result;
}