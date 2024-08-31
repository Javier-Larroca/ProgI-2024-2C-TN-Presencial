#include <iostream>

using namespace std;

/*
 Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15
 d�as. Por cada d�a registr�:--
     N�mero de d�a (entero)
     Temperatura (float)
     Mil�metros de lluvia (float)
     Visibilidad en km (float)
 Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a.
 Se pide calcular e informar:----
     El n�mero del d�a que se haya registrado la temperatura m�xima.
     La amplitud t�rmica de todo el per�odo.
     La cantidad de d�as con neblina.
     Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia.
     Mostrar "Quincena h�meda" si llovi� en al menos un tercio de los d�as.
     De lo contrario mostrar "Quincena seca".
 NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la
 temperatura m�nima.
 NOTA: Se considera neblina a una visibilidad menor a 2 km.
*/
int main()
{
    //Declaracion de variables
    int numeroDia;
    int diaMaxTemperatura;
    float temperatura, milimetrosLluvia, visibilidad;
    float temperaturaMax;

    for (int x=0; x<3; x++)
    {
        cout<<"Ingrese d�a: ";
        cin>>numeroDia;
        cout<<"Ingrese temperatura: ";
        cin>>temperatura;
        cout<<"Ingrese lluvia (ml): ";
        cin>>milimetrosLluvia;
        cout<<"Ingrese la visibilidad: ";
        cin>>visibilidad;
        cout<<"-------------------"<<endl;
        if(x==0)
        {
            temperaturaMax=temperatura;
            diaMaxTemperatura=numeroDia;
        }
        else
        {
            if(temperatura>temperaturaMax)
            {
                temperaturaMax=temperatura;
                diaMaxTemperatura=numeroDia;
            }
        }
    }

    cout<<"La temperatura maxima fue: "<<temperaturaMax<<" el dia: "<<diaMaxTemperatura;




    return 0;
}
