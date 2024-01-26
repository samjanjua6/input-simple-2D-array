#include<iostream>
#include<conio.h>
using namespace std;

int main() {

	int a[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << " [" << i << "][" << j << "] :";
			cin >> a[i][j];
		}
	}
	cout << endl << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			
			
			cout<< a[i][j]<<" ";
		}
		cout << endl;
	}

	_getche();

	return 0;
}