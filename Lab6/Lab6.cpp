//Програмування алгоритмів з розгалуженням. Перше завдання
#include <iostream>

using namespace std;

int main() {
    int number;
    int count = 0;
    int a;
    int b;
    int c;

    cout << "Введіть трьохцифрове число : ";
    cin >> number;
    a = number / 100;
    b = number / 10 % 10;
    c = number % 10;

    cout << "Перше число" << a << "\n";
    cout << "Друге число" << b << "\n";
    cout << "Третє число" << c << "\n";

    //Перевірка на непарність. Добуток непарних чисел
    if (a > 3) {
        count = count + 1;
    }
    if (b > 3) {
        count = count + 1;
    }
    if (c > 3) {
        count = count + 1;
    }

    cout << "Кількість цифр більших за 3 " << count;


    return 0;
}