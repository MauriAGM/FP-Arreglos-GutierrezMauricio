#include <iostream>
using namespace std;

// Función personalizada para concatenar str2 al final de str1
void mistrcat(string &str1, const string &str2) {
    for (int i = 0; i < str2.length(); i++) {
        str1 += str2[i]; // Agrega carácter por carácter
    }
}

int main() {
    string str1, str2;

    cout << "Ingresa la primera cadena (str1): ";
    getline(cin, str1);

    cout << "Ingresa la segunda cadena (str2): ";
    getline(cin, str2);

    mistrcat(str1, str2);

    cout << "Cadena concatenada en str1: " << str1 << endl;

    return 0;
}

