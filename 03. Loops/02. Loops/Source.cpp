#include <iostream>
#include <ctime>

using namespace std;

int main() {

	srand(unsigned(time(NULL)));

	/*int counter = 0;

	while (counter != 10) {
		counter++;
		cout << "while works => " << counter << endl;
	}
*/

	//int a = 0, b = 0, c = 0;
	//cout << "Enter fist digit " << endl;
	//cin >> a;
	//cout << "Enter second digit " << endl;
	//cin >> b;
	//cout << "Enter third digit " << endl;
	//cin >> c;

	//cout << a + b + c << endl;
	
	//int digit = 0, sum = 0;;
	//int counter = 0;
	//while (counter != 3) {
	//	counter++;
	//	cout << "Enter " << counter << " digit" << endl;
	//	cin >> digit;
	//	sum += digit;
	//	/*sum = digit + sum;*/
	//}

	//cout << "Sum = " << sum << endl;

	/*int counter = 1000;
	do {
		cout << "Counter = " << counter << endl;
		counter++;

	} while (counter <= 10);
*/

	/*int counter = 0;
	int number = 0;
	int sum = 0;
	int avg = 0;

	while (counter < 10)
	{
		counter++;
		cout << "Enter " << counter << " number ";
		cin >> number;
		sum += number;
	}

	cout << "Sum = " << sum << endl;
	avg = sum / 10;
	cout << "AVG = " << avg << endl;*/

	int number = 0;

	for (int i = 1; i <= 10; i++) {
		number = rand() % 30 - 10;
		cout << "i = " << i  << " number = "<< number << endl;
	}

	system("pause");
	return 0;
} 