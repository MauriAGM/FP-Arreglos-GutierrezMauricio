//Convertir palabras a mayúsculas iniciales: "cáceres patrimonio de la humanidad" → "Cáceres Patrimonio De La Humanidad"
#include <iostream>
using namespace std;

void convertirMayusIniciales(char cadena[]) {
    int n = 0;
    while (cadena[n] != '\0') {
        if (n == 0 || cadena[n - 1] == ' ') {
            cadena[n] = toupper(cadena[n]); 
            //Toupper convierte a mayuscula la letra a menos que no sea una letra o ya esta en mayúscula 
        }
        n++;
    }
    cout << "Frase convertida : " << cadena << endl;
}

void decoracion() {
    cout << "-----------------------------------------------" << endl;
    cout << "CONVERTIDOR DE PALABRAS A MAYUSCULAS INICIALES" << endl;
    cout << "-----------------------------------------------" << endl;
}

int main(){
    decoracion();
    char frase[] = "caceres patrimonio de la humanidad";
    cout << "Frase original   : " << frase << endl;
    convertirMayusIniciales(frase);
    return 0;
}