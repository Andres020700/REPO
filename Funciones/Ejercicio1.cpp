// Conversión de Temperatura
// Escribe una función que convierta grados Celsius a Fahrenheit.

#include <iostream>
using namespace std;

float temperatura(float a)
{
    return ((a*9/5)+32);

}

 int main()
    {
        float celsius;

        cout << "Digite la temperatura en grados celcius que deseea pasar a grados Fahrenheit" << endl;
        cin >> celsius;

        cout<<"La temperatura en grados Fahrenheit es "<<temperatura(celsius)<<endl;
    }