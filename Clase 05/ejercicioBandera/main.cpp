#include <iostream>
using namespace std;

///Realizar un programa para ingresar la edad de 5 personas
///y luego informar si se econtro una persona mayor a
///50 años.

int main()
{
    int edad;
    bool hayPersonaMayor50 = false; // Estado inicial en falso

    for(int x=0; x<5; x++)
    {
        cout<<"Ingrese la edad de persona "<<x+1<<": ";
        cin>>edad;

        if (edad > 50)
        {
            hayPersonaMayor50 = true;
        }
    }

    cout<<endl<<"  -----------------------------------"<<endl;

    if (hayPersonaMayor50)
    {
        cout<<"     Hubo una persona mayor a 50";
    }
    else
    {
        cout<<"  No hubo ninguna persona mayor a 50";
    }
    cout<<endl<<"  -----------------------------------"<<endl;

}
