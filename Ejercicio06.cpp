//Calcular la suma de componentes de indice par e impar en un vector
#include <iostream>
using namespace std;

const int MAX = 200;

void leerVector(int vec[], int n) {
    for (int i = 0; i < n ; i++){
        cout << "Elemento [" << i << "]: ";
        cin >> vec[i];
    }
}

void sumarIndicesParImpar(int vec[], int n, int &sumaPar, int &sumaImpar) {
    sumaPar = 0;
    sumaImpar = 0;
    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            sumaPar = sumaPar + vec[i];
        } else {
            sumaImpar = sumaImpar + vec[i];
        }
    }
    cout << "Suma de elementos en indices pares : " << sumaPar << endl;
    cout << "Suma de elementos en indices impares : " << sumaImpar << endl;
}

int main() {
    int vec[MAX];
    int n;
    cout << "===================================================" << endl; 
    cout << "      SUMA DE COMPONENTES DE INDICES PAR/IMPAR     " << endl;
    cout << "Cuantos elementos tendra el vector? (1 a " << MAX << "): ";
    cin >> n;
    if (n < 1 || n > MAX) {
        cout << "Error. Cantidad invalida." << endl;
        return 1;
    }
    leerVector(vec, n);    
    int sumaPar = 0, sumaImpar = 0;
    sumarIndicesParImpar(vec, n, sumaPar, sumaImpar);
    return 0;
}