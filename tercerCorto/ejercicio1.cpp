#include <iostream>
float salarioTotal(int hTrab, int hExt);
float salarioReal(int hTrab, int hExt);
using namespace std;

int main ()
{
    int numEmpleados, opcion, hTrab, hExt, empleado;
    cout << "CALCULO DE SALARIOS" << endl << endl;

    cout << "Ingrese la cantidad de empleados que desea calcular el salario: ";
    cin >> numEmpleados;
    cout << endl;

    if (numEmpleados <= 0)                                          //Se solicita el numero de empleados para repetir el programa las veces
    {                                                               //que el usuario quiere calcular el sueldo
        cout << "Ha ingresado un valor no valido" << endl;   
        exit (0);
    }
    else 
    {
        empleado = 1;
        do
        {
        cout << "Ingrese la cantidad de horas trabajadas diarias del empleado #" << empleado <<": ";
        cin >> hTrab;
        cout << "Ingrese la cantidad total de horas extras trabajadas del empleado #" << empleado << ": ";
        cin >> hExt;

        cout << "Su salario total es: $" << salarioTotal(hTrab,hExt) << endl; 
        cout << "Su salario real es: $" << salarioReal(hTrab,hExt) << endl<<endl;

        empleado ++;                                        //se crea acumuladores para llevar el conteo del empleado que el programa esta calculando el sueldo
        numEmpleados--;                                     // se crea una variable que va reduciendo cada vez que termina de calcular los sueldos de un
        } while (numEmpleados != 0);                        // empleado para que cuando llegue a 0 termine el programa
    }    
}

float salarioTotal(int hTrab, int hExt)                    //Funcion que calcula el salario total del empleado
{                                                          // utilizando las horas extras y las trabajadas
    float salario_por_hora, salario_por_hExt,salarioT;           
    salario_por_hora = ((1.75 * hTrab) * 30);              //Se multiplica por 30 para calcular el salario mensual
    salario_por_hExt = 2.50 * hExt;

    salarioT = salario_por_hora + salario_por_hExt;

    return salarioT;
}

float salarioReal(int hTrab, int hExt)                     //Funcion que recibe el salario total para aplicarle los descuentos
{
    float suma, ISSS, AFP, ISR;
    float resultado = salarioTotal(hTrab,hExt); 

    if (resultado > 500.00)                                 //Condicion para aplicar el ISR a sueldos mayores a $500
    {
        ISSS = resultado * 0.04;
        AFP = resultado * 0.0625;
        ISR = resultado * 0.10;
        suma = resultado - ISSS - AFP - ISR;

        return suma;
    }
    else
    {
        ISSS = resultado * 0.04;
        AFP = resultado * 0.0625;
        suma = resultado - ISSS - AFP;

        return suma;
    }
}