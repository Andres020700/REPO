// Crea un menu macdonald de noche, uno de nino y uno de dia
// Anade la cajita feliz en emnu manana
// hacer una validacion de 0 a 7 anos puede comprar la cajita feliz, si estas entre 7 a 14 puede comprarlo por el doble
// si tiene de 14 a 18 anos puede comprarlo al triple del precio, si tiene 18 a 80 anos no lo puede comprar
// genera un caso que puedes comprarlo y le sobra tanto, y no lo puede comprar, le falta tanto dinero

#include <iostream>
using namespace std;
int main()
{
    int opcion, menuDia, menuTarde, menuNoche, edad;
    float billetera = 100, restante;
    cout << "------MC MENU------" << endl;
    cout << endl;
    cout << "Seleccione el menu que guste" << endl;
    cout << endl;
    cout << "1. MENU DE DIA" << endl;
    cout << "2. MENU DE TARDE" << endl;
    cout << "3. MENU DE NOCHE" << endl;
    cout << "4. SALIR" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "---------MC MENU DIA---------" << endl;
        cout << endl;
        cout << "Seleccione la opcion que guste" << endl;
        cout << endl;
        cout << "1. MC MUFFIN (3.00$)" << endl;
        cout << "2. HOTCAKE (3.50$)" << endl;
        cout << "3. HASBROWN (2.00$)" << endl;
        cout << "4. YOGURT (2.75$)" << endl;
        cout << "5. CAJITA FELIZ (4.00$)" << endl;
        cin >> menuDia;

        switch (menuDia)
        {

        case 1:
            if (billetera > 3.00)
            {
                cout << "Haz seleccionado un MC MUFFIN" << endl;
                restante = billetera - 3.00;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;

        case 2:
            if (billetera > 3.50)
            {
                cout << "Haz seleccionado un Hotcake" << endl;
                restante = billetera - 3.50;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;

        case 3:
            if (billetera > 2.00)
            {
                cout << "Haz seleccionado un Hashbrown" << endl;
                restante = billetera - 2.00;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;

        case 4:
            if (billetera > 3.00)
            {
                cout << "Haz seleccionado un Yogurt" << endl;
                restante = billetera - 2.75;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;

        case 5:
            cout << "Digite su edad por favor" << endl;
            cin >> edad;
            if (edad >= 0 && edad < 7)
            {
                cout << "Haz seleccionado la cajita feliz y su costo es de 4.00$" << endl;

                if (billetera > 4.00)
                {
                    cout << "Te alcanza" << endl;
                }
                else
                {
                    cout << "No te alcanza" << endl;
                }
            }
            else if (edad >= 7 && edad < 14)
            {
                cout << "Haz seleccionado la cajita feliz y su costo es de 8.00$" << endl;

                if (billetera > 8.00)
                {
                    cout << "Te alcanza" << endl;
                }
                else
                {
                    cout << "No te alcanza" << endl;
                }
            }
            else if (edad >= 14 && edad < 18)
            {
                cout << "Haz seleccionado la cajita feliz y su costo es de 12.00$" << endl;

                if (billetera > 12.00)
                {
                    cout << "Te alcanza" << endl;
                }
                else
                {
                    cout << "No te alcanza" << endl;
                }
            }
            else
            {
                cout << "Brother, ya no estas para estas vueltas" << endl;
            }
            break;
        default:
            cout << "Por favor digite una opcion valida" << endl;
        }
    case 2:
        cout << "---------MC MENU TARDE---------" << endl;
        cout << endl;
        cout << "Seleccione la opcion que guste" << endl;
        cout << endl;
        cout << "1. MC MUFFIN (3.00$)" << endl;
        cout << "2. PASTEL DE ZANAHORIA (3.50$)" << endl;
        cout << "3. CAFE (2.00$)" << endl;
        cout << "4. JUGO (2.75$)" << endl;
        cin >> menuTarde;

        switch (menuTarde)
        {

        case 1:
            if (billetera > 3.00)
            {
                cout << "Haz seleccionado un MC MUFFIN" << endl;
                restante = billetera - 3.00;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;

        case 2:
            if (billetera > 3.50)
            {
                cout << "Haz seleccionado un Pastel de zanahoria" << endl;
                restante = billetera - 3.50;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;

        case 3:
            if (billetera > 2.00)
            {
                cout << "Haz seleccionado un cafe" << endl;
                restante = billetera - 2.00;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;

        case 4:
            if (billetera > 3.00)
            {
                cout << "Haz seleccionado un jugo" << endl;
                restante = billetera - 2.75;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;
        default:
            cout << "Digite un dato valido por favor" << endl;
        }

    case 3:
        cout << "---------MC MENU NOCHE---------" << endl;
        cout << endl;
        cout << "Seleccione la opcion que guste" << endl;
        cout << endl;
        cout << "1. MC MUFFIN (3.00$)" << endl;
        cout << "2. CENA TIPICA (1000$)" << endl;
        cout << "3. CAFE (2.00$)" << endl;
        cout << "4. JUGO (2.75$)" << endl;
        cin >> menuNoche;

        switch (menuNoche)
        {

        case 1:
            if (billetera > 3.00)
            {
                cout << "Haz seleccionado un MC MUFFIN" << endl;
                restante = billetera - 3.00;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;

        case 2:
            if (billetera > 1000)
            {
                cout << "Haz seleccionado una cena tipica" << endl;
                restante = billetera - 1000;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;

        case 3:
            if (billetera > 2.00)
            {
                cout << "Haz seleccionado un cafe" << endl;
                restante = billetera - 2.00;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;

        case 4:
            if (billetera > 3.00)
            {
                cout << "Haz seleccionado un jugo" << endl;
                restante = billetera - 2.75;
                cout << "Tienes un saldo de :" << restante << endl;
            }
            else
            {
                cout << "No te alcanza para comprar" << endl;
            }
            return 0;
            break;
        default:
            cout << "Digite un dato valido por favor" << endl;
        }
    case 4:
        cout << "Muchas gracias, vuelva pronto" << endl;
        return 0;
    }

    return 0;
}