// Precio de Entrada a un Parque
// Un parque cobra diferente según la edad: niños menores de 5 entran gratis, entre 5 y 12 pagan $5, mayores de 12 pagan $10.

#include <iostream>
using namespace std;
int main()
{
    int edad=0;
    float ingreso=0;

    cout << "________________________________________________________________________________________________" << endl;
    cout << "Hola, bienvenido al parque de diversiones, por favor digita tu edad para calcular el costo total" << endl;
    cin >> edad;

    if (edad < 0)
    {
        cout << "Digite una edad valida por favor" << endl;
        return 0;
    }

    else
    {
        if (edad > 0 && edad < 5)
        {
            cout << "Como tienes menos de 5 anios, puedes entrar gratis" << endl;
        }
        else if (edad >= 5 && edad < 12)
        {
            cout << "Como tienes entre 5 y 12 anios, tu entrada cuesta $5" << endl;
            cout << "Ingresa la cantidad de dinero" << endl;
            cin >> ingreso;

            if (ingreso < 5)
            {
                cout << "No te alcanza para ingresar al parque" << endl;
                return 0;
            }

            else
            {
                float nuevoIngreso;
                nuevoIngreso = (ingreso - 5.00);

                cout << "Puedes pasar, tu vuelto es de $" << nuevoIngreso << endl;
            }
        }
        else
        {
            cout << "Como tienes 12 anios o mas, tu entrada cuesta $10" << endl;
            cout << "Ingresa la cantidad de dinero" << endl;
            cin >> ingreso;

            if (ingreso < 10)
            {
                cout << "No te alcanza para ingresar al parque" << endl;
                return 0;
            }

            else
            {
                float nuevoIngreso;
                nuevoIngreso = (ingreso - 10.00);

                cout << "Puedes pasar, tu vuelto es de $" << nuevoIngreso << endl;
            }
        }
    }

    return 0;
}