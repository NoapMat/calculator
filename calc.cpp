#include <iostream>

// not a good practice, well its based on usecases.
using namespace std;

int main() {
	while (1) {
		// initializations
		int n1, n2, operation;
		string choice;
		double result;
		n1 = 0;
		n2 = 0;
		result = 0;
		choice = "a";
		
		// interactives
		cout << "n1: ";
		cin >> n1;
		cout << "n2: ";
		cin >> n2;
		cout << "Select Your Operations:\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n:>>";
		cin >> operation;

		switch (operation) {
			case 1:
				result = n1 + n2;
				break;
			case 2:
				result = n1 - n2;
				break;
			case 3:
				result = n2 / n1;
				break;
			case 4:
				result = n1 * n2;
				break;
		}
		cout << "Result: " << result << endl;
		cout << "Do you want to continue?: (y/n) ";
		cin >> choice;
		if (choice == "n" || choice == "no") {
			break;
		}
	}
}
