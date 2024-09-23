/*
Una empresa registró las ventas que efectuó durante un día y para cada venta
 registró los siguientes datos:

 - Número de Artículo Vendido (1 a 30)
 - Cantidad de Unidades Vendidas
 - Importe de la Venta

 El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0.
 En el lote anterior no aparecen registros de los artículos que por alguna razón
 no se hayan vendido durante el día. Los registros están agrupados por número
 de artículo.

 Se pide determinar e informar:

 a) La recaudación total para cada uno de los artículos vendidos. Se informa 1
 resultado para cada uno de los grupos.

 b) El número deartículo con mayor cantidad TOTAL de unidades vendidas
*/

#include <iostream>
using namespace std;

int main()
{
    int nroArt, cant, nroArtActual;
    float importe, recaudacionGrupo;

    cout << "ingrese el nro de articulo: ";
    cin >> nroArt;
    cout << "Ingrese la cantidad: ";
    cin >> cant;
    cout << "Ingrese el importe: $";
    cin >> importe;

    while(nroArt != 0) //1
    {
        nroArtActual = nroArt;

        recaudacionGrupo = 0;

        while(nroArt == nroArtActual)//2
        {
            recaudacionGrupo += importe * cant;

            cout << "-------" << endl;
            cout << "ingrese el nro de articulo: ";
            cin >> nroArt;
            cout << "Ingrese la cantidad: ";
            cin >> cant;
            cout << "Ingrese el importe: $";
            cin >> importe;
        }

        // Recaudacion total por grupo
        cout << endl;
        cout << "La recaudacion del art " << nroArtActual << " fue de $" << recaudacionGrupo << endl;
    }

    return 0;
}
