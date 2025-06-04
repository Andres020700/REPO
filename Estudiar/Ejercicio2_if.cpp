// Clasificación de Triángulos
// Pide tres lados de un triángulo e indica si es equilátero, isósceles o escaleno.

#include <iostream>
using namespace std;
int main()
{
    float medida1, medida2, medida3;
    cout << "Hola, este es un bot que te ayudara a identificar que tipo de triangulo se" << endl;
    cout << "armara dependiendo de las longitued que escribas" << endl;
    cout << endl;

    cout << "Digita el primer lado de tu triangulo" << endl;
    cin >> medida1;
    cout << "Digita el segundo lado de tu triangulo" << endl;
    cin >> medida2;
    cout << "Digita el tercer lado de tu triangulo" << endl;
    cin >> medida3;

    if (medida1 > 0 && medida2 > 0 && medida3 > 0)
    {
        if (medida1 == medida2 && medida1 == medida3)
        {
            cout << "El triangulo que se forma es un triangulo equilatero, porque sus tres lados son iguales" << endl;
        }
        else if ((medida1 == medida2 && medida1 != medida3) || (medida1 != medida2 && medida1 == medida3) || (medida1 != medida2 && medida2 == medida3))
        {
            cout << "El triangulo que se forma es un triangulo isoceles, porque dos de sus lados son iguales." << endl;
        }
        else if (medida1 != medida2 && medida1 != medida3)
        {
            cout << "El triangulo que se forma es un triangulo escaleno, porque sus tres lados son diferentes" << endl;
        }
    }

    else
    {
        cout << "Digite medidas validas, recuerde que no pueden haber longitudes negativas" << endl;
    }

    return 0;
}