#include <iostream>
#include <string>
#include <cctype> // Para isdigit()
#include <cstdlib> // Para atoi()
using namespace std;

int main() {
    string linea, digitos = "";

    cout << "Ingresa una linea de texto: ";
    getline(cin, linea);

    // Extraer solo los dígitos
    for (int i = 0; i < linea.length(); i++) {
        if (isdigit(linea[i])) {
            digitos += linea[i];
        }
    }

    if (digitos == "") {
        cout << "No se encontraron digitos en la cadena." << endl;
        return 1;
    }

    // Convertir a entero y sumarle 2
    int n = atoi(digitos.c_str());
    n += 2;

    cout << "Numero obtenido: " << digitos << endl;
    cout << "Resultado después de sumarle 2: " << n << endl;

    return 0;
}

