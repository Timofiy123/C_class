//������������� ��������� � �������������. ����� ��������
#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string numbertram;

    cout << "������ ����� ������� : ";
    cin >> numbertram;

    if (numbertram == "8�") {
        number = 1;
    }
    if (numbertram == "29�") {
        number = 2;
    }
    if (numbertram == "12") {
        number = 3;
    }
    if (numbertram == "22�") {
        number = 4;
    }
    if (numbertram == "35") {
        number = 5;
    }
    if (numbertram == "3") {
        number = 6;
    }
    if (numbertram == "18") {
        number = 7;
    }

    switch (number) {
    case 1: cout << "8� �� ��. �. ������� �� ���. ����� ���㳺���"; break;
    case 2: cout << "29� �� ��. �. ������������ �� ���. ����� ���㳺���"; break;
    case 3: cout << "12 �� ����-������ �� ����������� ����"; break;
    case 4: cout << "22� �� ����� ��� �� ���. ����� ���㳺���"; break;
    case 5: cout << "35 �� ��. �. ˳���� �� ���. ����� ������"; break;
    case 6: cout << "3 �� ������� �������������� �� ������� ������ �������"; break;
    case 7: cout << "18 �� ��. �. ����������� ����� �� ���. ��������������"; break;
    }

    return 0;
}