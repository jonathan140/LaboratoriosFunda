#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string palabra;

    cout << "Ingrese palabra: ";
    cin >> palabra;

    if (palabra.length()>10)
    {
        cout << "La palabra tiene mas de 10 caracteres "<<endl;
    }
    else
    {
        cout << "La palabra tiene menos de 10 caracteres "<<endl;
    }
    
    if (palabra.length()%2 == 0)
    {
        cout << "La longitud de la palabra es par"<<endl;
    }
    else
    {
        cout << "La longitud de la palabra es impar"<<endl;
    }
    
}