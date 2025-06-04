//Promedio de N Números
//Solicita al usuario N números y calcula su promedio.

#include<iostream>
using namespace std;
int main(){
    int numero,promedio=0,suma=0;
    
    cout<<"Digite un numero"<<endl;
    cin>>numero;

    for (int i = 1; i <=numero; i++)
    {
        suma+=i;
        promedio=suma/numero;
    }
    cout<<"El promedio del numero que escogiste es: "<<promedio<<endl;
   
    


    return 0;
}