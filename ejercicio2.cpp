#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c; /*se puede escribir en linea para no tener que escribir int a cada una de las variables*/
    float x;
    cout<< "Ingrese a: ";
    cin>>a;
    cout<< "Ingrese b: ";
    cin>>b;
    cout<<"Ingrese c: ";
    cin>>c;

    x = (-b + sqrt(pow(b,2) - 4*a*c))/2*a;

    cout<<x<<endl;
    
    return 0;
}