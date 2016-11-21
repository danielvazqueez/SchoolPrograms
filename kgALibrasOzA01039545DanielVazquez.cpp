#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{//Declarar variables
int iKg, iLb;
string sNombre;
double dOz;

cout<<"Teclea tu peso= ";
cin>>iKg;
getchar();
cout<<"Teclea tu nombre= ";
getline(cin,sNombre);

iLb=(int)(iKg*2.20462262);
dOz=(iKg*2.20462262-iLb)*16;
    //Desplegar los resultados
    cout<<sNombre<<" pesa "<<iKg<<"Kg equivalentes a "<< iLb<< "lb. con "<< dOz<< "Oz."<<endl;
    return 0;
}
