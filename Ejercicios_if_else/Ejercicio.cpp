// Dado un número entero, indicar si es divisible entre cinco y, a la vez,
// divisible entre tres.

#include <iostream>
using namespace std;
int main()
{
    int number1 = 5, number2 = 3, residuo1, residuo2, number;

    cout << "Digite un numero cualquiera" << endl;
    cin >> number;
    residuo1 = number % number1;
    residuo2 = number % number2;

    if (residuo1 == 0 && residuo2 == 0)
    {
        cout << "El numero que escogiste es posible dividirlo entre 5 y 3 a la vez" << endl;
    }
    else
    {
        cout << "El numero que escogiste no es posible dividirlo entre 5 y 3 a la vez" << endl;
    }

    return 0;
}