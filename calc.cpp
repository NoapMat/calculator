#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	float d;
	cout << "num 1: ";
	cin >> a;
	cout << "Select Operations: \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division" << "\n?: ";
	cin >> b;
	cout << "num 2: ";
	cin >> c;
	switch (b) {
		case 1:
			d = a + c;
			break;
		case 2:
			d = a - c;
			break;
		case 3:
			d = a * c;
			break;
		case 4:
			d = a / c;
			break;
	}
	cout << "The answer is: " << d << endl;
	return 0;
}
