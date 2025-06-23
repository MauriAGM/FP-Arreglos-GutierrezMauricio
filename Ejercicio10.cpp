/*Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular 
estadísticas de tendencia central media, mediana y moda.*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generar(int v[]) {
    srand(time(0));
    for (int i = 0; i < 30; i++)
        v[i] = rand() % 901 + 100;
    cout << "Numeros generados:\n";
    for (int i = 0; i < 30; i++)
        cout << v[i] << " ";
    cout << endl;
}
void ordenar(int v[]) {
    for (int i = 0; i < 30 - 1; i++) {
        for (int j = 0; j < 30 - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}
void calcularEstadisticas(int v[]) {
    double media = 0;
    for (int i = 0; i < 30; i++)
        media += v[i];
    media /= 30;
    ordenar(v);  
    double mediana;
    if (30 % 2 == 0)
        mediana = (v[30/2 - 1] + v[30/2]) / 2.0;
    else
        mediana = v[30/2];
    int moda = v[0], maxRepite = 0;
    for (int i = 0; i < 30; i++) {
        int repite = 1;
        for (int j = i + 1; j < 30; j++)
            if (v[i] == v[j]) repite++;
        if (repite > maxRepite) {
            maxRepite = repite;
            moda = v[i];
        }
    };
    cout << "Media   : " << media << endl;
    cout << "Mediana : " << mediana << endl;
    cout << "Moda    : " << moda << endl;
}
int main() {
    int vec[30];
    generar(vec);
    calcularEstadisticas(vec);
    return 0;
}
