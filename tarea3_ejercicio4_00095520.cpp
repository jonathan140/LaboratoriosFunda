#include <iostream>
using namespace std;
int main()
{
    string producto;
    float precio,total;
    int cantidad;
    
    cout<<"Ingrese nombre del producto comprado \n";
    cin>>producto;
    cout<<"Ingrese el precio del producto \n";
    cin>>precio;
    cout<<"Ingrese la cantidad que ha comprado \n";
    cin>>cantidad;
    total=precio*cantidad; 
    
    cout<<"Usted a gastado $"<<total <<" dolares en el producto"<<" "<<producto <<endl;   
    
    return 0;
}