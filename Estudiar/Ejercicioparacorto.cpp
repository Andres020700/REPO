// Crea un menu macdonald de noche, uno de nino y uno de dia
// Anade la cajita feliz en emnu manana
// hacer una validacion de 0 a 7 anos puede comprar la cajita feliz, si estas entre 7 a 14 puede comprarlo por el doble
// si tiene de 14 a 18 anos puede comprarlo al triple del precio, si tiene 18 a 80 anos no lo puede comprar
// genera un caso que puedes comprarlo y le sobra tanto, y no lo puede comprar, le falta tanto dinero
#include <iostream>

using namespace std;

int main()
{
    float billetera = 100, restante;
    int menuGlobal, menuManana, menuNoche, menuTarde, edad;

    cout << "--------MC Menu--------" << endl;
    cout << "1. Menu de manana" << endl;
    cout << "2. Menu de la tarde" << endl;
    cout << "3. Menu de la noche" << endl;
    cout << "4. Salir" << endl;
    cout << "Hola que tal, que menu deseas visualizar" << endl;
    cin >> menuGlobal;

    switch (menuGlobal)
    {
    case 1:

        cout << "--------MC Menu manana--------" << endl;
        cout << "1. Mc muffin (3.00$)" << endl;
        cout << "2. Hotcake (4.75$)" << endl;
        cout << "3. Jugo (1.25$)" << endl;
        cout << "4. Papas(2.00$)" << endl;
        cout << "5. Cajita feliz  (3.75 $)" << endl;
        cout << "Hola que tal, que te puedo ofrecer" << endl;
        cin >> menuManana;

        switch (menuManana)
        {
        case 1:
            cout << "Haz seleccionado un Mcmuffin (3.00$)" << endl;
            restante = (billetera - 3);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }
            break;
        case 2:
            cout << "Haz seleccionado un Hotcake (4.75$)" << endl;
            restante = (billetera - 4.75);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }
            break;
        case 3:
            cout << "Haz seleccionado un jugo (1.25$)" << endl;
            restante = (billetera - 1.25);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }
            break;
        case 4:
            cout << "Haz seleccionado unas papas (2.00$)" << endl;
            restante = (billetera - 2);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }
            break;

        case 5:
            cout << "Escriba su edad por favor" << endl;
            cin >> edad;
            if (edad >= 0 && edad < 7)
            {
                cout << "Haz seleccionado la cajita feliz (3.75$)" << endl;
                cout << "Haz seleccionado un Mcmuffin (3.00$)" << endl;
                restante = (billetera - 3);
                if (restante <= 100)
                {
                    cout << "Usted puede compralo" << endl;
                    cout << "Su saldo actual es de :" << restante << endl;
                }
                else
                {
                    cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
                }
                restante = (billetera - 3.75);
            }
            else if (edad >= 7 && edad < 14)
            {
                cout << "Haz seleccionado la cajita feliz, por tu edad su valor es de 7.5$" << endl;
                restante = (billetera - 7.5);
                cout << "Haz seleccionado un Mcmuffin (3.00$)" << endl;
                restante = (billetera - 3);
                if (restante <= 100)
                {
                    cout << "Usted puede compralo" << endl;
                    cout << "Su saldo actual es de :" << restante << endl;
                }
                else
                {
                    cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
                }
            }
            else if (edad >= 14 && edad < 18)
            {
                cout << "Haz seleccionado la cajita feliz, por tu edad su valor es de 11.25$" << endl;
                restante = (billetera - 11.25);
                cout << "Haz seleccionado un Mcmuffin (3.00$)" << endl;
                restante = (billetera - 3);
                if (restante <= 100)
                {
                    cout << "Usted puede compralo" << endl;
                    cout << "Su saldo actual es de :" << restante << endl;
                }
                else
                {
                    cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
                }
            }
            else if (edad >= 18 && edad < 80)
            {
                cout << "No lo puede comprar, usted esta roco" << endl;
            }
            else
            {
                cout << "Ya no estas en edad brother" << endl;
                return 0;
            }
            return 0;

        default:
            cout << "Por favor digite una opcion valida" << endl;
            return 0;
        }
        return 0;
    case 2:
        cout << "--------MC Menu tarde--------" << endl;
        cout << "1. Mc muffin (3.00$)" << endl;
        cout << "2. Pie de manzana (150$)" << endl;
        cout << "3. Cafe (1.25$)" << endl;
        cout << "4. Pastel de zanahoria (5.00$)" << endl;
        cout << "Hola que tal, que te puedo ofrecer" << endl;
        cin >> menuTarde;

        switch (menuTarde)
        {
        case 1:
            cout << "Haz seleccionado un Mcmuffin (3.00$)" << endl;
            restante = (billetera - 3);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }
            break;

        case 2:
            cout << "Haz seleccionado un Pie de manzana (150$)" << endl;
            restante = (billetera - 150);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }
            break;

        case 3:
            cout << "Haz seleccionado un cafe (1.25$)" << endl;
            restante = (billetera - 1.25);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }
            break;

        case 4:
            cout << "Haz seleccionado un pastel de zanahoria (5.00$)" << endl;
            restante = (billetera - 5);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }
            break;

        default:
            cout << "Por favor digite una opcion valida" << endl;
        }
        return 0;

    case 3:
        cout << "--------MC Menu noche--------" << endl;
        cout << "1. Mc muffin (3.00$)" << endl;
        cout << "2. Jugo (1.25$)" << endl;
        cout << "3. Cafe (1.25$)" << endl;
        cout << "4. Cena tipica(5.00$)" << endl;
        cout << "Hola que tal, que te puedo ofrecer" << endl;
        cin >> menuNoche;

        switch (menuNoche)
        {
        case 1:
            cout << "Haz seleccionado un Mcmuffin (3.00$)" << endl;
            restante = (billetera - 3);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }
            break;
        case 2:
            cout << "Haz seleccionado un Jugo (1.25$)" << endl;
            restante = (billetera - 1.25);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }

            break;
        case 3:
            cout << "Haz seleccionado un Cafe (1.25$)" << endl;
            restante = (billetera - 1.25);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }

            break;
        case 4:
            cout << "Haz seleccionado una cena tipica (5.00$)" << endl;
            restante = (billetera - 5);
            if (restante <= 100)
            {
                cout << "Usted puede compralo" << endl;
                cout << "Su saldo actual es de :" << restante << endl;
            }
            else
            {
                cout << "Lo siento, no puede comprarlo, saldo insuficiente" << endl;
            }

            break;
        default:
            cout << "Por favor digite una opcion valida" << endl;
        }
        return 0;
    case 4:
        cout << "Vuelva pronto" << endl;
        return 0;
    }

    return 0;
}