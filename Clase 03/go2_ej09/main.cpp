/*
    Hacer unprogramaparaingresar tres n�meros
    y listar el m�ximo de ellos.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int nroMax;

    cout << "ingrese tres n�meros " << endl;
    cin >> a >> b >> c;

//    nroMax = a;

//    if(b > nroMax)
//    {
//        nroMax = b;
//    }

    if(a > b)
    {
        nroMax = a;
    }
    else
    {
        nroMax = b;
    }

    if(c > nroMax)
    {
        nroMax = c;
    }

    cout << "El n�mero m�ximo es " << nroMax << endl;

    return 0;
}
