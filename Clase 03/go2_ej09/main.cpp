/*
    Hacer unprogramaparaingresar tres números
    y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int nroMax;

    cout << "ingrese tres números " << endl;
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

    cout << "El número máximo es " << nroMax << endl;

    return 0;
}
