#include <iostream>
int resultado(int numMagico, int numUsuario);
using namespace std;


int main ()
{
    int numMagico = 28;
    int numUsuario;

    cout << "JUEGO DEL NUMERO MAGICO"<<endl<<endl;

    cout <<"Adivina el numero que se encuentra guardado que se encuentra entre el 1 y el 100"<<endl<<endl;

    cout << "Ingresa el numero que creas que es el correcto, o ingresa 0 para finalizar: ";
    cin >> numUsuario;

    resultado (numMagico, numUsuario);

}

int resultado (int numMagico, int numUsuario)               //funcion que evalua el numero ingresado por el usuario con el almacenado
{
    int contador = 5;                //se crea una variable contador para llevar control del numero de intento que lleva el usuario para encontrar el numero

    do
    {   
        if (numUsuario==numMagico)      //condicion para terminar el programa cuando el usuario digite el mismo numero que el guardado.
        {
            contador = 0;
            cout << "FELICIDADES, ENCONTRASTE EL NUMERO, HAS GANADO"<<endl<<endl;
        }
        else if (numUsuario==0)                                    //condicion para que el usuario pueda salir del programa en cualquier momento de su ejecucion
        {
            return 0;
        } 
        else if (contador == 1 && numUsuario != 28)                 
        {
        contador = 0;
        cout << "LO SIENTO SE TE HAN ACABADO LOS INTENTOS, HAS PERDIDO"<<endl<<endl;
        } 
        else if (numUsuario>=1 && numUsuario<= 27)               //se realizan condiciones para evaluar si el numero digitado es mayor o menor al almacenado
        {
            contador--;
            cout << "El numero es menor al numero magico"<<endl;
            cout << "Te quedan "<<contador << " intentos"<<endl<<endl;
            cout <<"Ingresa otro numero que creas correcto, o ingresa 0 para finalizar ";
            cin >> numUsuario;
        }
        else if (numUsuario>=29 && numUsuario <=100 )
        {
            contador --;
            cout << "El numero es mayor al numero magico"<<endl;
            cout << "Te quedan "<<contador<< " intentos"<<endl<<endl;
            cout << "Ingresa otro numero que creas correcto, o ingresa 0 para finalizar: ";
            cin >> numUsuario;
        }       
        else                                        //condicion en caso que el usuario digite un numero que no es valido en el rango de numeros 1-100
        {                                           // y pierda un intento al hacerlo
            contador --;
            cout << "Has digitado un numero que no es valido"<<endl;
            cout << "Te quedan "<<contador<< " intentos"<<endl<<endl;
            cout << "Ingresa otro numero que creas correcto, o ingresa 0 para finalizar: ";
            cin >> numUsuario;
        }
    } while (contador != 0);                       //la funcion que evalua los numeros se mantiene hasta que el usuario se quede sin intentos                                                 //
}                                                  //o digite 0 para salir del programa