#include <iostream>
using namespace std;

/*
 14 - Hacer un programa para ingresar el importe de una compra y el descuento a
 aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el
 importe total a cobrar.
*/

int main()
{
    // DECLARACIÓN DE VARIABLES
    float importeSinDesc, descuento, montoDescuento, importeDescAplicado;

    // INGRESOS
    cout << "Ingrese Importe de Compra: $ ";
    cin >> importeSinDesc;
    cout << "Ingrese Porcentaje Descuento: ";
    cin >> descuento;

    // PROCESOS
    montoDescuento = importeSinDesc * descuento / 100;
    importeDescAplicado = importeSinDesc - montoDescuento;

    cout << endl << endl;

    // SALIDAS
    cout << "----------------------" << endl;
    cout << "Valor sin Descuento: $ " << importeSinDesc << endl;
    cout << "Valor del Descuento: $ " << montoDescuento << endl;
    cout << "Valor con Descuento: $ " << importeDescAplicado << endl;
    cout << "----------------------" << endl;

    return 0;
}
