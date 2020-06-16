#include "iostream"
using namespace std;

int mcd (int num1,int num2)
{
    int residuo;
    
    do
    {
        residuo = num1 % num2;
        if (residuo != 0)
        {
            num1 = num2;
            num2 = residuo;
        }
    }
    while (residuo !=0);                    
    return num2;
}


int main()
{
    int num1,num2;                                     //se guardan los numeros a evaluar en variables
    cout << endl << "MCD DE DOS NUMEROS\n\n";
    cout << "Digite el primer numero: ";
    cin >> num1;
    cout << "Digite el segundo numero: ";
    cin >> num2;
       
    cout << "El MCD es: " << mcd(num1,num2);           //se llama a la funcion que calcula el MCD
    cout << endl << endl;
}    
