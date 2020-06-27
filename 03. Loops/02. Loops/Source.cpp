#include <iostream>
#include <ctime>


using namespace std;

int main() {
	
	srand(unsigned(time(NULL)));
	/*int counter = 0;

	while (counter < 3) {
		counter++;
		cout << "Counter = " << counter << endl;
	}*/

	//int counter = 1000;

	//do {
	//	counter++;
	//	cout << "Counter = " << counter << endl;

	//} while (counter < 3);
	
	/*int number = 0;

	for (int i = 1; i <= 10; i++) {
		number = rand() % 20 - 10;
		cout << "i = " << i  << " number = " << number<< endl;  
	}*/

	int sum = 0,  number = 0;
	unsigned int dob = 1;

	for (int i = 0; i < 10; i++) {
		number = rand() % 17 + 1;
		cout << "number => " << number << endl;
		sum += number;
		dob *= number;
	}

	cout << "Sum = " << sum << endl;
	cout << "Dobutok = " << dob << endl;

	system("pause");
	return 0;
} 