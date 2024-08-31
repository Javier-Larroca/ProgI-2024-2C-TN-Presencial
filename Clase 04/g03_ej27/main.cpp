#include <iostream>

using namespace std;

/*
 Una estación meteorológica registró una muestra climática de los últimos 15
 días. Por cada día registró:--
     Número de día (entero)
     Temperatura (float)
     Milímetros de lluvia (float)
     Visibilidad en km (float)
 Hay un registro por cada día. La información se encuentra ordenada por día.
 Se pide calcular e informar:----
     El número del día que se haya registrado la temperatura máxima.
     La amplitud térmica de todo el período.
     La cantidad de días con neblina.
     Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia.
     Mostrar "Quincena húmeda" si llovió en al menos un tercio de los días.
     De lo contrario mostrar "Quincena seca".
 NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la
 temperatura mínima.
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
        cout<<"Ingrese día: ";
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
