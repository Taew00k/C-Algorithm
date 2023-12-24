#include <iostream>
#include <string>

using namespace std;

string arr[5][15] = { "aa",};
int maxnum;
string word;

int main() {
	maxnum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> word;
		if (word.length() > maxnum)
			maxnum = word.length();
		for (int j = 0; j < word.length(); j++)
		{
			arr[i][j] = word[j];
		}
	}
	for (int j = 0; j <maxnum; j++) {
		for (int i = 0; i < 5; i++) {
			if (arr[i][j] == "aa")
				continue;
			cout << arr[i][j];
		}
	}
}