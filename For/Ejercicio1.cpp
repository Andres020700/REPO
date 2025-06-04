// Factorial de un Número
// Pide un número al usuario y calcula su factorial.

#include <iostream>
using namespace std;
int main()
{
    int numero, factorial = 1;
    cout << "Digite el numero del que quiere conocer su factorial" << endl;
    cin >> numero;

    if (numero < 1)
    {
        cout << "Digite un numero valido por favor" << endl;
    }

    else
    {
        for (int i = 1; i <= numero; i++)
        {
            factorial = factorial * i;
        }
        cout << "El factorial del numero " << numero << " es " << factorial << endl;
    }

    return 0;
}