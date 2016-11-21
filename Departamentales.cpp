#include <iostream>

using namespace std;

int main()
{
    //Declarar variables
    int iColor;
    double dPrecio, dDescuento;

    //Leer datos de entrada
    cout<<"Teclea el precio= ";
    cin>>dPrecio;
    cout<<"1-Azul 2-Blanco 3-Rojo - Teclea el # del color= ";
    cin>>iColor;

    //Determinar descuento
    dDescuento = 0;

    if (iColor == 1){
        dDescuento=dPrecio*0.50;
    }
    else if (iColor == 2){
        dDescuento=dPrecio*0.60;
    }
    else if (iColor == 3){
        dDescuento=dPrecio*0.70;
    }
    dPrecio=dPrecio-dDescuento;

    cout<<"Precio final del producto $"<<dPrecio<<endl;
    cout<<"Usted ahorro $"<<dDescuento<<endl;
    return 0;
}
