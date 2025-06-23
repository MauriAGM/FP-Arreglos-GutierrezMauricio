//Rotar las componentes de un vector una posición hacia la derecha
#include <iostream>
using namespace std;

void leerVector(int vec[], int n) {
    cout << "Ingrese los " << n << " elementos del vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> vec[i];
    }
}

void rotarImprimir(int vec[], int n) {
    int ultimo = vec[n - 1]; 
    for (int i = n - 1; i > 0; i--) {
        vec[i] = vec[i - 1];
    }
    vec[0] = ultimo; 
    cout << "\nVector rotado a la derecha: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: " << vec[i] << endl;
    }
}

int main() {
    int n;
    cout << "================================================" << endl;
    cout << "  ROTACION DE VECTOR UNA POSICION A LA DERECHA  " << endl;
    cout << "Cantidad de elementos: ";
    cin >> n;
    int vec[n];
    if (n < 1) {
        cout << "Error: cantidad inválida.\n";
        return 1;
    }
    leerVector(vec, n);
    rotarImprimir(vec, n);
    return 0;
}
