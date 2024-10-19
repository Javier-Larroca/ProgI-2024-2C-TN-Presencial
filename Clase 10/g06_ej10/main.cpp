/*
    Hacer una función que reciba un código de naipe (del 1 al 40) y determine el número y el palo de la baraja española de 40 cartas (sin los 8, 9 y comodines del mazo). La función debe recibir por referencia el número de naipe y el nombre del palo (para ser completados por la función) y por valor el código de naipe.
 Tener en cuenta que:

 Los códigos de naipes de espada van del 1 al 10, basto del 11 al 20, copa del 21 al 30 y oro del 31 al 40. Por ejemplo, naipe con ID #10 es el 12 de espadas.
*/

#include <iostream>
using namespace std;

void buscarNaipe(int cod, int& nro, string &palo);

int main()
{
        int codigo;
        int numero;
        string palo;

        cout << "Ingrese un numero: ";
        cin >> codigo;

        buscarNaipe(codigo, numero, palo);

        cout << "Numero " << numero << " de " << palo << endl;

    return 0;
}

void buscarNaipe(int cod, int& nro, string &palo)
{
    if( cod <= 10 ) // 1 - 10
    {
        palo = "Espadas";
    }
    else if( cod <= 20 ) // 11 - 20
    {
        palo = "Basto";

        cod = cod - 10;
    }
    else if( cod <= 30 ) // 21 - 30
    {
        palo = "Copa";
        cod = cod - 20;
    }
    else // 31 - 40
    {
        palo = "Oro";
        cod = cod - 30;
    }

//    cod = cod%10;

    if(cod >= 8)
    {
        cod += 2;
    }

    nro = cod;
}
