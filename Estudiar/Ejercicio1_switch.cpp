// Conversión de Unidades de Longitud
// Pide una opción (1 = cm a pulgadas, 2 = metros a pies, 3 = km a millas) y realiza la conversión.

#include <iostream>
using namespace std;
int main()
{
    int opcion;
    double antes = 0, despues = 0;

    cout << "_________________________________" << endl;
    cout << "_______Menu de conversiones______" << endl;
    cout << endl;
    cout << "Digite la opcion que guste:" << endl;
    cout << "1. Convertir cm a pulgadas " << endl;
    cout << endl;
    cout << "2. Convertir metros a pies " << endl;
    cout << endl;
    cout << "3. Convertir km a millas" << endl;
    cout << endl;
    cout << "4. Salir" << endl;
    cout << endl;
    cout << "_________________________________" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Digite la cantidad de cm que deseea pasar a pulgadas" << endl;
        cin >> antes;
        despues = (antes / 2.54);
        cout << endl;
        if (antes > 0)
        {
            cout << antes << " centimetros equivalen a " << despues << " pulgadas" << endl;
        }
        else
        {
            cout << "Digite una cantidas valida" << endl;
        }
        break;

    case 2:
        cout << "Digite la cantidad de metros que deseea pasar a pies" << endl;
        cin >> antes;
        despues = (antes * 3.281);
        cout << endl;
        if (antes > 0)
        {
            cout << antes << " metros equivalen a " << despues << " pies" << endl;
        }
        else
        {
            cout << "Digite una cantidas valida" << endl;
        }
        break;

    case 3:
        cout << "Digite la cantidad de kilometros que deseea pasar a millas" << endl;
        cin >> antes;
        despues = (antes / 1.609);
        cout << endl;
        if (antes > 0)
        {
            cout << antes << " kilometros equivalen a " << despues << " millas" << endl;
        }
        else
        {
            cout << "Digite una cantidas valida" << endl;
        }
        break;

    case 4:
        cout << "Gracias por utilizarme" << endl;
        return 0;
        break;

    default:
        cout << "Ingrese una opcion valida por favor" << endl;
    }

    return 0;
}