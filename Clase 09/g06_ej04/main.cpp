#include <iostream>
using namespace std;

bool esPrimo(int n)
{
    int cont = 0;
    for (int x=1; x<=n; x++)
    {
        if (n%x==0)
        {
            cont++;
        }
    }

    return cont == 2;
}

bool EsPrimoSophieGermain(int nro)
{
    int formula;

    if(esPrimo(nro))
    {
        /* 2*n+1*/
//        cout << nro << " es primo" << endl;
        formula = 2*nro+1;

        if(esPrimo(formula))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    int nro;

    cout << "Ingrese un numero: ";
    cin >> nro;

    if(EsPrimoSophieGermain(nro))
    {
        cout << "El numero es Sophie Germain" << endl;
    }
    else
    {
        cout << "El numero no es Sophie Germain" << endl;
    }

    return 0;
}
