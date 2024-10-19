/*
    Hacer una funcion que reciba dos valores enteros y devuelva
    la suma y el producto de dichos valores.
*/

#include <iostream>
using namespace std;

/// DECLARACION
int sumaProducto(int a, int& b);

int main()
{
    int n1 = 5, n2 = 5, suma;

    suma = sumaProducto(n1, n2);

    cout << "Suma: " << suma << endl;
    cout << "Producto: " << n2 << endl;


    return 0;
}

/// DEFINICION
int sumaProducto(int a, int& b)
{
    int suma = a + b;
    b = a * b;

    return suma;

}
