#include "iostream"
bool bisiesto(int year);
using namespace std;

int main()
{
    int year;
    bool respuesta;

    printf ("A%cO BISIESTO",165);
    cout <<endl << endl;
    printf("Ingrese el a%co a evaluar: ",164);
    cin >> year;

    if(bisiesto(year) == true)                        //al recibir la respuesta de la funcion, se evalua si es true y 
    {                                                 //despliega el mensaje que es un año bisiesto
        printf ("El a%co ingresado es bisiesto",164);
        cout << endl;
    }
    else                                             //si la respuesta de la funcion es false despliega el mensaje 
    {                                                //que no es un año bisiesto
    printf("El a%co ingresado no es bisiesto",164);  
    cout << endl;    
    }
}

bool bisiesto(int year)             //funcion que evalua el año digitado por el usuario y retornar 
{                                   //un valor TRUE si es bisiesto y False cuando no sea bisiesto.
    bool respuesta;
    if(year % 400 == 0)
    {
        respuesta = true;
        return respuesta;
    }
    else if(year % 4 == 0 && year % 100 != 0 )
    {
        respuesta = true;
        return respuesta;
    }
    else 
    {
        respuesta = false;
        return respuesta;
    }
}
