//Розробка алгоритмів з розгалуженою структурою. Перше завдання
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    //6 
    int x;
    float Y;
    float b;
    float c;

    cin >> x;
    cin >> b;
    cin >> c;

    if (x < 2) {
        Y = (x - 9 * b * x) / (x - 2 * b * pow(x, 2));
    }
    else if (x >= 2)
    {
        Y = (x - 2 * c * x) / (x - 5 * c * pow(x, 3));
    }

    cout << Y;

    return(0);
}