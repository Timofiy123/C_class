//�������� ��������� � ������������ ����������. ����� ��������
#include <iostream>

using namespace std;

int main() {
    float x, y;

    cout << "������ ��������� �����(x y) :";
    cin >> x >> y;

    if (x + y <= 2 && x >= 0 && y >= 0)
        cout << "����� ��������� � ������ �������";
    else
        cout << "����� �� ��������� � ������ �������";
}