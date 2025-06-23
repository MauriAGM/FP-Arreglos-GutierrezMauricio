//Calcular la suma de elementos positivos y negativos en un arreglo
#include <iostream>
using namespace std;

void leerArreglo(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> v[i];
    }
}

void sumarPositivosNegativos(int v[], int n) {
    int sumaPositi = 0, sumaNegati = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > 0)
            sumaPositi += v[i];
        else if (v[i] < 0)
            sumaNegati += v[i];
    }
    cout << "\nSuma de positivos: " << sumaPositi << endl;
    cout << "Suma de negativos: " << sumaNegati << endl;
}
int main() {
    int n;
    cout << "Cuantos elementos tendra el arreglo? ";
    cin >> n;
    int vector[n];
    if (n < 1) {
        cout << "Error: cantidad no válida.\n";
        return 1;
    }
    leerArreglo(vector, n);
    sumarPositivosNegativos(vector, n);
    return 0;
}
