#include <iostream>
#include <string>
using namespace std;

bool parentesisBalanceados(const string &frase) {
    int contador = 0;

    for (int i = 0; i < frase.length(); i++) {
        if (frase[i] == '(') {
            contador++;
        } else if (frase[i] == ')') {
            contador--;
            if (contador < 0) {
                return false; // Se cerró un paréntesis que no fue abierto
            }
        }
    }

    return contador == 0; // Debe quedar en cero si están balanceados
}

int main() {
    string frase;

    cout << "Ingresa una frase con paréntesis: ";
    getline(cin, frase);

    if (parentesisBalanceados(frase)) {
        cout << "✅ Los paréntesis están correctamente balanceados." << endl;
    } else {
        cout << "❌ Los paréntesis NO están balanceados." << endl;
    }

    return 0;
}