//Comprobar si un número de 10 cifras es capicúa usando un vector.
#include <iostream>
using namespace std;

bool capicua(int vect[], int n){
    for (int i = 0; i < n / 2; i++){
        if (vect[i] != vect[n-1-i]){
            return false;
        }
    }
    return true;
}

void leerCifras(int vect[], int n) {
    cout << "Ingrese " << n << " cifras separadas:\n";
    for (int i = 0; i < n; i++) {
        cout << "Cifra [" << i << "]: ";
        cin >> vect[i];
    }
}

int main() {
    int n;
    cout << "================================================" << endl;
    cout << "      COMPROBADOR DE CAPICÚAS DE 10 CIFRAS      " << endl;
    cout << "Ingrese la cantidad de cifras del numero (1 al 10): ";
    cin >> n;
    if (n <= 1 || n > 10){
        cout << "Error. Cifra invalida. ";
        return 1;
    }
    int vect[n];
    leerCifras(vect, n);
    if (capicua(vect, n)) {
        cout << "El numero es capicua.\n";
    } else {
        cout << "El numero no es capicua.\n";
    }
    return 0;
}