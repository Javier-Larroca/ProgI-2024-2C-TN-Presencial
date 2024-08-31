#include <iostream>
using namespace std;

/*
 19 Hacer un programa para ingresar un número entero y luego informar
 la cantidad de divisores de ese número.
 Ejemplo A. Si se ingresa 6 se listará: 4 divisores.
 Ejemplo B. Si se ingresa 9 se listará: 3 divisores.
 Ejemplo C. Si se ingresa 11 se listará: 2 divisores.
*/
int main()
{
    int n;
    int contador=0;

    cout << "Ingrese un numero para saber sus divisores: " << endl;
    cin>>n;

    for(int x=1;x<=n;x++)
    {
        //cout<<"X: "<<x<<endl;
        if(n%x==0)
        {
            contador++;
            //cout<<"Divisor: "<<x<<endl;
        }

    }

    cout<<"El numero: "<<n<<" tiene "<<contador<<" divisores."<<endl;
    return 0;
}
