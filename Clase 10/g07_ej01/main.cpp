/*
 Se requiere un programa que almacene la edad de 5 personas y luego las muestre por pantalla.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int edades[5];
    int sumaEdad = 0;

    for(int x = 0; x < 5; x++)
    {
        cout<<"Ingrese una edad: ";
        cin>>n;

        edades[x] = n;
    }

    for(int i = 0; i < 5; i++)
    {
        sumaEdad+=edades[i];
    }

    float promedio = (float)sumaEdad / 5;

    cout << "El promedio de las edades fue de: " << promedio << endl;

    for(int x = 0; x < 5; x++)
    {
        if(edades[x] > promedio)
        {
            cout<<"Edad: " << edades[x] << endl;
        }
    }

    return 0;
}
