#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int encontrarElNumero(); //Función que se ocupara de que el usuario acierte el numero, devolviendonos la cantidad de intentos.
void mostrarPuntajes(int puntajes[]); //Función que nos indicara el puntaje de cada jugador.

int main()
{
    setlocale(LC_ALL, "spanish"); //Seteo el lenguaje de la consola.
    srand (time(NULL)); //Planto la semilla del random

    int intentosPorjugador[2];

    for(int x=0; x<2; x++)
    {
        system("cls"); // Limpio la pantalla

        cout<<"------- TURNO JUGADOR N° "<<x+1<<" -------"<<endl<<endl;
        intentosPorjugador[x] = encontrarElNumero();

        system("pause"); // Pauso el juego
    }

    system("cls"); // Limpio la pantalla
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
    int numeroEsperado = rand() % 1000 +1; // Asigno un numero aleatorio entre 1000 y 1.
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
