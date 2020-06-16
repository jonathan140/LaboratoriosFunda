#include "iostream"
bool bisiesto(int year);
int diaDespues(int day, int month, int year);
int mes31dias(int month,int day, int year);
int mes30dias(int month, int day, int year);
using namespace std;

int main()
{
    int day, month, year;
    
    cout << endl;
    printf ("CALCULO DEL DIA DESPUES\n\n");

    cout << "Ingrese el numero del dia: ";
    cin >> day;
    cout << "Ingrese el mes: ";
    cin >> month;
    printf("Ingrese el a%co: ",164);
    cin >> year;

    diaDespues(day, month, year);                   //funcion que evalua el dia despues en base a los datos ingresados
}

int diaDespues(int day, int month, int year)
{
    if (bisiesto(year)==true)                       //se utiliza una funcion para evaluar si el año es bisiesto
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            mes31dias(month,day,year);          //se llama a la funcion que calcula la fecha al dia siguiente para mes de 31 dias
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            mes30dias(month,day,year);          //se llama a la funcion que calcula la fecha al dia siguiente para mes de 30 dias
            break;
        
        case 2:                                 //caso especial para calcular la fecha al dia siguiente en el mes de febrero y sea un año bisiesto
            if (day>=1 && day<=28)
            {
                day++;
                cout << "La fecha al dia siguiente es: " << day << "/"<< month << "/"<< year << endl;
            }
            else if (day == 29)
            {
                day = 1;
                month++;
                cout << "La fecha es: " << day << "/"<< month << "/"<< year << endl;
            }
            else 
            {
                cout << "ERROR, ingrese un valor de dia correcto" << endl;
            }
            break;

        default:
            cout << "No se ha ingresado un mes valido." << endl;
            break;
        }
    }
    else                                        //en caso que el año no sea bisiesto
    {
       switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            mes31dias(month,day,year);          //se llama a la funcion que calcula la fecha del dia siguiente para los meses de 31 dias
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            mes30dias(month,day,year);           //se llama a la funcion que calcula la fecha del dia siguiente para los meses de 30 dias
            break;
        
        case 2:                                  //caso especial cuando se calcule la fecha del dia siguiente para febrero y no se año bisiesto
            if (day>=1 && day<=27)
            {
                day++;
                cout << "La fecha al dia siguiente es: " << day << "/"<< month << "/"<< year << endl;
            }
            else if (day == 28)
            {
                day = 1;
                month++;
                cout << "La fecha al dia siguiente es: " << day << "/"<< month << "/"<< year << endl;
            }
            else 
            {
                cout << "ERROR, ingrese un valor de dia correcto" << endl;
            }
            break;
        default:
            cout << "No se ha ingresado un mes valido." << endl;
            break;
        } 
    }
}

int mes31dias (int month, int day, int year)                //funcion para calcular la fecha al dia siguiente de los meses de 31 dias
{
    if (day>=1 && day <= 30)
        {
            day++;
            cout << "La fecha al dia siguiente es: " << day << "/"<< month << "/"<< year << endl;
        }
    else if (month==12 && day == 31)
        {
            day = 1;
            month = 1;
            year++;
            cout << "La fecha al dia siguiente es: " << day << "/"<< month << "/"<< year << endl;
        }
    else if (day == 31 && month != 2,4,6,9,11,12)
        {
            day = 1;
            month++;
            cout << "La fecha al dia siguiente es: " << day << "/"<< month << "/"<< year << endl;
        }
    else 
        {
            cout << "ERROR, ingrese un valor de dia correcto" << endl;
        }
}

int mes30dias (int month, int day, int year)                    //funcion que calcula la fecha del dia siguiente para los meses de 30 dias
{
    if (day>=1 && day <= 29)
    {
        day++;
        cout << "La fecha al dia siguiente es: " << day << "/"<< month << "/"<< year << endl;
    }
    
    else if (day == 30 && month != 1,2,3,5,7,8,10,12)
    {
        day = 1;
        month++;
        cout << "La fecha al dia siguiente es: " << day << "/"<< month << "/"<< year << endl;
    }
    else 
    {
        cout << "ERROR, ingrese un valor de dia correcto" << endl;
    }
}

bool bisiesto(int year)                 //funcion que calcula si el año ingresado por el usuario es bisiesto o no
{    
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