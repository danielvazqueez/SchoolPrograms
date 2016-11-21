#include <iostream>

using namespace std;

void Estacion(int iDia, int iMes){
//Determinar si es Primavera o verano
    if ((iMes == 3 && (iDia >= 21 && iDia <= 31)) ||
        (iMes == 4 && (iDia >= 1 && iDia <= 30))  ||
        (iMes == 5 && (iDia >= 1 && iDia <= 31))  ||
        (iMes == 6 && (iDia >= 1 && iDia < 21)) ){
            cout<<"La fecha corresponde a Primavera"<<endl;
        }
    else if ( (iMes == 6 && (iDia >= 21 && iDia <= 30)) ||
             ((iMes == 7 || iMes == 8) && (iDia >= 1 && iDia <= 31)) ||
              (iMes == 9 && (iDia >= 1 && iDia < 21))){
                cout<<"La fecha corresponde a Verano"<<endl;
              }
    else if ((iMes == 9 && (iDia >= 21 && iDia <= 30)) ||
        (iMes ==10  && (iDia >= 1 && iDia <= 31))  ||
        (iMes == 11 && (iDia >= 1 && iDia <= 30))  ||
        (iMes == 12 && (iDia >= 1 && iDia < 21)) ){
            cout<<"La fecha corresponde a Otoño"<<endl;
        }
    else if ((iMes == 12 && (iDia >= 21 && iDia <= 31)) ||
        (iMes ==1  && (iDia >= 1 && iDia <= 31))  ||
        (iMes == 2 && (iDia >= 1 && iDia <= 28))  ||
        (iMes == 3 && (iDia >= 1 && iDia < 21)) ){
            cout<<"La fecha corresponde a Invierno"<<endl;
        }
    else {
        cout<<"Error en fecha!"<<endl;
    }

}
int main()
{
    //Declarar variables
    int iMes, iDia;

    //Leer datos de entrada
    cout<<"Teclea una fecha para saber \n ";
    cout<<"la estacion en el Hemisferio Nte.  \n";
    cout<<"Teclea el dia: ";
    cin>>iDia;
    cout<<"Teclea el mes: ";
    cin>>iMes;

    Estacion(iDia,iMes);

    return 0;
}
