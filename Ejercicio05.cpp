//Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones.
#include <iostream>
using namespace std;

const int MAX = 200;

void leerNnumeros(int cadena[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> cadena[i];
    }
}

void compararNumeros(int cadena[], int n) {
    int mayor = cadena[0], menor = cadena[0];
    int repiteMayor = 1, repiteMenor = 1;

    for (int i = 1; i < n; i++) {
        if (cadena[i] > mayor) {
            mayor = cadena[i];
            repiteMayor = 1;
        } else if (cadena[i] == mayor) {
            repiteMayor++;
        }

        if (cadena[i] < menor) {
            menor = cadena[i];
            repiteMenor = 1;
        } else if (cadena[i] == menor) {
            repiteMenor++;
        }
    }

    cout << "Numero mayor: " << mayor << " (repite " << repiteMayor << " veces)\n";
    cout << "Numero menor: " << menor << " (repite " << repiteMenor << " veces)";
}

int main() {
    int cadena[MAX];
    int n;
    cout << "=================================================" << endl; 
    cout << "     CONTADOR DE REPETICIONES DE MAYOR/MENOR     " << endl;
    do {
        cout << "Cuantos numeros desea ingresar? (1 a " << MAX << "): ";
        cin >> n;
        if (n < 1 || n > MAX) {
            cout << "Error. Cantidad no valida.\n";
        }
    } while (n < 1 || n > MAX);
    leerNnumeros(cadena, n);
    compararNumeros(cadena, n);
    return 0;
}