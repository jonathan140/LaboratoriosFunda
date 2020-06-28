#include<iostream>
#include <string>
using namespace std;

void clave(char codigo[],int letras)            //funcion que codifica una letra segun la clave murcielago
{
    char clave[10]={'m','u','r','c','i','e','l','a','g','o'};
    char numero[10]={'0','1','2','3','4','5','6','7','8','9'};
    for (int i=0;i<letras;i++)         //se crea una iteracion para que recorra el contenido de la palabra letra por letra
    {
       for(int j=0;j<10;j++)           //se crea una segunda iteracion para que recorra cada letras del array que contiene la palabra murcielago
       {
           if (codigo[i]==clave[j])     //se crea una condicion para que si la letra actual ingresada por el usuario es la misma alguna de las
           {                            //letras de la palabra murcielago cambie el valor de la letra por el numero respectivo
               codigo[i]=numero[j];
           }
       }
    }
}

int main()
{
    char codigo[50];
    string palabra;
    int letras;

    cout <<endl<< "Ingrese palabra a codificar: ";
    getline(cin,palabra);
    letras = palabra.length();

    for (int i= 0;i<letras;i++)  //iteracion para guardar la palabra en un array
    {
        codigo[i]=palabra.at(i);
    }
    clave(codigo,letras);       //se llama a la funcion

    cout<<endl<<"Su palabra codificada es: ";
    for (int i=0;i<letras;i++)
    {                            //se crea una iteracion para que despliegue la palabra ya codificada
        cout <<codigo[i];
    }
    cout <<endl<<endl;
}
