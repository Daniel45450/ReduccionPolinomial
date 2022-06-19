#include <iostream>

using namespace std;

void cargarEntrada(bool [], int);
void transformarEntrada(bool [], int [], int);
template <typename T> void imprimirArreglo(T [], int);
bool existeMayor0(int [], int);

int main()
{
    //Dado un problema A resolverlo utilizando un problema B
    //Problema A: Dado una sucesion de valores booleanos, determinar si existe un valor que haga verdadero el or logico.
    //Problema B: Dado una sucesion de numeros enteros, determinar si existe un valor que sea mayor a 0


    int n;
    //Cargo entrada del problema A
    cout << "Ingresa la cantidad de literales: ";
    cin >> n;
    bool literales[n];
    int valores[n];

    cargarEntrada(literales, n);
    transformarEntrada(literales, valores, n);

    //imprimirArreglo(literales, n); //Imprimir literales
    //imprimirArreglo(valores, n); //Imprimir entrada transformada

    cout << "\n" << endl;
    if(existeMayor0(valores, n)) {
        cout << "Existe un literal que hace verdadera la sucesion de literales" << endl;
    } else {
        cout << "No existe un literal que haga verdadera la sucesion de literales" << endl;
    }
    return 0;
}

void transformarEntrada(bool arr[], int arr2[], int n) {
    for(int i=0; i<n; i++) {
        if(arr[i] == true) {
            arr2[i] = 1;
        }
        if(arr[i] == false) {
            arr2[i] = 0;
        }
    }
}

void cargarEntrada(bool arr[], int n) {
    bool literal = 0;
    for(int i=0; i<n; i++)
    {
        cout << "Ingresa el valor " <<i+1<<": ";
        cin >> literal;
        arr[i] =  literal;
    }
}

template <typename T> void imprimirArreglo(T arr[], int n) {
    cout << "\n" << endl;
    for(int i=0; i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n" << endl;
}

bool existeMayor0(int arr[], int n) {
    for(int i=0; i<n; i++) {
        if(arr[i] > 0) {
            return true;
        }
    }
    return false;
}
