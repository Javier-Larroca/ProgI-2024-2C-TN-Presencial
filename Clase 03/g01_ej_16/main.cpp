#include <iostream>

using namespace std;

int main()
{
    const int BETAMOL = 45;
    const int MICILINA = 2000;
    const int ACIDO_SINTICO = 7;
    const int PILDORA_X_FRASCO = 75;

    int cantPildoras, cantFrascos;
    int betamolTotal, micilinaTotal, acidoSinticoTotal;

    cout << "Ingrese la cantidad de frascos: ";
    cin >> cantFrascos;

    cantPildoras = cantFrascos * PILDORA_X_FRASCO;

    betamolTotal = cantPildoras * BETAMOL;
    micilinaTotal = cantPildoras * MICILINA;
    acidoSinticoTotal = cantPildoras * ACIDO_SINTICO;

    cout << endl;
    cout << "Cantidades necesarias para \nla elaboracion de " << cantFrascos << " frascos: " << endl;
    cout << "------------------------------------"<<endl;
    cout << "     Betamol:       " << betamolTotal << " mg" << endl;
    cout << "     Micilina:      " << micilinaTotal << " mg" << endl;
    cout << "     Acido Sintico: " << acidoSinticoTotal << " mg" << endl;
    cout << "------------------------------------" << endl;

    return 0;
}
