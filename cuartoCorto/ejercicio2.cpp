#include <iostream>
using namespace std;

float calcularMedia(float arregloAlumnos[])     //funcion que calcula el promedio de estaturas de los alumnos
{
    float acum=0.0;
    for (int i=0;i<25;i++)
    {
        acum+=arregloAlumnos[i];
    }
    float promedio = acum/25;
    return promedio;
}

int arribaMedia(float arregloAlumnos[]) //funcion que contabiliza el numero de alumnos arriba de la media
{
    int arribaM=0;

    for (int i=0;i<25;i++)
    {
        if (arregloAlumnos[i]>calcularMedia(arregloAlumnos))
        {
            arribaM++;
        }
    }
    return arribaM;
}

int abajoMedia(float arregloAlumnos[])  //funcion que contabiliza el numero de alumnos abajo de la media
{
    int abajoM=0;

    for (int i=0;i<25;i++)
    {
        if (arregloAlumnos[i]<calcularMedia(arregloAlumnos))
        {
            abajoM++;
        }
    }
    return abajoM;
}


int main ()
{
    float arregloAlumnos[25];

    cout << endl;
    for(int i=0;i<25;i++) //se guardan las estaturas en un arreglo
    {
        cout << "Ingrese la estatura del alumno "<<i+1<<" : ";
        cin>>arregloAlumnos[i];
    }

    cout << endl << "La altura promedio es: " << calcularMedia(arregloAlumnos) << endl; 
    cout << endl << "La cantidad de alumnos que estan arriba de la media son: " << arribaMedia(arregloAlumnos) << endl;
    cout << endl << "La cantidad de alumnos que estan abajo de la media son: " << abajoMedia(arregloAlumnos) << endl<<endl;
}


