#include <iostream>
using namespace std;


/* Hacer un programa para ingresar una lista de 10 n�meros,
luego informar el m�ximo.
 Ejemplo A: 5, 10, 20, 8, 25, 13, 35,-8,-5, 20. Se listar� M�ximo 35.
 Ejemplo B: 5, 10, 20, 8, 55, 13, 55,-8,-5, 20. Se listar� M�ximo 55.
 Ejemplo C:-15,-10,-20,-8,-25,-13,-55,-6,-55,-20. Se listar� M�ximo-6
 El tercer ejemplo demuestra que NO SIEMPRE en una lista de n�meros el
 m�ximo es unpositivo
 */
int main()
{
   //Declaracion de variables
   int n;
   int mayor;
   bool bandera = true;

   for(int x=0; x<10;x++)
    {
        cout<<"Ingrese un numero: ";
        cin>>n;
        if(bandera)
        {
            mayor = n;
            bandera=false;
        }
        else
        {
            if(n>mayor)
            {
                mayor = n;
            }
        }
//         if(x==0)
//         {
//            mayor = n;
//         }
//         else
//         {
//            if(n>mayor)
//            {
//                mayor = n;
//            }
//         }
    }

    cout<<endl<<"El mayor es: "<<mayor<<endl;

    return 0;
}
