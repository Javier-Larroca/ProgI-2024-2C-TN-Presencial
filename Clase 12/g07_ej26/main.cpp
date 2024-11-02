#include <iostream>
using namespace std;

/*

Una empresa con varias sucursales, dispone de un primer lote de registros con
 la siguiente información:
     ● Número de artículo (1 a 25)
     ● Precio Unitario
 Este lote se encuentra desordenado.

 Dispone de un segundo lote con la información de las ventas que se efectuaron
 en cada una de las sucursales, con la siguiente información:
     ● Número de artículo (1 a 25)
     ● Número de sucursal (1 a 5)
     ● Cantidad vendida

Puede haber más de un registro para el mismo artículo y para la misma
 sucursal.
 El último registro se indica con número de artículo igual a cero.

 Se pide determinar e informar:
     a) Cantidad total vendida por cada artículo.
     b) Monto total recaudado por la empresa.
     c) Número de sucursal que más artículos vendió en total. (sin discriminar por artículo)

 */


int encontrarIndice(int articulos[], int art, int tam)
{
    for(int x=0; x<tam; x++)
    {
        if(art==articulos[x])
        {
            return x;
        }
    }
}

int main()
{
    int const CANT_ARTICULOS = 3;

    //int nroArticulos[CANT_ARTICULOS]; //Vectores donde almacenaremos el lote de carga.
    float precios[CANT_ARTICULOS]; //Vectores donde almacenaremos el lote de carga.

    int nroArticulo, cantVendida, sucursal, indice;

    //int cantArticulosVendidos[CANT_ARTICULOS] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; //Forma 1 de inicializar en 0 un vector.

//    for(int i = 0; i < CANT_ARTICULOS; i++) //Forma 2 de inicializar en 0 un vector.
//    {
//        cantArticulosVendidos[i]=0;
//    }

    //Punto A
    int cantArticulosVendidos[CANT_ARTICULOS] = {}; ////Forma 3 de inicializar en 0 un vector.

    //Punto B
    float montoTotalRecaudado = 0;

    //Punto C
    int cantVendidaPorSucursal[5] = {};
    int indiceMaxSuc;
    int maxSuc = 0;


    cout<<"  - Lote de carga -"<<endl<<endl;
    for(int x=0; x<CANT_ARTICULOS; x++) // Lote de carga;
    {
        cout<<"Ingrese nro de articulo: ";
        cin>>nroArticulo;
        cout<<"Ingrese precio de articulo: $";
        cin>>precios[nroArticulo-1];
    }

    cout<<"  - Lote de proceso -"<<endl<<endl;
    cout<<"Ingrese nro de articulo: ";
    cin>>nroArticulo;
    while(nroArticulo!=0)
    {
        cout<<"Ingrese nro de sucursal: ";
        cin>>sucursal;
        cout<<"Ingrese cantidad vendida: ";
        cin>>cantVendida;
        cout<<"------------------------------------------"<<endl;

        //indice = encontrarIndice(nroArticulos, nroArticulo, CANT_ARTICULOS);

        //Punto A
        //cantArticulosVendidos[indice]+=cantVendida;
        cantArticulosVendidos[nroArticulo-1]+=cantVendida;

        //Punto B
        montoTotalRecaudado += cantVendida*precios[nroArticulo-1];

        //Punto C
        cantVendidaPorSucursal[sucursal-1]+=cantVendida;

        cout<<"Ingrese nro de articulo: ";
        cin>>nroArticulo;
    }

    //Punto A
    for(int i = 0; i < CANT_ARTICULOS; i++)
    {
        //cout<<"Cantidad vendida del articulo "<<nroArticulos[i]<<" : "<<cantArticulosVendidos[i]<<endl;
        cout<<"Cantidad vendida del articulo "<<i+1<<" : "<<cantArticulosVendidos[i]<<endl;
    }

    //Punto B
    cout<<"El monto total recaudado fue de: $"<<montoTotalRecaudado<<endl;

    //Punto C
    for(int i = 0; i < 5; i++)
    {
        if(cantVendidaPorSucursal[i]>maxSuc)
        {
            maxSuc=cantVendidaPorSucursal[i];
            indiceMaxSuc = i;
        }
    }
    cout<<"La sucursal que mas vendio fue: "<<indiceMaxSuc+1<<endl;

}
