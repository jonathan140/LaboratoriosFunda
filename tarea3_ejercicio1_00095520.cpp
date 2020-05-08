#include <iostream>
using namespace std;
int main()
{
  int num1,num2,num3; 
  float promedio;
  
  cout<<"Ingresa primer numero: ";
  cin>>num1;
  cout<<"Ingresa segundo numero: ";
  cin>>num2;
  cout<<"Ingresa tercer numero: ";
  cin>>num3;
  
  promedio=(num1+num2+num3)/3.0;

  cout<<"El promedio es: "<<promedio<<endl;
  return 0;

}