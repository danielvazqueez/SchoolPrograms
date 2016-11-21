#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Declaración de variables
    int iPeso;
    double dEstatura, dIMC;
    cout<<"Teclea tu peso(kg): ";
    cin>>iPeso;
    cout<<"Teclea tu estatura (m): ";
    cin>>dEstatura;

    //Calcular el IMC
    dIMC = iPeso/pow(dEstatura,2);

    //Desplegar los resultados
    cout<<"Tu imc: "<< dIMC << endl;
    cout<<"Checate,\n midete,\n muevete,\n mas vale prevenir!!\n";
    return 0;
}
