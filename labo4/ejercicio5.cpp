#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palabra;
    char letrafinal;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    if (palabra.front()==palabra.back())
    {
        cout << palabra << " inicia y termina con la misma letra" << endl;
    }
    else
    {
        {
            cout << palabra << " inicia y termina con letras diferentes" << endl;
        }
    }
    
}
