#include <iostream>
#include <cstdlib>

#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    double num;
    int k;

    cout << "������� ������������ �����: ";
    cin >> num;

    if (num < 10) {  // ���� ��������� ����� ������ 10.
        cout << "��� ����� ������ 10." << endl;
        k = 1;
    }
    else if (num == 10) {
        cout << "��� ����� ����� 10." << endl;
        k = 2;
    }
    else {  // �����
        cout << "��� ����� ������ 10." << endl;
        k = 3;
    }

    cout << "k = " << k << endl;
    return 0;
}