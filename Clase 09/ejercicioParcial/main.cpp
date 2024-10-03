#include <iostream>
using namespace std;

/*
Se requiere procesar los consumos de tarjetas de crédito emitidas por distintos bancos. De cada registro se tiene:

Código de tarjeta ("M" MasterCard. - "V" Visa. - "A" American Express).
﻿﻿Importe de la compra.
﻿﻿Cantidad de cuotas (1, 3, 6, 12).
﻿﻿Número de Provincia (1 a 24).
﻿﻿Mes (1 a 12).

Los registros se encuentran agrupados por provincia y el fin del lote se indica con provincia cero.
Se pide determinar e informar:

﻿﻿﻿A - El porcentaje de compras realizadas por cada marca de tarjeta.
﻿﻿﻿B - La cantidad de compras de la tarjeta Visa el mes de enero en cada provincia.
﻿﻿﻿C - El número de provincia en la que se registró el consumo más caro en un pago
*/

int main()
{
    //variables globales
    int cantCuotas, numProvincia, numProvinciaAnt, mes;
    float impCompra;
    char codTarj;

    //Punto A
    int cantMaster = 0;
    int cantVisa = 0;
    int cantAmerican = 0;
    int cantTotalCompras;
    float porcMaster, porcVisa, porcAmerican;

    //Punto B
    int cantVisaEnero;

    //Punto C
    int numProvMasCaro;
    float impProvMasCaro = 0;

    cout<<"Codigoss de tarje: M MasterCard. - V Visa. - A American Express"<<endl<<endl;
    cout<<"Ingrese el codigo de la tarjeta: ";
    cin>>codTarj;
    cout<<"Ingrese el importe de la compra: $";
    cin>>impCompra;
    cout<<"Ingrese la cantidad de cuotas: ";
    cin>>cantCuotas;
    cout<<"Ingrese la provincia: ";
    cin>>numProvincia;
    cout<<"Ingrese el mes: ";
    cin>>mes;
    cout<<endl;

    while(numProvincia!=0)
    {
        numProvinciaAnt=numProvincia;

        //Punto B
        cantVisaEnero = 0;
        while(numProvinciaAnt==numProvincia)
        {
            //Punto A
            switch (codTarj)
            {
            case 'M':
                cantMaster++;
                break;
            case 'V':
                cantVisa++;
                break;
            case 'A':
                cantAmerican++;
                break;
            default:
                cout<<"--Se ingreso codigo de tarjeta incorrecto.--"<<endl;
                break;
            }

            //Punto B
            if(codTarj == 'V' && mes==1)
            {
                cantVisaEnero++;
            }

            //Punto C
            if(cantCuotas == 1)
            {
                if(impCompra>impProvMasCaro)
                {
                    impProvMasCaro = impCompra;
                    numProvMasCaro = numProvincia;
                }
            }

            cout<<"Ingrese el codigo de la tarjeta: ";
            cin>>codTarj;
            cout<<"Ingrese el importe de la compra: $";
            cin>>impCompra;
            cout<<"Ingrese la cantidad de cuotas: ";
            cin>>cantCuotas;
            cout<<"Ingrese la provincia: ";
            cin>>numProvincia;
            cout<<"Ingrese el mes: ";
            cin>>mes;
            cout<<endl;
        }

        //Punto B
        cout<<"Cantidad de compras con Visa en enero: "<<cantVisaEnero<<endl;
    }

    //Punto A
    cantTotalCompras = cantMaster + cantVisa + cantAmerican;
    porcMaster = cantMaster * 100 / cantTotalCompras;
    porcVisa = cantVisa * 100 / cantTotalCompras;
    porcAmerican = cantAmerican * 100 / cantTotalCompras;
    cout<<"Porcentaje de ventas - Master : %"<<porcMaster<<endl;
    cout<<"Porcentaje de ventas - Visa : %"<<porcVisa<<endl;
    cout<<"Porcentaje de ventas - American : %"<<porcAmerican<<endl;

    //Punto C
    cout<<"La provincia con la compra mas cara en un pago fue: "<<numProvMasCaro<<endl;

}
