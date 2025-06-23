//Invertir un vector e imprimirlo 
#include <iostream>
using namespace std;

const int MAX = 200; 

void leerVector(int vec[], int n) {
    for (int i = 0; i < n ; i++){
        cin >> vec[i];
    }
}

void invertirImprimir(int vec[], int n){
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
    cin >> n; 

    leerVector(vec, n);
    invertirImprimir(vec, n);
    return 0;

}