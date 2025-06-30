#include <iostream>
#include <string>
using namespace std;

// Función que compara dos cadenas y retorna:
//  0 si son iguales
//  1 si str1 > str2
// -1 si str2 > str1
int mistrcmp(const string &str1, const string &str2) {
    int n = min(str1.length(), str2.length());

    for (int i = 0; i < n; i++) {
        if (str1[i] < str2[i]) return -1;
        if (str1[i] > str2[i]) return 1;
    }

    // Si todos los caracteres son iguales hasta n, comparar longitud
    if (str1.length() == str2.length()) return 0;
    if (str1.length() > str2.length()) return 1;
    return -1;
}

int main() {
    string str1, str2;

    cout << "Ingresa la primera cadena: ";
    getline(cin, str1);

    cout << "Ingresa la segunda cadena: ";
    getline(cin, str2);

    int resultado = mistrcmp(str1, str2);

    if (resultado == 0)
        cout << "Las cadenas son iguales." << endl;
    else if (resultado == 1)
        cout << "La cadena 1 es mayor que la cadena 2." << endl;
    else
        cout << "La cadena 2 es mayor que la cadena 1." << endl;

    return 0;
}

