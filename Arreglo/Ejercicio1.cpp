// Promedio de un Arreglo
// Solicita N números, guárdalos en un arreglo y calcula el promedio.

#include <iostream>
using namespace std;
int main()
{
    int tamanio, numero, suma = 0;
    float promedio;
    cout << "Digite el tamanio del que sera su arreglo" << endl;
    cin >> tamanio;

    cout << "Digite los numeros que quiere en su arreglo" << endl;
    int arreglo[tamanio];
    for (int i = 0; i < tamanio; i++)
    {
        cout << "Numero " << i + 1 << " : ";
        cin >> arreglo[i];
        suma += arreglo[i];
    }

    promedio = static_cast<float>(suma) / tamanio; // static_cast se usa por si tenemos operaciones entre dos tipos de variables, predomine la que seleccionemos, en este caso float

    cout << "El promedio de los datos de tu arreglo es " << promedio << endl;

    return 0;
}