#include <iostream>
using namespace std;

/* 8 - Hacer un programa para ingresar por teclado el importe de una venta sin el
 descuento y el importe de esa misma venta con el descuento aplicado y luego
 informar por pantalla el porcentaje de descuento aplicada a la misma.
 Ejemplo A. Si el importe de la venta sin descuento es $1500 y el importe de la
 venta con descuento es $1200 entonces el porcentaje de descuento aplicado
 fue el 20%*/

int main()
{
    //Declaracion de variables
    float importeVenta, importeVentaConDescuento, diferencia,  porcentajeDescuento;

    cout << "Ingrese el importe de la venta sin descuento: ";
    cin >> importeVenta;
    cout << "Ingrese el importe de la venta con descuento: "  ;
    cin >> importeVentaConDescuento;

    diferencia = importeVenta - importeVentaConDescuento;

    porcentajeDescuento = diferencia * 100 / importeVenta;

    cout << endl << endl;
    cout << "El porcentaje de descuento fue: %"<<porcentajeDescuento;
    cout << endl << "\n---------------------------------------------------" << endl << endl;
    return 0;
}
