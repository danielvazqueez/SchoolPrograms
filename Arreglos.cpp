//********************************************************************
// Arreglos Pr∑ctica de Clase usando la metodologÃa **Peer Learning**
// is a form of cooperative learning that enhances the value of student-student
// interaction and results in various advantageous learning outcomes.
//*********************************************************************
// Created by Ma. Guadalupe Roque on Octubre 2016.
// Copyright (c). All rights reserved.
//        g++ Arreglos.cpp -o salida

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <limits.h>
#include <stdio.h>

using namespace std;

//***********************************
//Despliega el menu de opciones y
//lee la opcion del teclado
int menu( )
{
    //Declaraci€n de varialbes
    int iOp;

    //Desplegar menu y leer opcion
    cout << "Arreglos de enteros" <<
    "\n1. Inicializa1" <<
    "\n2. Inicializa2" <<
    "\n3. Inicializa3" <<
    "\n4. Inicializa4" <<
    "\n5. Inicializa5" <<
    "\n6. El mayor" <<
    "\n7. El menor"<<
    "\n8. Suma"<<
    "\n9. Promedio"<<
    "\n10. Busca un valor"<<
    "\n11. Busca un valor desde una posici€n"<<
    "\n12. Busca posici€n"<<
    "\n13. Cuenta repeticiones de un valor"<<
    "\n14. Copia"<<
    "\n15. Inversa"<<
    "\n0. Salir"<<
    "\nTeclea la opcion:";
    cin>>iOp;

    //Retornar opcion
    return iOp;
}
//Funcion que despliega el contenido del arreglo
void despliega(int iArrA[], int iS)
{
    for(int iR = 0; iR < iS; iR = iR + 1)
        cout << "Arreglo [" << iR << "]=" << iArrA[iR] << endl;
}

//Funcion que despliege el contenido del arreglo de strings
//Funcion sobrecargada
void despliega(string sArrA[], int iS)
{
    for(int iR = 0; iR < iS; iR = iR + 1)
        cout << "Arreglo [" << iR << "]=" << sArrA[iR] << endl;
}
//***********************************
//inicializa1
//Dise“a una funci€n llamada inicializa1, con
// valores aleatorios
//a[0] = 1000
//a[1] = -999
//a[2] = 4
//a[3] = -600
//:
//***********************************
void inicializa1(int iArrA[], int iS)
{
    srand(time(NULL));

    for(int iR = 0; iR < iS; iR++)
        iArrA[iR] = rand() % 2001 - 1000;

}
//***********************************
//inicializa2
//Dise“a una funci€n llamada inicializa2,
//que inicializa el arreglo recibido como par∑metro
//con la siguiente serie 0, 2, 4, 6,.....
//a[0] = 0
//a[1] = 2
//a[2] = 4
//a[3] = 6
//***********************************
void inicializa2(int iArrA[], int iS)
{
	for(int iR = 0; iR < iS; iR++)
        iArrA[iR] = iR * 2;
}
//***********************************
//inicializa3
//Dise“a una funci€n llamada inicializa3, que inicializa
//el arreglo de enteros recibido como par∑metro con la
//siguiente serie de valores, que consideran el tama“o del arreglo:
//si el arreglo es de tama“o 10,
//el arreglo deber∑ quedar como sigue:
//9, 8, 7, 6,5, 4, 3, 2, 1, 0.
//Si el tama“o es 4:
//a[0] = 3
//a[1] = 2
//a[2] = 1
//a[3] = 0
//***********************************
void inicializa3(int iArrA[], int iS)
{
    for(int iR = 0, iValor = iS - 1; iR < iS; iR++)
    	iArrA[iR] = iValor--;
}
//inicializa4
//Dise“a una funci€n llamada inicializa4, que inicializa el arreglo de enteros
//recibido como par∑metro con la siguiente serie:
//1, 2, 4, 8, 16, 32, etc.
//a[0] = 1
//a[1] = 2
//a[2] = 4
//a[3] = 8
//a[4] = 16
//:
void inicializa4(int iArrA[], int iS)
{
    for(int iR = 0, iValor = 1; iR < iS; iR++)
    {
        iArrA[iR] = iValor;
        iValor = iValor * 2;
    }
}

//Funcion que inicializa valores del 1 al 10 sin que se repitan
void inicializaRandom(int iArrA[], int iS)
{
    // Inicializar la semilla de los valores random
    // Para que cada vez que se ejecute de nuevo genere
    // una secuencia de valores diferentes
    srand(time(NULL));

    //Declarar variables
    int iDato, iR;
    bool bRep;

    //Asignar valores
    iR=1;

    //Declarar el primer valor de nuestra muestra
    iArrA[0] = rand() % 11 + 1;
    //Ciclo que genera los 9 numeros restantes
    do{
    //Asignar el nuevo valor aleatorio
    iDato = rand() % 10 + 1;

    //Asignar la condicion que no se repite
    bRep = true;
   	for(int iK=0; iK < iR; iK++)
    {
        //Condicion que si se repite se vuelve false
        if(iDato == iArrA[iK])
            bRep=false;
    }
    //Condicion que checa si bRep es true significa que el numero no se ha repetido
    if(bRep)
    {
    	iArrA[iR]=iDato;
        iR++;
    }
    } while(iR < 10);
}

//Aqui se ve que el paso de parametro del arreglo
//es por Referencia
void leerArreglo(int iArrA[], int iS)
{
    for(int iR = 0; iR < iS; iR++)
    {
        cout << "Ingresa el valor " << iR << ":";
        cin >> iArrA[iR];
    }
}
//***********************************
//suma
//Dise“a una funci€n llamada suma,
//que retorna la suma de todos los valores
//del arreglo recibido como par∑metro de entrada.
//***********************************
int suma(int iArrA[], int iS)
{
    //Declaraci€n de variables
    //Inicializar el acumulador de la iAcum=0
    int iAcum = 0;

    //Recorrer todos el arreglo para ir
    //sumando uno a uno en iAcum
    for(int iR = 0; iR < iS; iR++)
        iAcum = iAcum + iArrA[iR];

    //Retornar la suma de todos elementos del
    //Arreglo
    return iAcum;
}
//***********************************
//mayor
//Dise“a una funci€n llamada elMayor,
//que retorna el valor mayor del arreglo
//recibido como par∑metro de entrada.
//***********************************
int mayor (int iArrA[], int iS)
{
    //Declaracion de variables
    int iMax;

    //Inicializar iMax
    iMax = INT_MIN;

    for(int iR = 0; iR < iS; iR++)
    {
        //Condicion que checa si el numero es mayor
        if(iArrA[iR] > iMax)
        	iMax = iArrA[iR];
    }
    //Retornar
    return iMax;
}
//***********************************
//menor
//Dise“a una funci€n llamada elMenor,
//que retorna el valor menor del arreglo
//recibido como par∑metro de entrada.
//***********************************
int menor (int iArrA[], int iS)
{
    //Declaracion de variables
    int iMin;

    //Inicializar iMin
    iMin = INT_MAX;

   for(int iK = 0; iK < iS; iK++)
   {
       //Condicion si checa si el numero es menor
       if(iArrA[iK] < iMin)
           iMin=iArrA[iK];
   }

    //Retornar
    return iMin;
}
//***********************************
//buscaValor
//Dise“a una funci€n llamada buscaValor,
//que devuelve true si el valor recibido
//como par∑metro existe dentro del arreglo de enteros,
//tambi»n recibido como par∑metro y false en caso contrario.
//***********************************
bool existeValor(int iArrA[], int iS, int iValor)
{

    //Recorrer todo el arreglo si lo encuentra
    // retornar true
	for(int iR = 0; iR < iS; iR++)
    	if(iArrA[iR] == iValor)
        	return true;

    //No lo encontro
    return false;
}

//***********************************
//buscaPos
//Dise“a una funci€n llamada buscaPos,
//que devuelve la posici€n dentro del arreglo del valor
//recibido como par∑metro, si es que existe, sino, regresa -1.
//***********************************
int buscaPosicionValor(int iArrA[], int iS, int iValor)
{
    //Recorrer el arreglo si lo encuentra
    // retornar la posici€n en que se encontro
    //Recorrer todo el arreglo si lo encuentra
    // retornar true
	for(int iR = 0; iR < iS; iR++)
        if(iArrA[iR] == iValor)
        	return iR;

    //No lo encontro
    return -1;
}
//***********************************
//cuentaRepeticiones
//Dise“a una funci€n llamada cuentaRepeticiones,
//que devuelve cu∑ntas veces existe dentro del arreglo
//el valor recibido como par∑metro.
//**********************************
int cuentaRepeticiones(int iArrA[], int iS, int iValor)
{
    //Declaracion de variables
    int iCont=0;

    //contar las veces que se repite valor dentro del arreglo
	for(int iK = 0; iK < iS; iK++)
    {
        if(iValor == iArrA[iK])
            iCont++;
    }

    //Retorna la cantidad de veces que se encontro
    // el valor dentro del arreglo
    return iCont;
}
//***********************************
//inversa
//Dise“a una funci€n llamada inversa,
//que copia el arreglo a en forma inversa al arreglo b,
//regresa true si pudo realizar la copia y false en caso contrario.
//***********************************
bool copiaInversa( int iArrA[], int iSA, int iArrB[], int iSB)
{
    //No se puede realizar la copia
    if (iSA!=iSB)
        return false;

    //Si son del mismo tama“o
    //copiar de forma inversa el contenido del arreglo iArrA al
    // arreglo iArrB
	for(int iR = 0,iR2 = iSB - 1; iR < iSB; iR++, iR2--)
        iArrB[iR2] = iArrA [iR];

    //Si se pudo realizar la copia
    return true;
}
//***********************************
//copia arreglo
//Dise“a una funci€n llamada inversa,
//que copia el arreglo A al arreglo B,
//regresa true si pudo realizar la copia y false en caso contrario.
//***********************************
bool copiaArreglo( int iArrA[], int iSA, int iArrB[], int iSB)
{
    //No se puede realizar la copia
    if (iSA!=iSB)
        return false;
    //Si son del mismo tama“o
    //copiar el contenido del arreglo iArrA arreglo iArrB
    for(int iR = 0; iR < iSB; iR++)
    	iArrB[iR] = iArrA[iR];

    //Si se pudo realizar la copia
    return true;
}
bool iguales(int iArrA[], int iSA, int iArrB[], int iSB)
{
    //Lo primero revisar si tienen el mismo tama“o
    //Si no tienen el mismo tama“o regresar false
    if (iSA!=iSB)
        return false;
    //Si si tienen el mismo tamaÒo revisar ahora elementoXelemento
    //Recorrer todos los elementos del arreglo
    //Si algunos no son iguales termina la comparaci€n
    // y retorna false, indicando que NO fueron iguales
    for(int iR = 0; iR < iSA; iR++)
        if(iArrA[iR] == iArrB[iR])
           return false;

    //Ya se comprueba que todos
    //los elementos fueron iguales
    return true;
}
//***********************************
//promedio
//Dise“a una funci€n llamada promedio,
//que devuelve el promedio con decimales
//de todos los valores contenidos dentro del arreglo.
//***********************************
double promedio(int iArrA[], int iSA )
{
    //Declaraci€n de variables
    //Inicializar el acumulador de la iAcum=0
    double dAcum = 0;

    //Recorrer todos el arreglo para ir
    //sumando uno a uno en iAcum
	for(int iK=0; iK < iSA; iK++)
    {
        dAcum = dAcum + iArrA[iK];
    }

    //Retornar el promedio de todos los elementos del
    //Arreglo si el tama“o fue >0
    if(iSA >0)
        return dAcum / iSA;

    //sino retorna
    return INT_MIN;
}
int main(int argc, const char * argv[])
{
    int iArrA[ ]={ 7,10,8,2,3,15,12,13,40,15};
    int iOpcion, iValor,iPremio, iTotal,iPosicion;
    int iArrB[10];
    int iArrTacos[]={100,100,100};
    double dPromedio;
    string sValor;
    string iArrLoteria[54] = {"El Gallo", "El Diablito", "La Dama", "El Catrin", "El Paraguas", "La Sirena",
                         "La Escalera", "La Botella", "El Barril", "El Arbol", "El Melon", "El Valiente",
                         "El Gorrito", "La Muerte", "La Pera", "La Bandera", "El Bandolon"};
    string sArrGuisados[20] = {"Barbacos", "Chicarron Rojo", "Chicharron Verde", "Frijoles", "Queso", "Picadillo",
                            "Deshebrada", "Frijoles con Veneno", "Rajas con queso", "Cochinitas", "Chile Relleno"};

    //Ciclo centinela con do-while
    do
    {
        iOpcion = menu();
        switch (iOpcion) {
            case 0:
                cout<<"Adios!!!\n";
                break;
            case 1:
                inicializa1(iArrA, 10);
                despliega(iArrA, 10);
                break;
            case 2:
                inicializa2(iArrA, 10);
                despliega(iArrA, 10);
                break;
            case 3:
                inicializa3(iArrA, 10);
                despliega(iArrA, 10);
                break;
            case 4:
                inicializa4(iArrA, 10);
                despliega(iArrA, 10);
                break;
            case 5://Inicializa5
                inicializaRandom(iArrA,10);
                despliega(iArrA, 10);
                break;
            case 6://El mayor
                despliega(iArrA, 10);
                cout<<"El mayor="<<mayor(iArrA,10)<<endl;
                break;
            case 7://El menor
            	despliega(iArrA, 10);
            	cout<<"El menor="<<menor(iArrA,10)<<endl;
                break;
            case 8://Suma
                despliega(iArrA, 10);
                iTotal = suma(iArrA, 10);
                cout<<"Total="<<iTotal<<endl;
                break;
            case 9://Promedio
            	despliega(iArrA, 10);
            	dPromedio = promedio(iArrA, 10);
            	cout << "Promedio= " << dPromedio <<endl;
                break;
            case 10://Busca Valor
            	despliega(iArrA, 10);
                //Leer el valor que voy a buscar en
                cout<<"Teclea tu numero de boleto:";
                cin>>iValor;

                if ( existeValor(iArrA,10,iValor) )
                    cout<<"Tu boleto esta premiado!!\n";
                else
                    cout<<"No esta tu boleto en la lista de los ganadores\n";
                break;
            case 11://Busca valor desde una posicion
                despliega(iArrA, 10);
                //Leer el valor que voy a buscar en
                cout<<"Teclea tu numero de boleto:";
                cin>>iValor;

            	iPremio=buscaPosicionValor(iArrA,10,iValor);
                if ( existeValor(iArrA,10,iValor) )
                    cout<<"Tu boleto esta premiado!! y se encuentra en la posicion"<<iPremio<<"\n";
                else
                    cout<<"No esta tu boleto en la lista de los ganadores\n";
                break;

            case 12:
                despliega(iArrA, 10);
                //Leer el valor que voy a buscar en
                cout<<"Teclea tu numero de boleto:";
                cin>>iValor;
                //Como llamar???
                iPremio= buscaPosicionValor(iArrA,10,iValor) ;
                if ( iPremio != -1)
                    //Te sacaste un premio
                    cout<<"Tu premio es "<<sArrGuisados[iPremio] <<endl;
                else
                    cout<<"No esta tu boleto en la lista de los ganadores,Adios!\n";
                    break;
            case 13:
                break;
            case 14://Copia arreglo
                //Desplegar arreglos
                cout<<"Arreglo AAAAAA\n\n";
                despliega(iArrA, 10);
                cout<<"Arreglo BBBBBBBB\n";
                despliega(iArrB, 10);
                //if para verificar si se pudo copiar
                if ( copiaArreglo(iArrA, 10, iArrB, 10) )
                {
                    //si se pudo copiar
                    cout<<"Si se pudo copiar!!\n";
                    cout<<"Arreglo BBB Nuevo\n";
                    despliega(iArrB, 10);
                }
                else
                {
                    cout<<"Nooooo se pudo copiar!!\n";
                }
                break;
            case 15:
                //Desplegar arreglos
                cout<<"Arreglo AAAAAA\n\n";
                despliega(iArrA, 10);
                cout<<"Arreglo BBBBBBBB\n";
                despliega(iArrB, 10);
                //if para verificar si se pudo copiar
                if ( copiaInversa(iArrA, 10, iArrB, 10) )
                {
                    //si se pudo copiar
                    cout<<"Si se pudo copiar!!\n";
                    cout<<"Arreglo BBB Nuevo\n";
                    despliega(iArrB, 10);
                }
                else
                {
                    cout<<"Nooooo se pudo copiar!!\n";
                }
                break;
            case 20:
            	despliega(sArrGuisados,10);
            	break;
            case 21:
            	leerArreglo(iArrA,10);
            	despliega(iArrA,10);
            	break;
            default:
                break;
        }

        //Hacer una pausa para que el usuario de <enter>
        cout << "Teclea enter para continuar...";
        getchar();
        getline(cin, sValor);

    }while (iOpcion!= 0);

    return 0;
}
