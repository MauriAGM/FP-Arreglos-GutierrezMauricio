#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MESES = 12;
    string nombresMeses[MESES] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                                   "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

    float ventas[MESES];
    float suma = 0;

    // Ingresar ventas
    cout << "Ingresa las ventas de cada mes del año 2020:\n";
    for (int i = 0; i < MESES; i++) {
        cout << nombresMeses[i] << ": ";
        cin >> ventas[i];
        suma += ventas[i];
    }

    float promedio = suma / MESES;

    // Calcular niveles
    int minimo = 0, regular = 0, excelente = 0;
    cout << "\nMeses con ventas EXCELENTES:\n";

    for (int i = 0; i < MESES; i++) {
        float porcentaje = (ventas[i] / promedio) * 100;

        if (porcentaje < 40)
            minimo++;
        else if (porcentaje <= 75)
            regular++;
        else {
            excelente++;
            cout << "- " << nombresMeses[i] << endl;
        }
    }

    // Mostrar resultados
    cout << "\nPromedio anual de ventas: " << promedio << endl;

    cout << "Porcentaje de meses:\n";
    cout << "- Nivel Mínimo: " << (minimo * 100.0 / MESES) << "%" << endl;
    cout << "- Nivel Regular: " << (regular * 100.0 / MESES) << "%" << endl;
    cout << "- Nivel Excelente: " << (excelente * 100.0 / MESES) << "%" << endl;

    return 0;
}