#include <iostream>
using namespace std;

void mistrcpy(string &str1, const string &str2) {
    str1 = ""; // Limpiar str1

    for (int i = 0; i < str2.length(); i++) {
        str1 += str2[i]; // Copiar carácter por carácter
    }
}

int main() {
    string str1, str2;

    cout << "Ingresa la cadena origen (str2): ";
    getline(cin, str2);

    mistrcpy(str1, str2);

    cout << "Cadena copiada en str1: " << str1 << endl;

    return 0;
}


