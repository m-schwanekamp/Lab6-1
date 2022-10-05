//Lab6-1
#include <iostream>
#include <iomanip>

using namespace std;
int main(void) {
	int n;
	int row;
	int col;

	// enter number of asterisks
	cout << "Enter number of asterisks per side: ";
	cin >> n;

	for (row = 0; row < n; row++) {
		for (col = 0; col < n; col++) {
				cout << "*";
		}
		
		if (col == n) cout << " ";
		
		for (col = 0; col < n; col++) {
			if (row == 0 || row == n - 1 || col ==0 || col == n - 1) {
				cout << "*";
			}
			else cout << " ";
			}
			cout << endl;
		}
	}


