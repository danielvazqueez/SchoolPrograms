#include <iostream>
#include <limits.h>
using namespace std;

void menu(){
    int iOpcion;
    cout<<"Menu de opciones \n";
    cout<<"1. Sumatoria 1 + 2 + +...+ n\n";
    cout<<"2. Cuenta Positivos Negativos Ceros de n valores \n";
    cout<<"3. Tabla de Multiplicar del número x \n";
    cout<<"4. Promedio de n numeros \n";
    cout<<"5. Encuentra el Mayor de n numeros \n";
    cout<<"6. Cuenta Categorias Zodiacos \n";
    cout<<"7. Estadisticas de grasa corporal \n";
    cout<<"8. Encuentra el menor de n numeros \n";
    cout<<"9. Sucesion de Fibonacci \n";
    cout<<"0. Salir \n";
    cout<<"Teclea la opcion: ";
}
//Funcion sumatoria
int sumatoria(int iN){
    int Acum=0;
    for(int i=1;i<=iN;i++){
        Acum+=i;
    }
    return Acum;
}

//Funcion cuenta positivos, ceros y negativos
void countPosNegCer(int iN)
{
    //Declarar variables
    int iK,iNum,iPos,iNeg,iCer;
    iK=1;
    iPos=0;
    iNeg=0;
    iCer=0;
    //While para ir introduciendo numeros
    while(iK<=iN)
    {
        cout<<"Introduce un numero= ";
        cin>>iNum;
        if(iNum>0)
            iPos+=1;
        else if(iNum<0)
            iNeg+=1;
        else if(iNum==0)
            iCer+=1;
        else
            cout<<"Numero incorrecto \n";
        iK++;
    }
    cout<<"La cantidad de numeros positivos es "<<iPos<<endl;
    cout<<"La cantidad de numeros negativos es "<<iNeg<<endl;
    cout<<"La cantidad de ceros es "<<iCer<<endl;
}

//Funcion para desplegar tabla de multiplicar
void tablaMultiplicar(int iN)
{
    int iK,iCont;
    iCont=10;
    cout<<"Tabla del "<<iN<<endl;
    while(iCont>0)
    {
        iK=iN*iCont;
        cout<<iN<<"*"<<iCont<<"="<<iK<<endl;
        iCont--;
    }
}

//Funcion para obtener promedio
void promedio(int iN)
{
    int iK,iNum,iSuma;
    double dProm;
    iK=1;
    iSuma=0;
    while(iK<=iN)
    {
        cout<<"Introduce un numero= ";
        cin>>iNum;
        iSuma+=iNum;
        iK++;
    }
    dProm=(double)iSuma/iN;
    cout<<"El promedio de la lista de numeros es "<<dProm<<endl;
}

//Funcion que determinar el valor mayor
void mayor(int iN)
{
    //Declaracion de variables
    int iMax, iK, iV;

    //Verificar el valor de los elementos a procesar
    if(iN > 0)
    {
        //inicializar el valor maximo con el menor valor
        iMax= INT_MIN;

        //Inicializar la vcc
        iK = 1;
        while(iK <= iN)
        {
            //Leer el valor a procesar
            cout<< "Da el #"<<iK<<" :";
            cin>>iV;

            //Ver si es mayor que el actual maximo
            if(iV > iMax)
                iMax = iV;

            //Actualizar el ciclo
            iK = iK + 1;
        }
        //Desplegar resultado
        cout<<"El valor mayor = "<<iMax<<endl;
    }
    else
        cout<<"No se procesaron valores!!\n";
}

 //Menu con signos del zodiaco
void signosZodiaco()
{
        cout << "1. Aries\n";
        cout << "2. Tauro\n";
        cout << "3. Geminis\n";
        cout << "4. Cancer\n";
        cout << "5. Leo\n";
        cout << "6. Virgo\n";
        cout << "7. Libra\n";
        cout << "8. Escorpion\n";
        cout << "9. Sagitario\n";
        cout << "10. Capricornio\n";
        cout << "11. Acuario\n";
        cout << "12. Piscis\n";
        cout<<"Teclea el numero del signo: ";
}
//Esta funcion cuenta las personas que pertenecen a cada signo de Zodiaco
void CuentaZodiacos(int iN)
{
    //Delcaracion de variables
    int iK, iS, iFuego, iTierra, iAire, iAgua;

    //Asignar valores
    iK=1;
    iFuego=0;
    iTierra=0;
    iAire=0;
    iAgua=0;
    //Checar que se procesen datos
    if(iN > 0)
    {
        while(iK <= iN)
        {
        signosZodiaco();
        cin>>iS;
            if(iS == 1 || iS == 5 || iS == 9)
            {
                cout<<"El signo es de Fuego\n";
                iFuego=iFuego+1;
            }
            else if(iS == 2 || iS == 6 || iS == 10)
            {
                cout<<"El signo es de Tierra \n";
                iTierra=iTierra+1;
            }
            else if(iS == 3 || iS == 7 || iS == 11)
            {
                cout<<"El signo es de Aire \n";
                iAire=iAire+1;
            }
            else if(iS == 4 || iS == 8 || iS == 12)
            {
                cout<<"El signo es de Agua \n";
                iAgua=iAgua+1;
            }
            else
            {
                cout<<"ERROR: "<<iS<<" no esta asociado a ningun signo \n";
            }
        }
        //Desplegar el numero de cada categoria
    cout<<"La cantidad de personas en la categoria de fuego son= "<<iFuego<<endl;
    cout<<"La cantidad de personas en la categoria de Tierra son= "<<iTierra<<endl;
    cout<<"La cantidad de personas en la categoria de Aire son= "<<iAire<<endl;
    cout<<"La cantidad de personas en la categoria de Agua son= "<<iAgua<<endl;
    }
    else
        cout<<"No se procesaron datos!! \n";
}

//Esta funcion calcula los niveles de grasa
void NivelGrasa(int iN)
{
    //Declaracion de variables
    int iK, iSexo, iEdad, iCm;
    double dIMC;

    //Asignar valores
    iK=1;
    if(iN>0)
    {
        while(iK <= iN)
        {
            cout<<"1. Mujer \n 2.Hombre \n";
            cout<<"Teclea el sexo del paciente con el correspondiente numero= ";
            cin>>iSexo;
            cout<<"Teclea la edad del paciente= ";
            cin>>iEdad;
            cout<<"Teclea la cintura de la persona con cm= ";
            cin>>iCm;

                if(iSexo == 1)
                {
                    dIMC = (0.567*iCm)+(0.101*iEdad)-31.8;
                    if(iEdad >= 20 && iEdad <= 39)
                    {
                        if(dIMC < 21)
                        {
                            cout<<"Tu IMC es "<<dIMC<<" que recae en la categoria de bajo. \n";
                        }
                        else if(dIMC >= 21 && dIMC < 33)
                        {
                            cout<<"Tu IMC es "<<dIMC<<" que recae en la categoria de normal. \n";
                        }
                        else if(dIMC >= 33 && dIMC < 39)
                        {
                            cout<<"Tu IMC es "<<dIMC<<" que recae en la categoria de alto. \n";
                        }
                        else if(dIMC >=39)
                        {
                            cout<<"Tu IMC es "<<dIMC<<" que recae en la categoria de muy alto. \n";
                        }
                    }
                    else
                    {
                        cout<<"Tu IMC es " <<dIMC<<endl;
                    }
                }
                else if(iSexo == 2)
                {
                    dIMC = (0.439*iCm)+(0.221*iEdad)-9.4;
                    if(iEdad >= 20 && iEdad <= 39)
                    {
                        if(dIMC < 8)
                        {
                            cout<<"Tu IMC es "<<dIMC<<" que recae en la categoria de bajo. \n";
                        }
                        else if(dIMC >= 8 && dIMC < 20)
                        {
                            cout<<"Tu IMC es "<<dIMC<<" que recae en la categoria de normal. \n";
                        }
                        else if(dIMC >= 20 && dIMC < 25)
                        {
                            cout<<"Tu IMC es "<<dIMC<<" que recae en la categoria de alto. \n";
                        }
                        else if(dIMC >=25)
                        {
                            cout<<"Tu IMC es "<<dIMC<<" que recae en la categoria de muy alto. \n";
                        }
                    }
                    else
                    {
                        cout<<"Tu IMC es " <<dIMC<<endl;
                    }
                }
                else
                {
                    cout<<"El numero "<<iSexo<<" no esta asociado a ningun sexo \n";
                }

        }
    }
    else
        cout<<"No se procesaron datos \n";
}

//Funcion que busca el menor numero
void menor(int iN)
{
    //Declaracion de variables
    int iMin,iK,iNum;

    //Asignar valores
    iK=1;
    iMin=INT_MAX;

    //Checa si se procesan datos
    if(iN > 0)
    {
        while(iK<=iN)
        {
            cout<<"Ingresa el  #"<< iK <<" :";
            cin>>iNum;

            //Asignar valor minimo
            if(iNum < iMin)
            {
                iMin=iNum;
            }
            iK++;
        }
        cout<<"El valor menor de los numeros que ingresas es = "<<iMin<<endl;
    }
    else
    {
        cout<<"No se procesaron datos \n";
    }
}

//Funcion que hace la funcion de fibonacci
void Fibonacci(int iN)
{
    //Declaracion de variables
    int iK,iAux, iF1, iF2;

    //Asignar valores
    iK=1;
    iAux=0;
    iF1=1;
    iF2=0;

    //Checar si se procesan datos
    if(iN > 0)
    {
        while(iK<=iN)
        {
            iAux=iF1+iF2;
            iF1=iF2;
            iF2=iAux;
            cout<<iF1<<endl;
            iK++;
        }
    }
    else
    {
        cout<<"No se despliega nignun valor \n";
    }

}
int main()
{
    //Declaracion de variables
    int iOpcion,iN;

    //Desplegar menu
    menu();

    //Leer dato de entrada
    cin>>iOpcion;

    //Ciclo que siga permitiendo al usuario introducir datos
    while(iOpcion != 0)
    {
        //switch que manda a la funcion correspondiente
        switch(iOpcion){

        case 1: //Sumatoria
            int iSumatoria;
            //Leer dato de entrada
            cout<<"Teclea hasta que numero deseas sumar= ";
            cin>>iN;
            //Llamar a la funcion
            iSumatoria=sumatoria(iN);
            //Desplegar resultado
            cout<<"Si n es "<<iN<<", la sumatorria da como resultado "<<iSumatoria<<endl;
            break;
        case 2: //Contar numeros
            cout<<"Cuantos numeros positivos, negativos o ceros introducira el usuario= ";
            //Leer dato de entrada
            cin>>iN;
            //Llamar a la funcion void
            countPosNegCer(iN);
            break;
        case 3: //Tabla de multiplicar
            cout<<"Introducir el numero de la tabla que se desea obtener= ";
            cin>>iN;
            tablaMultiplicar(iN);
            break;
        case 4: //Promedio de n Numeros
            cout<<"Introducir la cantidad de valores que se introduciran= ";
            cin>>iN;
            promedio(iN);
            break;
        case 5: //Mayor
            cout<<"Introducir la cantidad de valores que se introduciran= ";
            cin>>iN;
            mayor(iN);
            break;
        case 6: //Zodiaco
            cout<<"Introducir la cantidad de Zodias que se ingreseran = ";
            cin>>iN;
            CuentaZodiacos(iN);
            break;
        case 7: //Grasa Corporal
            cout<<"Introducir el numero de pacientes= ";
            cin>>iN;
            NivelGrasa(iN);
            break;
        case 8: //Menor
            cout<<"Introducir la cantidad de valores que se introduciran= ";
            cin>>iN;
            menor(iN);
            break;
        case 9: //Sucesion fibonacci
            cout<<"Introducir la cantidad de numeros que quieres que se desplieguen de la serie de fibonacci= ";
            cin>>iN;
            Fibonacci(iN);
            break;
        default:
            cout<<"Opcion incorrecta!!\n";
            break;
        }
        menu();
        cin>>iOpcion;
    }
     cout<<"Gracias por usar el programa \n";
    return 0;
}
