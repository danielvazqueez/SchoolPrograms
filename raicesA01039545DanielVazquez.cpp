#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Declaración de variables
    int iA, iB, iC;
    double dX1, dX2, dD;
    //Leer los datos de entrada
    cout<<"Teclea el valor del coeficiente a: ";
    cin>>iA;
    cout<<"Teclea el valor del coeficiente b: ";
    cin>>iB;
    cout<<"Teclea el valor del coeficiente c: ";
    cin>>iC;
   //Realizar los cálculos usando la fórmula general
    dD=iB*iB-(4*iA*iC);
    dX1=(-iB+sqrt(dD))/(2*iA);
    dX2=(-iB-sqrt(dD))/(2*iA);
    //Desplegar los resultado
    cout<<"X1= "<< dX1 <<endl;
    cout<<"X2= "<< dX2 <<endl;
    return 0;
}
