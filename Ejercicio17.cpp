#include <iostream>
#include <string>
using namespace std;

bool contieneApellido(const string &nombreCompleto, const string &apellido) {
    // Convertir ambos a minúsculas para comparar sin importar mayúsculas
    string nombreLower = nombreCompleto;
    string apellidoLower = apellido;

    for (int i = 0; i < nombreLower.length(); i++)
        nombreLower[i] = tolower(nombreLower[i]);

    for (int i = 0; i < apellidoLower.length(); i++)
        apellidoLower[i] = tolower(apellidoLower[i]);

    // Buscar el apellido dentro del nombre completo
    return nombreLower.find(apellidoLower) != string::npos;
}

int main() {
    string nombreCompleto, apellido;

    cout << "Ingresa el nombre completo: ";
    getline(cin, nombreCompleto);

    cout << "Ingresa el apellido a verificar: ";
    getline(cin, apellido);

    if (contieneApellido(nombreCompleto, apellido)) {
        cout << "✅ El apellido pertenece al nombre completo." << endl;
    } else {
        cout << "❌ El apellido NO pertenece al nombre completo." << endl;
    }

    return 0;
}