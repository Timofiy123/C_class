//Програмування алгоритмів з розгалуженням. Друге завдання
#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string numbertram;

    cout << "Введіть номер трамвая : ";
    cin >> numbertram;

    if (numbertram == "8К") {
        number = 1;
    }
    if (numbertram == "29К") {
        number = 2;
    }
    if (numbertram == "12") {
        number = 3;
    }
    if (numbertram == "22К") {
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
    case 1: cout << "8К от Ст. М. Позняки до Вул. Івана Сергієнка"; break;
    case 2: cout << "29К от Ст. М. Бориспільська до Вул. Івана Сергієнка"; break;
    case 3: cout << "12 от Пуща-Водиця до Куренівський Парк"; break;
    case 4: cout << "22К от Завод Збк до Вул. Івана Сергієнка"; break;
    case 5: cout << "35 от Ст. М. Лісова до Вул. Сержа Лифаря"; break;
    case 6: cout << "3 от Станція Старовокзальна до Станція Ромена Роллана"; break;
    case 7: cout << "18 от Ст. М. Контрактова Площа до Вул. Старовокзальна"; break;
    }

    return 0;
}