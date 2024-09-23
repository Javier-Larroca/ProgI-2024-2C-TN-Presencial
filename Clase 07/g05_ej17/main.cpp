/*
Una empresa registr� las ventas que efectu� durante un d�a y para cada venta
 registr� los siguientes datos:

 - N�mero de Art�culo Vendido (1 a 30)
 - Cantidad de Unidades Vendidas
 - Importe de la Venta

 El lote finaliza cuando se ingresa un registro con N�mero de Art�culo igual a 0.
 En el lote anterior no aparecen registros de los art�culos que por alguna raz�n
 no se hayan vendido durante el d�a. Los registros est�n agrupados por n�mero
 de art�culo.

 Se pide determinar e informar:

 a) La recaudaci�n total para cada uno de los art�culos vendidos. Se informa 1
 resultado para cada uno de los grupos.

 b) El n�mero deart�culo con mayor cantidad TOTAL de unidades vendidas
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
