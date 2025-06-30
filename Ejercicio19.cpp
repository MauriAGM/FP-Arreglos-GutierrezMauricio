#include <iostream>
#include <string>
#include <cctype>  // Para isalpha, tolower
using namespace std;

bool esPalindromo(const string &frase) {
    string limpia = "";

    // Eliminar espacios, signos y dejar solo letras en minúscula
    for (int i = 0; i < frase.length(); i++) {
        if (isalpha(frase[i])) {
            limpia += tolower(frase[i]);
        }
    }

    // Verificar si es palíndromo
    int i = 0, j = limpia.length() - 1;
    while (i < j) {
        if (limpia[i] != limpia[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string frase;

    cout << "Ingresa una frase: ";
    getline(cin, frase);

    if (esPalindromo(frase)) {
        cout << "✅ La frase ES un palíndromo." << endl;
    } else {
        cout << "❌ La frase NO es un palíndromo." << endl;
    }

    return 0;
}