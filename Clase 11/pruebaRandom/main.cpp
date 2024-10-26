#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/* Adivinator: es un juego de dos jugadores, donde se debe acertar un número entre el 1 y el 1000. Para esto se cuenta con infinitos intentos, y de cada intento fallido se nos indica si el número que elegimos es menor o mayor al esperado. Gana aquel jugador que acierte el número en la menor cantidad de intentos.

Desarrollar un juego de dos jugadores, donde el turno del segundo comenzará cuando finalice de jugar el primer jugador.
Nuestra computadora deberá elegir un número al azar para cada jugador entre el 1 y el 1000 sin mostrarlos al usuario, por cada intento fallido, le debemos indicar al jugador si el número que ingreso es menor o mayor al número esperado.
Una vez finalizados ambos turnos, debemos indicar cuál de los jugadores dos es el ganador.*/
int main()
{
    setlocale(LC_ALL, "spanish");

    //Planto la semilla del random
    srand(time(NULL));
    // Asigno un número aleatorio entre 1000 y 1
	int numeroEsperado = rand() % 1000 + 1;
    cout << "Número generado: " << numeroEsperado;
    //numeroEsperado = rand() % 1000 + 1;
    //cout << "Número generado: " << numeroEsperado;


    /*for(int i = 0; i < 3; i++)
    {
          numeroEsperado = rand() % 1000 + 1;
    cout << "Número generado: " << numeroEsperado;
    }*/
    return 0;
}
