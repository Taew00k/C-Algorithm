#include <iostream>

using namespace std;

int N, M;
int num;
int matrix1[99][99] = {0, };
int matrix2[99][99] = {0, };

int main(){
	-100 <= num <= 100;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			cin >> num;
			matrix1[j][i] = num;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			cin >> num;
			matrix2[j][i] = num;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++) {
			cout << matrix1[j][i] + matrix2[j][i] << " ";
		}
		cout << endl;
	}
}