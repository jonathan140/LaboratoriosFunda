#include <iostream>
using namespace std;

int leerArreglo1(int arreglo1[],int n)
{
    cout << endl;
    for (int i=0; i<n;i++)
    {
        cout << "Ingrese el numero en la posicion "<<i<<" del arreglo 1: ";
        cin>>arreglo1[i];
    }
    return arreglo1[n];
}
int leerArreglo2(int arreglo2[],int n)
{
    cout <<endl;
    for (int i=0; i<n;i++)
    {
        cout << "Ingrese el numero en la posicion "<<i<<" del arreglo 2: ";
        cin>>arreglo2[i];
    }
    return arreglo2[n];
}
int sumaArreglos(int arreglo1[], int arreglo2[],int arregloSuma[], int n)
{
    for (int i=0;i<n;i++)   //se suman los arreglos y se almacena en un tercer arreglo
    {
        arregloSuma[i]=arreglo1[i]+arreglo2[i];
    }
    return arregloSuma[n];
}
void mostrarResultado(int arregloSuma[],int n)  //funcion que imprime el arreglo que contiene la suma de los otros arreglos
{
    cout <<endl;
    for (int i=0;i<n;i++)
    {
        cout << "La suma de la posicion "<<i<<" del arreglo1 y el arreglo2 es: "<<arregloSuma[i]<<endl;
    }
}

int main ()
{
    int n;          
    cout << endl << "Ingrese el numero de datos que formaran el arreglo: ";
    cin >> n;

    int arreglo1 [n];       //se declaran los arreglos con la cantidad de elemntos elegidos por el usuario
    int arreglo2 [n];
    int arregloSuma[n];

    leerArreglo1(arreglo1,n);   //se llama a la funcion que lee el arreglo 1
    leerArreglo2(arreglo2,n);   //se llama a la funcion que lee el arreglo 2
    sumaArreglos(arreglo1,arreglo2,arregloSuma,n);       //se llama a la funcion que suma los arreglos
    mostrarResultado(arregloSuma,n);        //se llama a la funcion que despliega el arreglo resultante de la suma
}