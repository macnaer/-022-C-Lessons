#include <iostream>
#include <ctime>

using namespace std;

int main() {

	srand(unsigned(time(NULL)));

	int days[7];
	//days[0] = 12;
	//days[1] = 9;
	//days[2] = '11';
	//days[3] = 6;
	//days[4] = 10;
	//days[5] = 15;
	//days[6] = 4;

	int counter = 0;

	for (int i = 0; i < 7; i++) {
		days[i] = rand() % 30 - 10;
		if (days[i] >= 10) {
			counter++;
		}
	}



	for (int i = 0; i < 7; i++) {
		cout << days[i] << endl;
	}
	cout << "Temperature more then 10 =>>>>>>>> " << counter << endl;

	system("pause");
	return 0;
}