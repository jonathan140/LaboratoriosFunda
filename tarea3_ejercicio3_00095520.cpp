#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    float x1, x2;

    cout<< "Ingrese un valor a: ";
    cin >> a;
    cout<< "Ingrese un valor para b: ";
    cin >> b;
    cout<< "Ingrese un valor para c: ";
    cin >> c;

    x1 = (-b + sqrt(pow(b, 2) - 4*a*c))/(2*a);
    x2 = (-b - sqrt(pow(b, 2) - 4*a*c))/(2*a); 

    cout<<"Los valores de x son: "<< x1 <<" y "<< x2 << endl;
    
    return 0;
}