//Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos. 

#include <iostream>
using namespace std;
const int MAX = 100;
const int TAM = 30;

void leerNombres(char nombres[][TAM], int n){
    for (int i = 0; i < n; i++) {
        cout << "Nombre " << (i + 1) << ": ";
        cin.getline(nombres[i], TAM);
    }
}


void ordenarnombres(char nombres[][TAM], int n) {
    char temp[TAM]; 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = 0;
            while (nombres[i][k] != '\0' && nombres[j][k] != '\0' && nombres[i][k] == nombres[j][k]) {
                k++;
            }
            if (nombres[i][k] > nombres[j][k]) {
                for (int m = 0; m < TAM; m++) {
                    temp[m] = nombres[i][m];
                    if (nombres[i][m] == '\0') break;
                }
                for (int m = 0; m < TAM; m++) {
                    nombres[i][m] = nombres[j][m];
                    if (nombres[j][m] == '\0') break;
                }
                for (int m = 0; m < TAM; m++) {
                    nombres[j][m] = temp[m];
                    if (temp[m] == '\0') break;
                }
            }
        }
    }
}
int main(){    
    char nombres[MAX][TAM];
    int n;
    cout << "Cantidad de nombres: ";
    cin >> n;
    leerNombres(nombres, n);
    ordenarnombres(nombres, n);
    cout << "\nNombres ordenados alfabéticamente:\n";
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << endl;
    }
    return 0;
}