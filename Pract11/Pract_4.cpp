#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void) {
	const int lenght = 7;
	int arr[lenght];

	for (int i = 0; i < lenght; i++)
	{
		arr[i] = int(rand() % -5) + -(rand() % 5);
	}

	cout << "�����, ���������� ��������� (�� 0 �� 100) ������� :\n";

	for (int i = 0; i < lenght; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < lenght; i++)
	{
		if (arr[i] == 0) {
			cout << "\n���� ��������� �� " << i << " �������";
		}
	}

}