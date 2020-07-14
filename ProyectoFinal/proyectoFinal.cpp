#include <iostream>
#include <iomanip>
using namespace std;

const int longCad = 20;
struct costoPorArticulo
{
char nombreArticul[longCad+1];
int cantidad;
float precio;
float costoPorArticulo;
};

void datosProducto(costoPorArticulo *prod, int n)           //funcion que permite la entrada de datos de cada articulo y se guarda en el arreglo
{    
    for (int i = 0;i<n;i++)
    {
    cout <<endl<<endl<< "Ingresa el nombre del producto " <<i+1<<": ";
    cin >> prod[i].nombreArticul;
    cout <<endl<< "Ingrese la cantidad comprada del producto " <<i+1<<": ";
    cin >> prod[i].cantidad;
    cout <<endl<< "Ingrese el precio unitario del producto "<<i+1<<": $";
    cin >> prod[i].precio;
    }  
}
void Costo_por_Arti(costoPorArticulo *prod,int n)          //funcion que calcula el costo por articulo y guarda este valor en el arreglo
{
    for (int i=0;i<n;i++)
    {
        prod[i].costoPorArticulo = prod[i].cantidad * prod[i].precio;
    }
}

void Factura(costoPorArticulo *prod, int n)         //funcion que despliega los resultados guardados en el arreglo, estos son los 4 datos de la estructura
{
    cout <<endl<<"------------FACTURA------------"<<endl;
    for (int i = 0;i<n;i++)
    {
        cout <<endl<<"Producto: "<<prod[i].nombreArticul<<endl;
        cout << "Cantidad comprada: " << prod[i].cantidad<<endl;
        cout << "Precio unitario: $"<<fixed<<setprecision(2)<< prod[i].precio<<endl;
        cout << "Costo total del producto: $"<<fixed<<setprecision(2)<<prod[i].costoPorArticulo<<endl;
    }
}

float costoTotal(costoPorArticulo *prod, int n)     //funcion que calcula el costo total de la compra realizada sumando el costo de cada uno de los articulos
{
    float total_de_compra = 0.0;
    for (int i = 0; i<n;i++)
    {
        total_de_compra += prod[i].costoPorArticulo;
    }
    return total_de_compra;
}

int main ()
{
    int n;
    cout <<endl<< "Ingresa el numero de articulos a comprar: ";        //se pude al usuario el numero de productos, que representa el tamaño del arreglo
    cin >> n;                                                        
    costoPorArticulo *producto = new costoPorArticulo[n];   //se crea un puntero que almacenara los datos de cada campo 

    datosProducto(producto,n);      //se llama la funcion para ingresar los datos en el arreglo
    Costo_por_Arti(producto,n);     //se llama la funcion para calcular el costo por articulo
    Factura(producto,n);    //se llama la funcion que muestra el contenido del arreglo

    cout << endl << "El costo total de la compra fue de: $"<<fixed<<setprecision(2)<<costoTotal(producto,n)<<endl<<endl;
}