//Invertir un vector e imprimirlo 
#include <iostream>
using namespace std;

const int MAX = 200; 

void leerVector(int vec[], int n) {
    for (int i = 0; i < n ; i++){
        cout << "Elemento [" << i << "]: " ;
        cin >> vec[i];
    }
}

void invertirImprimir(int vec[], int n){
    cout << "\nVector invertido -----" << endl;
    int temp;
    for (int i = 0; i < n / 2 ; i++ ){
        temp = vec[i];
        vec[i] = vec[n - 1 - i];
        vec[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++ ){
        cout << "Elemento [" << i << "]: " << vec[i] << endl;
    }
}

int main(){
    int vec[MAX];
    int n; 
    cout << "===================================================" << endl; 
    cout << "        INVERTIR LOS ELEMENTOS DE UN VECTOR        " << endl;
    cout << "Cuantos elementos tendra el vector? (1 a " << MAX << "): ";
    cin >> n;
    if (n < 1 || n > MAX) {
        cout << "Error. Cantidad invalida." << endl;
        return 1;
    }
    leerVector(vec, n);
    invertirImprimir(vec, n);
    return 0;

}