#include <iostream>
#include <math.h>
using namespace std;

//función para calcular el area del circulo
double areaCirculo(double dDiametro)
{
    return pow(dDiametro,2)/4*M_PI;
}
//función para calcular el area del rombo
double areaRombo(double dLongitudDiagonal1, double dLongitudDiagonal2)
{
    return dLongitudDiagonal1*dLongitudDiagonal2/2;
}
int main()
{
    //Declarar las variables
    double dDiametro,dAreaCirculo,dLongitudDiagonal1, dLongitudDiagonal2,dAreaRombo;

    //Leer los valores de entrada
    cout<<"Introduce el diametro del circulo= "<<endl;
    cin>>dDiametro;
    cout<<"Introduce la longitud de los dos lados diagonales= "<<endl;
    cin>>dLongitudDiagonal1>>dLongitudDiagonal2;

    //Mandar a llamar las funciones
    dAreaCirculo=areaCirculo(dDiametro);
    dAreaRombo=areaRombo(dLongitudDiagonal1,dLongitudDiagonal2);

    //Desplegar los resultados
    cout<<"El area del circulo es= "<<dAreaCirculo<<endl;
    cout<<"El area del rombo es= "<<dAreaRombo<<endl;
    return 0;
}
