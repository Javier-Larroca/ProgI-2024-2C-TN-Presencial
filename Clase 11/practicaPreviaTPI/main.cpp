#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int encontrarElNumero(); //Función que se ocupara de que el usuario acierte el numero, devolviendonos la cantidad de intentos.
void mostrarIntentos(int intentos[]); //Función que nos indicara el puntaje de cada jugador.
void anunciarGanador(int intentos[]); //Función que anuncia cual fue el jugador ganador.

int main()
{
    setlocale(LC_ALL, "spanish"); //Seteo el lenguaje de la consola.
    srand (time(NULL)); //Planto la semilla del random

    int intentosPorjugador[2]; //Vector donde se guardaran la cantidad de intentos de cada jugador.

    for(int x=0; x<2; x++)
    {
        system("cls"); // Limpio la pantalla

        cout<<"------- TURNO JUGADOR N° "<<x+1<<" -------"<<endl<<endl;
        intentosPorjugador[x] = encontrarElNumero(); //Llamo a la función para que el jugador comience el juego, y guardo lo que me retorno en el vector según el indice del for.

        system("pause"); // Pauso el juego
    }

    system("cls"); // Limpio la pantalla

    mostrarIntentos(intentosPorjugador); //Llamo a la función de mostrar intentos para que nos muestre los intentos de cada jugador.

    anunciarGanador(intentosPorjugador); //Llamo a la función que anunciara cual es el jugador ganador.

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

    while(numero != numeroEsperado) //Mientras el numero que ingrese el usuario sea distinto al numero esperado seguira iterando.
    {
        if (numero > numeroEsperado)
        {
            cout<<"¡Te pasaste, un poco menos!"<<endl<<endl;
        }
        else if ( numero < numeroEsperado)
        {
            cout<<"¡Te falta un poco, es mas grande!"<<endl<<endl;
        }
        cout<<"Elija un numero: ";
        cin>>numero;
        intentos ++; //Sumo un nuevo intento por cada vez que ingresa un numero.
    }

    cout<<endl<<"  ¡¡¡¡ Acertaste felicitaciones !!!!"<<endl; //Si salio del ciclo while es porque acerto el numero.
    cout<<"    --- Cantidad de intentos: "<<intentos<<" --- "<<endl<<endl;

    return intentos;
}

void mostrarIntentos(int intentos[])
{
    cout<<"-----------------------------------"<<endl;
    for (int x=0; x<2 ; x++ )
    {
        cout<<"      Intentos jugador N° "<<x+1<<": "<<intentos[x]<<endl;
    }
    cout<<"-----------------------------------"<<endl;
}

void anunciarGanador(int intentos[])
{
    if(intentos[0]==intentos[1]) //Evaluo si hubo un empate
    {
        cout<<endl<<"   ¡¡ Empate, ganaron o perdieron ambos !!"<<endl;
    }
    else
    {
        if(intentos[0]<intentos[1]) //Evaluo cual de los dos jugadores fue el ganador.
        {
            cout<<endl<<"   ¡¡ El jugador 1 fue el ganador !!"<<endl;
        }
        else
        {
            cout<<endl<<"   ¡¡ El jugador 2 fue el ganador !!"<<endl;
        }
    }
}


