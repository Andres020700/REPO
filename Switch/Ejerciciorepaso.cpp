//Escriba un programa, en el que el usuario ingrese una letra y el
//programa diga el color, según la tabla siguiente
//Letra - Entrada Color - Salida
//R Rojo
//Y Amarillo
//B Azul
//W Blanco
//K Negro
//C Cian
//G Verde

#include<iostream>
using namespace std;
int main(){
char data;

cout<<"Escoje la opcion que mas gustes"<<endl;
cout<<endl;
cout<<"R. Rojo \nY. Amarillo \nB. Azul \nW. Blanco \nK. Negro \nC. Cian \nG. Verde"<<endl;
cin>>data;

switch (data)
{
case 'R':
    cout<<"El color que escogiste es rojo"<<endl;
    break;

case 'Y':
cout<<"El color que escogiste es amarillo"<<endl;
break;

case 'B':
cout<<"El color que escogiste es azul"<<endl;
break;

case 'W':
cout<<"El color que escogiste es blanco"<<endl;
break;

case 'K':
cout<<"El color que escogiste es negro"<<endl;
break;

case 'C':
cout<<"El color que escogiste es cian"<<endl;
break;

case 'G':
cout<<"El color que escogiste es verde"<<endl;
break;

default:
cout<<"Escoja una opcion valida"<<endl;
}

    return 0;
}
