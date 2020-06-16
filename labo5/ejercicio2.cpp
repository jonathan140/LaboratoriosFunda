#include <iostream>
#include <ctime>
void un_segundo_despues(int *, int *, int *);
using namespace std;

int main ()
{
    int hora,minuto,segundo;
    time_t t = time (0);                            //funcion para obtener la hora actual del sistema en formato 24 horas
    tm *horaActual = localtime(&t);

    cout << endl << "LEER LA HORA EN FORMATO 24 HORAS" << endl << endl;
    cout << "La hora actual es: ";
    cout << horaActual->tm_hour << ":";
    cout << horaActual -> tm_min << ":";
    cout << horaActual -> tm_sec << endl;

    hora = horaActual -> tm_hour;                  //se muestra la hora del sistema antes de ingresarla a la funcion
    minuto = horaActual -> tm_min;
    segundo = horaActual -> tm_sec;

    un_segundo_despues(&hora,&minuto,&segundo);    //funcion que calcula la hora del sistema un segundo despues

    cout << "Despues de un segundo es: ";          //despliegue de la hora un segundo despues de la hora del sistema 
    cout << hora << ':';                           //despues de ser evaluada en la funcion
    cout << minuto << ':';
    cout << segundo << endl<<endl;
}

void un_segundo_despues (int *hora,int *minuto,int *segundo) //funcion que recibe la hora actual y evaluarla
{
    if (*segundo <= 58 && *minuto < 59  && *hora < 23 )      //cuando la hora se encuentre en cualquier cambio sin necesidad de reiniciar los valores a 0   
    {                                                        //ejemplo: 12:25:30
        *segundo+=1;       
    }
    else if (*segundo == 59 && *minuto<59 && *hora < 23 )     //cuando la hora se encuente en cualquier cambio de minuto
    {                                                         //ejemplo: 12:25:59  
        *segundo = 0;
        *minuto+=1;
    }
    else if (*segundo == 59 && *minuto == 59 && *hora < 23)   //cuando la hora se encuentre en cualquier cambio de hora
    {                                                         //ejemplo: 12:59:59
        *segundo = 0;
        *minuto = 0;
        *hora+=1;
    }
    else                                                     //cuando la hora se encuentre en 23:59:59
    {
        *segundo = 0;
        *minuto = 0;
        *hora = 0;
    }
}