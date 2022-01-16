#include <iostream>
#include <cstdlib>
#include <String>
#include <fstream>

using namespace std;

int main()
{
	setlocale(0, "Russian");
	int i = 0,sum = 0,a = 0,b = 0;
	string arr[5541];
	int arrint[5541];

	ifstream in ("B:/Games/mm.txt");
	if (in.is_open()) {
		for (i = 0; i < 5541;i++) {
			(getline(in, arr[i]));
			cout << arr[i] << endl;
		}
	}
	in.close();

		

	for (i = 0; i < 5541; i++) {
		arrint[i] = stoi(arr[i]);
		sum += arrint[i];
	}

	sum = sum / 5541;

	for (i = 0; i < 5540; i++){
		if (arrint[i] % 5 == 0 || arrint[i+1] % 5 == 0) {
			if (arrint[i] < sum || arrint[i+1] < sum ) {
				a++;
					if (arrint[i] + arrint[i + 1] > b) {
						b = arrint[i] + arrint[i + 1];
					}
			}
		}
	}
	cout << a << " " << b << endl;
	cout << sum;

	return 0;
}