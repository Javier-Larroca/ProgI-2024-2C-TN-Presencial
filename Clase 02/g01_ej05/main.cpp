#include <iostream>
using namespace std;

/* 5 - Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
 programa para ingresar por teclado la cantidad de alfajores vendidos de cada
 una de las tres marcas y luego se informe el porcentaje de ventas para cada
 una de ellas */

int main()
{
    //Declaraci�n de variables
    int a, b, c;
    float pa, pb, pc;

    //Ingreso de datos
    cout << "Ingrese primer n�mero: ";
    cin >> a;
    cout << "Ingrese segundo n�mero: ";
    cin >> b;
    cout << "Ingrese tercer n�mero: ";
    cin >> c;

    //Procesos con casteo
    pa = (float)a * 100 / (a+b+c);
    pb = b * 100.0 / (a+b+c);
    pc = c * 100 / (float)(a+b+c);

    //Salidas por pantalla
    cout << endl;
    cout << "Porcentaje A: " << pa << endl;
    cout << "Porcentaje B: " << pb << endl;
    cout << "Porcentaje C: " << pc << endl;

    return 0;
}
