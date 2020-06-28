#include <iostream>
using namespace std;

void leerMatriz(float matriz[][5], int a)
{
    for (int i=0;i<a;i++)   //iteracion para guardar las 5 notas de cada alumno por orden
    {
        cout <<endl;
        for (int j = 0;j<5;j++) //iteracion para guardar las notas
        {
            cout <<"Digite la nota "<<j+1<<" del estudiante "<<i+1<<" : ";
            cin>>matriz[i][j];
        }
    }
}
void calcuNota(float matriz[][5],int a)
{
    for (int i=0;i<a;i++)
    {
        cout <<endl;
        float acum = 0.0;   //acumulador para guardar los resultados de cada alumno que luego de mostrarlo en pantalla se inicia otra vez en 0.0
        for (int j = 0;j<5;j++)
        {
            acum += matriz[i][j] * 0.2;     //iteracion para calcular la nota segun el porcentaje que tenga
        }
        if(acum>=6) //condicion para despregar si el alumno a aprobado
        {
            cout << "la nota final del alumno "<<i+1<<" es: "<<acum<<" y ha aprobado."<<endl;
        }
        else //condicion para desplegar si el alumno no a aprobado
        {
            cout << "la nota final del alumno "<<i+1<<" es: "<<acum<<" y ha reprobado."<<endl;
        }
    }
}

int main()
{   
    int a; //se guarda en una variable la cantidad de alumnos acalcular nota

    cout << endl << "Digite la cantidad de alumnos a calcular la nota final: ";
    cin >> a; 
    float matriz [a][5];

    leerMatriz(matriz,a);  //se llama a la funcion que llene la matriz con cada nota de los alumnos
    calcuNota(matriz,a);    //se llama a la funcion que calcula la nota de cada alumno y diga si ha aprobado o reprobado
    cout <<endl;
}