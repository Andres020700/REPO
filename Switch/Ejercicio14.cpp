// Pide la edad de un usuario y usa switch para recomendar una categoría de películas (G, PG, PG-13, R).

#include <iostream>
using namespace std;
int main()
{
    int data;
    cout << "Digite your age \n 1. If your age is between 0 to 13 \n 2. If your age is between 14 to 17 \n 3. If your age is 18 and over" << endl;
    cin >> data;

    switch (data)
    {
    case 1:
        cout << "You have between 0 to 13 years, the categories that I recommend to you are G and PG," << endl;
        cout << "the last one only when your parents are with you" << endl;
        break;
    case 2:
        cout << "You have between 14 to 17 years, the categories that I recommend to you are G, PG" << endl;
        cout << "and R, the last one only when your parents are with you" << endl;
        break;
    case 3:
        cout << "You have 18 years and over, you can watch all that you want" << endl;
        break;
    default:
        cout << "Please digite a valid number" << endl;
    }
    return 0;
}