#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	/*6
	int arr[10];
	int A, B;
	cin >> A >> B;
	arr[0] = A;
	arr[1] = B;
	for (int i = 2; i < 10; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << ' ';
	}*/


	/*7
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout <<endl;
	for (int i = 9; i >= 0; i--) {
		cout << arr[i] << ' ';
	}*/

	
	/*8
	const int N = 10;
	int arr[N],k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			cout << arr[i]<<' ';
			k++;
		}
	}
	cout <<endl<< k;*/

	/*9
	const int N = 10;
	int arr[N], k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 9; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << ' ';
			k++;
		}
	}
	cout << endl << k;*/

	/*10
	const int N = 10;
	int arr[N];
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			cout << arr[i] << ' ';
		}
	}
	cout << endl;
	for (int i = 9; i >= 0; i--) {
		if (arr[i] % 2 != 0) {
			cout << arr[i] << ' ';
		}
	}*/

	

	/*11
	const int N = 10;
	int arr[N],k;
	cin >> k;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 51 - 25;
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < 10; i=k+i) {
		cout <<arr[i]<<' ';
	}*/


}

















/*int p, max = 0;
	for (int i = 100; i <= 999; i++) {

		for (int j = 1; j <= 999; j++) {
			p = j * i;
			cout << p<<' ';
		}
		if (p%1000 == p/1000) {
			max = p;
		}
	}
	cout << max;*/