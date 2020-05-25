#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
   
    cout << "Ingrese primer numero: ";
    cin >> num1;

    cout << "Ingrese segundo numero: ";
    cin >> num2;

    if (num1%num2 == 0)
    {
        cout << num1 <<" es divisible entre "<< num2 << endl;
    }
    else 
    {
        cout << num1 <<" no es divisible entre " << num2 << endl;
    }

}