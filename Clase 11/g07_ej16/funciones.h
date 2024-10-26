#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


using namespace std;

// ENCABEZADO O PROTOTIPO
void cargarVector(int v[], int TAM);        //Cargo Vector
int cantRepetidos(int v[], int TAM, int n); //Cuento Repetidos
bool hayRepetidos(int v[], int TAM);        //Verifico si hubo repetidos



// IMPLEMENTACIÓN DE FUNCIONES
void cargarVector(int v[], int TAM)
{
    // CARGA VECTOR
    for(int x = 0; x < TAM; x++){
        cout << "Ingrese un numero: ";
        cin >> v[x];
    }
}

int cantRepetidos(int v[], int TAM, int n){

    int cont = 0;

    for(int i = 0; i < TAM; i++)
    {
        if(v[i] == n){
            cont++;
        }
    }

    return cont;
}

bool hayRepetidos(int v[], int TAM){
    int cant;

    for(int i = 0; i < TAM; i++)
    {
        cant = cantRepetidos(v, TAM, v[i]);

        if(cant > 1){
            return true;
        }
    }

    return false;
}


#endif // FUNCIONES_H_INCLUDED
