// Crea una calculadora que le pida ingresar dos datos al usuario, y que luego
// escoja una opcion de acuerdo a la operacion que necesita realizar (suma,resta,multiplicacion,division, potenciacion)
// Identificar si el resultado es positivo, negativo o cero
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int option;
    float firstNumber = 0, secondNumber = 0, result = 0;

    cout << "Write the first number" << endl;
    cin >> firstNumber;
    cout << endl;
    cout << "Write the second number" << endl;
    cin >> secondNumber;
    cout << endl;

    cout << "Please select the option that you need" << endl;
    cout << endl;
    cout << "1. Adittion \n2. Subtration \n3. Multiplication \n4. Division \n5. Exit" << endl;
    cin >> option;

    if (option < 1 || option > 5)
    {
        cout << "Please write a valid option" << endl;
        return 1;
    }
    switch (option)
    {
    case 1:
        result = firstNumber + secondNumber;
        cout << "The result of the adittion is :" << result << endl;
        break;

    case 2:
        result = firstNumber - secondNumber;
        cout << "The result of the subtraction is :" << result << endl;
        break;

    case 3:
        result = firstNumber * secondNumber;
        cout << "The result of the multiplication is :" << result << endl;
        break;

    case 4:
        if (secondNumber > 0)
        {
            result = firstNumber / secondNumber;
            cout << "The result of the division is :" << result << endl;
        }
        else
        {
            cout << "The division is indefinite" << endl;
            return 1;
        }
        break;

    case 5:
        cout << "Have a nice day" << endl;
        break;
    default:
        cout << "Please choose a valid option" << endl;
    }

    if (result > 0)
    {
        cout << "The result is positive" << endl;
    }
    else if (result < 0)
    {
        cout << "The result is negative" << endl;
    }
    else
    {
        cout << "The result is 0" << endl;
    }
    return 0;
}