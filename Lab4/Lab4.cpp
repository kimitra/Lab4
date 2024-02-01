#include <iostream>

using namespace std;

// Print out the menu of choices for the user to selection from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}

void factorial(int A) {
	//Factorial code
	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> A;
	int fact = 1;
	int mult = 0;
	while (A < 0) {
		cout << "Nice try, please enter a POSITIVE number...: ";
		cin >> A;
	}
	cout << A << "! = ";
	for (int i = 1; i <= A; i++) {
		cout << i;
		fact = fact * i;
		if (i < A)
			cout << " * ";
		
	}

	cout << " = " << fact << endl;
}
void arithmetic(int A, int B, int C) {
	//Arithmetic code
	int arith = 0;
	cout << "Arithmetic Series: " << endl;
	cout << "Enter a number to start at: ";
	cin >> A;
	cout << "Enter a number to add each time: ";
	cin >> B;
	cout << "Enter the number of elements in the series: ";
	cin >> C;
	while (C < 0) {
		cout << "Try Again! Please enter a POSITIVE number: ";
		cin >> C;
	}
	for (int i = 1; i <= C; i++) {
		cout << A;
		arith = arith + A;
		A = A + B;
		if (i < C)
			cout << " + ";
	}
	cout << " = " << arith << endl;
}	
void geometric(int r, int a, int C) {
	//Geometric code
	int geo;
	int sum = 0;
	cout << "Geometric Series:" << endl;
	cout << "Enter a number to start at: ";
	cin >> r;
	cout << "Enter a number to multiply by each time: ";
	cin >> a;
	cout << "Enter the number of elements in the series: ";
	cin >> C;
	while (C < 0) {
		cout << "Try Again! Please enter a POSITIVE number: ";
		cin >> C;
	}
	cout << r << " + ";
	geo = r;
	for (int i = 1; i < C; i++) {
		r = (geo * pow(a, i));
		cout << r;
		if (i == 1)
			sum = sum + geo + r;
		else
			sum = sum + r;
		if (i < C - 1)
			cout << " + ";
	}
	cout << " = " << sum << endl;

}
int main() {
	int choice;
	char again;
	int A = 0;
	int B = 0;
	int C = 0;
	int r = 0;
	int a = 0;
	do {
		printMenu();
		cin >> choice;

		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial(A);
		}
		else if (choice == 2) {
			arithmetic(A,B,C);
		}
		else if (choice == 3) {
			geometric(r,a,C);
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}