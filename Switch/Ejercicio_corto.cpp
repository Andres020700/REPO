// Haz un programa que pida al usuario ingresar su salario mensual bruto
// y luego realice los siguientes calculos:
// 1) Descuentos obligatorios: Seguro social el 3 por ciento del salario con un tope maximo de 30 dolares
// solo aplica hasta mil dolares
// 2)Afp, es el 7.5 % del salario
// Renta se calcula sobre el salario neto despues de isss y afp
// hasta $472.00                         exento
// de $472.01 hasta 895.24                10%
// de 895.25 a 2038.10                     20%
// Mas de 2038.10                          30%

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int option;
    double ISSS = 0, AFP = 0, grossSalary = 0, netSalary = 0, netSalary1 = 0, renta1 = 0, renta2 = 0, renta3 = 0, renta4 = 0, renta5 = 0, renta6 = 0;

    cout << "Escoje la operacion que necesitas saber:" << endl;
    cout << endl;
    cout << "1. Cobro del seguro social. \n2. Cobro de la AFP. \n3. Cobro de la renta. \n4. Salir" << endl;
    cin >> option;

    if (option < 1 || option > 4)
    {
        cout << "Por favor escoja una opcion valida" << endl;
        return 1;
    }
    else
    {
        cout << "Digite su salario bruto" << endl;
        cin >> grossSalary;
        cout << endl;
        if (grossSalary < 0)
        {
            cout << "Por favor escriba un salario valido" << endl;
            return 1;
        }
        else
        {
            switch (option)
            {
            case 1:
                if (grossSalary < 1000)
                {
                    ISSS = grossSalary * 0.03;
                    cout << "El seguro social se queda con $" << ISSS << endl;
                }
                else
                {
                    cout << "El seguro social se queda con $30" << endl;
                }
                break;

            case 2:
                AFP = grossSalary * 0.075;
                cout << "La AFP se queda con $" << AFP << endl;
                break;

            case 3:
                netSalary = grossSalary - ISSS - AFP;
                if (grossSalary <= 1000)
                {
                    if (netSalary <= 472.00)
                    {
                        cout << "Estas exento de pagar renta" << endl;
                    }

                    else if (netSalary > 472.01 && netSalary <= 895.24)
                    {
                        renta1 = netSalary * 0.1;
                        cout << "Tienes que pagar de renta $" << renta1 << endl;
                    }
                    else if (netSalary > 895.25 && netSalary < 2038.10)
                    {
                        renta2 = netSalary * 0.2;
                        cout << "Tienes que pagar de renta $" << renta2 << endl;
                    }

                    else
                    {
                        renta3 = netSalary * 0.3;
                        cout << "Tienes que pagar de renta $" << renta3 << endl;
                    }
                }
                else
                {
                    netSalary1 = grossSalary - 30 - AFP;
                    if (netSalary1 <= 472.00)
                    {
                        cout << "Estas exento de pagar renta" << endl;
                    }
                    else if (netSalary1 > 472.01 && netSalary1 <= 895.24)
                    {
                        renta4 = netSalary1 * 0.1;
                        cout << "Tienes que pagar de renta $" << renta4 << endl;
                    }
                    else if (netSalary1 > 895.25 && netSalary1 < 2038.10)
                    {
                        renta5 = netSalary1 * 0.2;
                        cout << "Tienes que pagar de renta $" << renta5 << endl;
                    }
                    else
                    {
                        renta6 = netSalary1 * 0.3;
                        cout << "Tienes que pagar de renta $" << renta6 << endl;
                    }
                }
                break;
            case 4:
                cout << "Ten un buen dia" << endl;
            }
        }

        return 0;
    }
return 0;
}

    