//Contar la ocurrencia de una letra específica en una cadena de entrada

#include <iostream>
using namespace std;

void contarOcurrencias(char cadena[], char letra, int &contadorLetras) {
    int n = 0;
    contadorLetras = 0;
    while (cadena[n] != '\0') {
        if (cadena[n] == letra || cadena[n] == toupper(letra) || cadena[n] == tolower(letra)) {
            contadorLetras++;
        }
        n++;
    }
}

void leerCadena(char cadena[]) {
    cout << "==========================================" << endl; 
    cout << "   CONTADOR DE OCURRENCIAS DE UNA LETRA   " << endl;
    cout << "\nIngrese una frase: ";
    cin.getline(cadena, 200); 
}

int main(){
    char cadena[200], letra;
    int contadorLetras = 0;
    leerCadena(cadena);
    cout << "Ingrese la letra a contar: ";
    cin >> letra;
    contarOcurrencias(cadena, letra, contadorLetras);
    cout << "La letra '" << letra << "' aparece " << contadorLetras << " veces en la frase." << endl;
    cout << "\nFin del programa....." << endl;
    cout << "==========================================" << endl;
    return 0;
}
