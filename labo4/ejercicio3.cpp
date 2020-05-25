#include <iostream>
using namespace std;
int main()
{  
    float num;

    cout << "Ingrese numero a verificar: ";
    cin >> num;

    if ( num > 0 )
    {
        cout << num << " es un numero positivo" <<endl;
    }
    else if ( num < 0 )
    {
        cout << num << " es un numero negativo" <<endl;
    }
    else 
    {
        cout << "El numero es 0" << endl;
    }

}