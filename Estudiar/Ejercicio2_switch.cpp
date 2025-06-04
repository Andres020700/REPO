// Zodíaco según el Mes
// Solicita un mes de nacimiento y muestra el signo zodiacal correspondiente.

#include <iostream>
using namespace std;
int main()
{
    int mes, fecha;
    cout << "Hola, selecciona tu mes de nacimiento" << endl;
    cout << endl;
    cout << " 1. Enero" << endl;
    cout << " 2. Febrero" << endl;
    cout << " 3. Marzo" << endl;
    cout << " 4. Abril" << endl;
    cout << " 5. Mayo" << endl;
    cout << " 6. Junio" << endl;
    cout << " 7. Julio" << endl;
    cout << " 8. Agosto" << endl;
    cout << " 9. Septiembre" << endl;
    cout << "10. Octubre" << endl;
    cout << "11. Noviembre" << endl;
    cout << "12. Diciembre" << endl;
    cout << "13. Salir" << endl;
    cin >> mes;

    switch (mes)
    {
    case 1:
        cout << "Seleccionaste enero, puedes ser Capricornio o Acuario" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 19)
        {
            cout << "Tu signo zodiacal es Capricornio" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Acuario" << endl;
        }
        break;

    case 2:
        cout << "Seleccionaste febrero, puedes ser Acuario o Piscis" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 18)
        {
            cout << "Tu signo zodiacal es Acuario" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Piscis" << endl;
        }
        break;

    case 3:
        cout << "Seleccionaste marzo, puedes ser Piscis o Aries" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 20)
        {
            cout << "Tu signo zodiacal es Piscis" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Aries" << endl;
        }
        break;

    case 4:
        cout << "Seleccionaste abril, puedes ser Aries o Tauro" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 21)
        {
            cout << "Tu signo zodiacal es Aries" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Tauro" << endl;
        }
        break;

    case 5:
        cout << "Seleccionaste mayo, puedes ser Tauro o Geminis" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 20)
        {
            cout << "Tu signo zodiacal es Tauro" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Geminis" << endl;
        }
        break;

    case 6:
        cout << "Seleccionaste junio, puedes ser Geminis o Cancer" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 20)
        {
            cout << "Tu signo zodiacal es Geminis" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Cancer" << endl;
        }
        break;

    case 7:
        cout << "Seleccionaste julio, puedes ser Cancer o Leo" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 22)
        {
            cout << "Tu signo zodiacal es Cancer" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Leo" << endl;
        }
        break;

    case 8:
        cout << "Seleccionaste agosto, puedes ser Leo o Virgo" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 22)
        {
            cout << "Tu signo zodiacal es Leo" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Virgo" << endl;
        }
        break;

    case 9:
        cout << "Seleccionaste septiembre, puedes ser Virgo o Libra" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 22)
        {
            cout << "Tu signo zodiacal es Virgo" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Libra" << endl;
        }
        break;

    case 10:
        cout << "Seleccionaste octubre, puedes ser Libra o Escorpio" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 22)
        {
            cout << "Tu signo zodiacal es Libra" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Escorpio" << endl;
        }
        break;

    case 11:
        cout << "Seleccionaste noviembre, puedes ser Escorpio o Sagitario" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 21)
        {
            cout << "Tu signo zodiacal es Escorpio" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Sagitario" << endl;
        }
        break;

    case 12:
        cout << "Seleccionaste diciembre, puedes ser Sagitario o Capricornio" << endl;
        cout << "Escriba que fecha nacio" << endl;
        cin >> fecha;
        if (fecha >= 1 && fecha <= 21)
        {
            cout << "Tu signo zodiacal es Sagitario" << endl;
        }
        else
        {
            cout << "Tu signo zodiacal es Capricornio" << endl;
        }
        break;

    case 13:
        cout << "Gracias por usarme" << endl;
        break;

    default:
        cout << "Seleccione una opcion valida" << endl;
    }

    return 0;
}