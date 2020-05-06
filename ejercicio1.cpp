#include <iostream>
using namespace std;
int main()
{
    int dolares;
    float euros = 1.33;
    
    float conversion;
    
    conversion = dolares * euros;

    cout<<"Ingrese la cantidad de dolares a convertir ";
    cin>>dolares;
    conversion = dolares * euros;

    cout<<conversion<<endl;

    return 0;
}