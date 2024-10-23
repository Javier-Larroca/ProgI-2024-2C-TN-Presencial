#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int encontrarElNumero();
void mostrarPuntajes(int puntajes[]);

int main()
{
    setlocale(LC_ALL, "spanish");
    srand (time(NULL));

    int intentosPorjugador[2];

    for(int x=0; x<2; x++)
    {
        system("cls");

        cout<<"------- TURNO JUGADOR N° "<<x+1<<" -------"<<endl<<endl;
        intentosPorjugador[x] = encontrarElNumero();

        system("pause");
    }

    system("cls");
    mostrarPuntajes(intentosPorjugador);
    if(intentosPorjugador[0]<intentosPorjugador[1])
    {
        cout<<endl<<"   ¡¡ El jugador 1 fue el ganador !!"<<endl;
    }
    else
    {
        cout<<endl<<"   ¡¡ El jugador 2 fue el ganador !!"<<endl;
    }

    return 0;
}

int encontrarElNumero()
{
    int numero;
    int numeroEsperado = rand() % 1000 +1;
    int intentos = 1;

    //cout<<" -- "<<numeroEsperado << " Este es el numero esperado. --"<<endl;
    cout<<"Elija un numero: ";
    cin>>numero;

    while(numero != numeroEsperado)
    {
        if ( numero > numeroEsperado)
        {
            cout<<"¡Te pasaste, un poco menos!"<<endl<<endl;
        }
        else if ( numero < numeroEsperado)
        {
            cout<<"¡Te falta un poco, es mas grande!"<<endl<<endl;
        }
        cout<<"Elija un numero: ";
        cin>>numero;
        intentos ++;
    }
    cout<<endl<<"  ¡¡¡¡ Acertaste felicitaciones !!!!"<<endl;
    cout<<"    --- Cantidad de intentos: "<<intentos<<" --- "<<endl<<endl;
    return intentos;
}

void mostrarPuntajes(int puntajes[])
{
    cout<<"-----------------------------------"<<endl;
    for (int x=0;x<2 ;x++ )
    {
        cout<<"      Intentos jugador N° "<<x+1<<": "<<puntajes[x]<<endl;
    }
    cout<<"-----------------------------------"<<endl;
}
