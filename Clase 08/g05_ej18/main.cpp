#include <iostream>

using namespace std;

/*
    EJERCICIO 18

    Registro:
    - Númerodesucursal(1 a30)
    - Díadelaventa(1a31)
    - Importedelaventa
    - Tipodeventa(1=Particular, 2=Obra Social)
    - FormadePago(1=Débito, 2=Crédito, 3=Contado)

    a) Para cada una de las sucursales el porcentaje de recaudación total por sus
    ventas en crédito, débito y contado. Se informan 3 resultados por cada
    sucursal.
    b) Indicar en cual sucursal se hizo el menor porcentaje de recaudación total por
    ventas de Tipo Obra Social. Se informa 1 resultado al final.
    c) Para cada sucursal informar la primera y segunda venta individual de mayor
    importe. Se informan 2 resultados por sucursal.
    d) La venta de menorimporte de todas las ventas, indicando la sucursal y el día
    de la venta. Se informan 3 resultados al final.
*/

int main()
{
    setlocale(LC_ALL, "spanish");
    const int tipoVentaObraSocial = 2;

    cout << "EJERCICIO 18 - ¿SUPERMERCADO ó FARMACIA?" << endl;

    // Variables del Registro
    int ns, d, tv, fp;
    float i;
    //Punto A
    float acuD, acuCr, acuCo, pD, pCr, pCo, total;
    //Punto B
    bool bPOsM = true;
    float acuOs, pOs, pMin;
    int nSMin;
    //Punto C
    float pM, sM;
    //Punto D
    bool bM=true;
    float mV;
    int mNS, dM;

    // Variable para el CdC
    int nSAct;

    cout << "-----------------------------------" << endl;
    cout << "Sucursal: ";
    cin >> ns;

    while(ns!=0)
    {
        nSAct = ns;

        //Punto A
        acuD=0;
        acuCr=0;
        acuCo=0;
        //Punto B
        acuOs = 0;
        //Punto C
        pM=0;
        sM=0;

        while(ns == nSAct)
        {

            // Pido los demás datos
            cout << "Dia: ";
            cin >> d;
            cout << "Importe: $ ";
            cin >> i;
            cout << "Tipo de Venta: ";
            cin >> tv;
            cout << "Forma de Pago: ";
            cin >> fp;

            //PUNTO A
            switch(fp)
            {
            case 1:
                acuD+=i;
                break;
            case 2:
                acuCr+=i;
                break;
            case 3:
                acuCo+=i;
                break;
            default:
                cout<<"Se ingreso una forma de pago no valida."<<endl;
                break;
            }

            //Punto B
            if(tv==tipoVentaObraSocial)
            {
                acuOs+=i;
            }

            //Punto C
            if(i>pM)
            {
                sM=pM;
                pM=i;
            }
            else
            {
                if (i>sM)
                {
                    sM=i;
                }
            }

            //Punto D
            if(bM)
            {
                bM=false;
                mV=i;
                mNS=ns;
                dM=d;
            }
            else
            {
                if(i<mV)
                {
                    mV=i;
                    mNS=ns;
                    dM=d;
                }
            }

            cout << "-----------------------------------" << endl;
            // Pido una Nueva Sucursal
            cout << "Sucursal: ";
            cin >> ns;
        }


        cout << endl;
        cout << "Muestro por fuera del While Interno la Info de la Sucursal: " << nSAct << endl;
        cout << endl;

        //Punto A
        total = acuD+acuCr+acuCo;
        pD = acuD*100/total;
        pCr = acuCr*100/total;
        pCo = acuCo*100/total;
        cout << "---------- PUNTO A ---------" << endl;
        cout << "Porcentaje Débito:  " << pD<< endl;
        cout << "Porcentaje Crédito: " << pCr<< endl;
        cout << "Porcentaje Contado: " << pCo<< endl;
        cout << "----------------------------" << endl;

        //Punto B
        pOs = acuOs * 100 / total;
        if(bPOsM)
        {
            pMin=pOs;
            bPOsM = false;
            nSMin = nSAct;
        }
        else
        {
            if(pOs<pMin)
            {
                pMin=pOs;
                nSMin = nSAct;
            }
        }

        cout << "---------- PUNTO C ---------" << endl;
        cout << "MAYOR IMPORTE 1: " << pM << endl;
        cout << "MAYOR IMPORTE 2: " << sM << endl;
        cout << "----------------------------" << endl << endl;
    }

    cout << endl;
    cout << "Muestro por fuera del While Externo..." << endl;
    cout << endl;

    cout << "---------- PUNTO B ---------" << endl;
    cout << "SUCURSAL MENOR PORCENTAJE O. SOCIAL:  " << nSMin << endl;
    cout << "----------------------------" << endl;

    cout << "---------- PUNTO D ---------" << endl;
    cout << "VENTA MENOR:  " << mV << endl;
    cout << "DÍA MENOR: " << dM << endl;
    cout << "SUCURSAL MENOR: " << mNS << endl;
    cout << "----------------------------" << endl;

    system("pause");

    cout << endl << endl;
    cout << "GRACIAS POR CONFIAR EN NOSOTROS!" << endl;
    cout << "QUE TENGA UN BUEN DÍA..." << endl;
    cout << endl;

    return 0;
}
