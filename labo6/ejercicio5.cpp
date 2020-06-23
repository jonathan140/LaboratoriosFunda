#include <iostream>
using namespace std;
void imprimir (int arreglo[]);

int main()
{
    int numero = 1;
    int arreglo [100];
    int acum = 0;

    while (acum <=99)     
    {
        if (numero%2 != 0)
        {
        arreglo[acum]=numero;
        numero+=1;
        acum+=1; 
        }    
        else 
        {
            numero+=1;
        }   
    }
    imprimir(arreglo);
}

void imprimir (int arreglo[])
{
    cout << endl <<"Se van a imprimir de forma descendente los primeros 100 numeros impares: " << endl;

    for (int i = 99; i>=0; i--)
    {
        cout << arreglo[i] << "   ";
    }
    cout <<endl;
}