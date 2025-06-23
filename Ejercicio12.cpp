/*Implementar una función que reciba un vector, su longitud y retorne true si el mismo se encuentra ordenado, 
false en caso contrario. */

#include <iostream>
using namespace std;

bool estaOrdenado(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            return false;
        }
    }
    return true; 
}
void leerVector(int v[], int n) {
    cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> v[i];
    }
}
int main() {
    int n;
    cout << "Cuantos elementos tendra el vector? : ";
    cin >> n;
    if (n < 1) {
        cout << "Error: cantidad no valida.\n";
        return 1;
    }
    int v[n];
    leerVector(v,n);
    if (estaOrdenado(v, n)) {
        cout << "El vector esta ordenado de forma ascendente.\n";
    } else {
        cout << "El vector no esta ordenado.\n";
    }
    return 0;
}