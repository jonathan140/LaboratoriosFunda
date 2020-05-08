#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float radio, area, perimetro;
    float PI=3.1416;
    
    cout<<"Ingrese radio del circulo: ";
    cin>>radio;
    area= PI * pow(radio,2);
    perimetro= PI * 2 * radio;

    cout<<"El area del circulo es: "<<area<<endl;
    cout<<"El perimetro del circulo es: "<<perimetro<<endl;

    return 0;

}
