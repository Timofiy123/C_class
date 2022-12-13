#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    float a;
    float b;
    float c;
    float V;
    float S;

    cin >> a;
    cin >> b;
    cin >> c;

    V = a * b * c;
    cout << "Об'єм: " << V << "\n";

    S = 2 * (a * b + b * c + a * c);
    cout << "Площа поверхні: " << S << "\n";



    return 0;
}
