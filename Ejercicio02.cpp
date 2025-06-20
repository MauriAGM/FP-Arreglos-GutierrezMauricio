//Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada. sin getline

#include<iostream>
using namespace std;

void separarPalabras(char cadena[]) {
    int n = 0;
    while (cadena[n] != '\0') {
        if (cadena[n] == ' ') {
            cadena[n] = '\n'; 
        }
        n++;
    }
}

void leerFrase(char frase[]) {
    cout << "=========================================" << endl;
    cout << "ECO DE PALABRAS EN LINEAS SEPARADAS" << endl;
    cout << "\nIngrese una frase: ";
    cin.getline(frase, 200); 
    // SE USA GETLINE PARA LEER UNA FRASE CON ESPACIOS "CIN.GETLINE(ARREGLO, TAMANO)"
}

int main(){
    char frase[200];
    leerFrase(frase);   
    separarPalabras(frase);
    cout << "Frase con palabras separadas:" << endl;
    cout << frase;
    cout << endl;
    cout << "\nFin del programa....." << endl;
    cout << "=========================================" << endl;
    return 0;
}
