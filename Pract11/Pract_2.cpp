#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void) {
	const int lenght = 7;
	int arr[lenght];
	int A;

	cout << "������ �� ��������� ����� A : ";
	cin >> A;

	for (int i = 0; i < lenght; i++)
	{
		arr[i] = int(rand() / A);
	}

	cout << "�����, ���������� ���������(�� 0 �� " << A << ") ������� :\n";

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}
}
