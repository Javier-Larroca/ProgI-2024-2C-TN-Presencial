#include <iostream>
using namespace std;

/*
Ejemplo:
Un almacén posee 5 productos, de los cuales se tiene registros de precio y código de cada uno.

Existe un segundo lote con las ventas efectuadas la semana pasada, del cual por cada venta se tiene registro de cantidad vendida, código de producto y día.
El lote finalizara cuando se ingrese un codigo de venta igual a 0.

Se requiere saber cuanto fue el total facturado de lunes a viernes.
*/

int encontrarIndice(int codigos[], int cod, int tam)
{
    for(int x=0; x<tam; x++)
    {
        cout<<"Estoy en el indice: "<<x<<endl;
        if(cod==codigos[x])
        {
            cout<<"Encontre el indice por el codigo"<<endl;
            return x;
        }
    }
}

int main()
{
    int const CANT_PROD = 3;
    int cant, dia, cod, indice;
    float precios[CANT_PROD];
    int codigos[CANT_PROD];
    float totalFacturado=0;
    for(int x=0; x<CANT_PROD; x++) // Lote de carga;
    {
        cout<<"Ingrese codigo de producto "<<x+1<<": ";
        cin>>codigos[x];
        cout<<"Ingrese precio de producto "<<x+1<<": $";
        cin>>precios[x];
    }

    cout<<endl;
    cout<<"    - Ventas -"<<endl<<endl;

    cout<<"Ingrese codigo de producto: ";
    cin>>cod;
//    cout<<"Ingrese cantidad de la venta: ";
//    cin>>cant;
//    cout<<"Ingrese dia de la venta: ";
//    cin>>dia;

    while(cod!=0) //Lote de proceso
    {
        cout<<"Ingrese cantidad de la venta: ";
        cin>>cant;
        cout<<"Ingrese dia de la venta: ";
        cin>>dia;

        if(dia>=2 && dia<=6)
        {
            indice = encontrarIndice(codigos, cod, CANT_PROD);
            //cout<<"Precio del producto: $"<<precios[indice]<<endl;
            totalFacturado += cant * precios[indice];
        }

        cout<<"Ingrese codigo de producto: ";
        cin>>cod; //Al ingresar codigo 0 se corta el ciclo sin pedir los demas datos.
    }
    cout<<"          - Fin lote de proceso -"<<endl<<endl;
    cout<<"El total facturado fue: "<<totalFacturado<<endl<<endl;
    return 0;
}


