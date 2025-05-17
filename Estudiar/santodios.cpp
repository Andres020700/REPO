// Crea un menu macdonald de noche, uno de nino y uno de dia
// Anade la cajita feliz en emnu manana
// hacer una validacion de 0 a 7 anos puede comprar la cajita feliz, si estas entre 7 a 14
// puede comprarlo por el doble
// si tiene de 14 a 18 anos puede comprarlo al triple del precio, si tiene 18 a 80 anos no lo puede comprar
// genera un caso que puedes comprarlo y le sobra tanto, y no lo puede comprar, le falta tanto dinero

#include <iostream>
using namespace std;
int main()
{
    int menuGrande, menuDia, menuNoche, menuNino, edad;
    float billetera = 10.00, restante;

    cout << "--------MC MENU--------" << endl;
    cout << "" << endl;
    cout << "Hola que tal, seleccione la opcion que necesita" << endl;
    cout << "" << endl;
    cout << "1. MC MENU DIA" << endl;
    cout << "2. MC MENU NOCHE" << endl;
    cout << "3. MC MENU NINO" << endl;
    cout << "4. SALIR" << endl;
    cin >> menuGrande;

    switch (menuGrande)
    {
    case 1:
        cout << "--------MC MENU DIA--------" << endl;
        cout << "" << endl;
        cout << "Hola que tal, seleccione la opcion que necesita" << endl;
        cout << "" << endl;
        cout << "1. MC MUFFIN       3.00$" << endl;
        cout << "2. HOTCAKES        3.50$" << endl;
        cout << "3. JUGO            1.50$" << endl;
        cout << "4. CAJITA FELIZ    4.00$" << endl;
        cin >> menuDia;

        switch (menuDia)
        {
        case 1:
            if (billetera > 3.00)
            {
                restante = billetera - 3.00;
                cout << "Seleccionaste un mc muffin, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;

        case 2:
            if (billetera > 3.50)
            {
                restante = billetera - 3.50;
                cout << "Seleccionaste un hotcakes, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;

        case 3:
            if (billetera > 1.50)
            {
                restante = billetera - 1.50;
                cout << "Seleccionaste un jugo, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;

        case 4:
            cout << "Digite su edad por favor" << endl;
            cin >> edad;

            if (edad >= 0 && edad < 7)
            {
                if (billetera > 4.00)
                {
                    restante = billetera - 4.00;
                    cout << "Seleccionaste una cajita feliz, tu saldo restante es " << restante << endl;
                }
                else
                {
                    cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
                }
            }
            else if (edad >= 7 && edad < 14)
            {
                if (billetera > 8.00)
                {
                    restante = billetera - 8.00;
                    cout << "Seleccionaste un mc muffin, tu saldo restante es " << restante << endl;
                }
                else
                {
                    cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
                }
            }
            else if (edad >= 14 && edad < 18)
            {
                if (billetera > 12.00)
                {
                    restante = billetera - 12.00;
                    cout << "Seleccionaste un mc muffin, tu saldo restante es " << restante << endl;
                }
                else
                {
                    cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
                }
            }
            else
            {
                cout << "Ya no estas para esas vueltas brother" << endl;
            }
            break;
        default:
            cout << "Digite un dato valido por favor" << endl;
            return 0;
        }
        break;
    case 2:
        cout << "--------MC MENU NOCHE--------" << endl;
        cout << "" << endl;
        cout << "Hola que tal, seleccione la opcion que necesita" << endl;
        cout << "" << endl;
        cout << "1. MC MUFFIN       3.00$" << endl;
        cout << "2. HOTCAKES        3.50$" << endl;
        cout << "3. JUGO            1.50$" << endl;
        cout << "4. CAFE            2.00$" << endl;
        cin >> menuNoche;

        switch (menuNoche)
        {
        case 1:
            if (billetera > 3.00)
            {
                restante = billetera - 3.00;
                cout << "Seleccionaste un mc muffin, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;

        case 2:
            if (billetera > 3.50)
            {
                restante = billetera - 3.50;
                cout << "Seleccionaste un hotcakes, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;

        case 3:
            if (billetera > 1.50)
            {
                restante = billetera - 1.50;
                cout << "Seleccionaste un jugo, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;

        case 4:
            if (billetera > 2.00)
            {
                restante = billetera - 2.00;
                cout << "Seleccionaste un cafe, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;
        default:
            cout << "Seleccione una opcion valida por favor" << endl;
            return 0;
        }
        break;
    case 3:
        cout << "--------MC MENU NINO--------" << endl;
        cout << "" << endl;
        cout << "Hola que tal, seleccione la opcion que necesita" << endl;
        cout << "" << endl;
        cout << "1. MC MUFFIN                    3.00$" << endl;
        cout << "2. DERRETIDO                    2.50$" << endl;
        cout << "3. JUGO                         1.50$" << endl;
        cout << "4. PASTEL DE MANZANA            2.00$" << endl;
        cin >> menuNino;

        switch (menuNino)
        {
        case 1:
            if (billetera > 3.00)
            {
                restante = billetera - 3.00;
                cout << "Seleccionaste un mc muffin, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;

        case 2:
            if (billetera > 2.50)
            {
                restante = billetera - 2.50;
                cout << "Seleccionaste un derretido, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;

        case 3:
            if (billetera > 1.50)
            {
                restante = billetera - 1.50;
                cout << "Seleccionaste un jugo, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;

        case 4:
            if (billetera > 2.00)
            {
                restante = billetera - 2.00;
                cout << "Seleccionaste un pastel de manzana, tu saldo restante es " << restante << endl;
            }
            else
            {
                cout << "No tienes saldo suficiente para comprar el mc muffin" << endl;
            }
            break;
        default:
            cout << "Seleccione una opcion valida por favor" << endl;
            return 0;
        }
        break;

    case 4:
        cout << "Muchas gracias, vuelva pronto" << endl;
        return 0;
        break;
    default:
        cout << "Seleccione una opcion valida" << endl;
        return 0;
    }
    return 0;
}
