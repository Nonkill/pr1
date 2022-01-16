#include <iostream>
#include <cstdlib>

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double num;
    int k;

    cout << "¬ведите произвольное число: ";
    cin >> num;

    if (num < 10) {  // ≈сли введенное число меньше 10.
        cout << "Ёто число меньше 10." << endl;
        k = 1;
    }
    else if (num == 10) {
        cout << "Ёто число равно 10." << endl;
        k = 2;
    }
    else {  // иначе
        cout << "Ёто число больше 10." << endl;
        k = 3;
    }

    cout << "k = " << k << endl;
    return 0;
}