#include<iostream>
using namespace std;

int main() {

	int a, b, max, i;

	cout << "Please, enter the value 1: " << endl; 
	cin >> a;
	cout << "Please, enter the value 2: " << endl;
	cin >> b;

	max = a;

	if (b >= a)  max = b; 
	
	for (i = 1; i < max; i++) {

		if (a % i == 0 and b % i == 0) {

			cout << i << " ";

		}


	}




	return 0;
}