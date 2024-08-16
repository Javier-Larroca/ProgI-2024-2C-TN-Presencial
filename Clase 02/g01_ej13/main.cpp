#include <iostream>
using namespace std;

/*
 13 - Hacer un programa parauncajero automático para ingresar un importe a retirar
 y convertir el mismo en la cantidad de billetes de $1.000, $500, $200 y $100 a
 entregar.
*/

int main()
{
    int monto;
    int b1000, b500, b200, b100;
    //int sobrante;

    cout << "Bienvenidos a Banco UTN!" << endl;
    cout << "Cuanto quiere retirar: $ ";
    cin >> monto;

    // PROCESOS
    b1000 = monto / 1000;
    monto = monto % 1000;

    b500 = monto / 500;
    monto = monto % 500;

    b200 = monto / 200;
    monto = monto % 200;

    b100 = monto / 100;

    // SALIDAS
    cout << endl << endl;
    cout << "------------------------------" << endl;
    cout << "Billetes de 1000: " << b1000 << endl;
    cout << "Billetes de 500: " << b500 << endl;
    cout << "Billetes de 200: " << b200 << endl;
    cout << "Billetes de 100: " << b100 << endl;
    cout << "------------------------------" << endl;
    return 0;
}
