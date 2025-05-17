//Descuento en Tienda
//Pide el monto de una compra y aplica un 10% de descuento si el monto es mayor a $100.

#include<iostream>
#include<cmath>
using namespace std;

int main(){
int cost;
float discount,newPrice;
cout<<"What is the cost of the product in dollars?"<<endl;
cin>>cost;

discount= cost*10/100;
newPrice= cost - discount;
//If the cost is more than $100
if (cost>100)
{
cout<<"You have a discount of 10%, the new cost of the product is:$"<<newPrice<<endl;    
}
else
{
    cout<<"The cost of the product is:$"<<cost<<endl;
}

    return 0;
}