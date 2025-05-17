// Calculadora Simple
// Pide dos números y una operación (+, -, *, /), y muestra el resultado.

#include <iostream>
using namespace std;
int main()
{
    int data;
    float firstNumber, secondNumber, result1, result2, result3, result4;
    cout << "Write a number" << endl;
    cin >> firstNumber;

    cout << "Write another number" << endl;
    cin >> secondNumber;

    cout << "Write 1 if you need a plus" << endl;
    cout << "Write 2 if you need a subtraction" << endl;
    cout << "Write 3 if you need a multiplication" << endl;
    cout << "Write 4 if you need a division" << endl;
    cin >> data;

    switch (data)
    {
    case 1:
        result1 = firstNumber + secondNumber;
        cout << "The result of the plus is:" << result1 << endl;
        break;
    case 2:
        result2 = firstNumber - secondNumber;
        cout << "The result of the subtarction is:" << result2 << endl;
    case 3:
        result3 = firstNumber * secondNumber;
        cout << "The result of the multiplication is:" << result3 << endl;
    case 4:
        result4 = firstNumber / secondNumber;
        if (secondNumber>0)
        {
        cout << "The result of the division is:" << result4 << endl;
        }
        else
        {
            cout << "The division doesn't work, because the number of the denominator is 0" << endl;
        }
    default:
    
        break;
    }
    return 0;
}
