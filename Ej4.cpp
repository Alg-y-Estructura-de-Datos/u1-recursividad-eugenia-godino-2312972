#include <iostream>
using namespace std;

int mayor (int a[], int n){
    if (n == 1){
        return a[0];
    } 
    int maximo = mayor (a, n-1);
    if (a[n-1] > maximo){
        return a[n-1];
    } else {
        return maximo;
    }
}


int main (){
    int n;
    int a[100];
    for (int i =0; i<n; i++){
        cout << "Ingrese " << i+1 << " : ";
        cin >> a[i];
    }
    cout << "El numero mas grande del vector es: " << mayor (a, n) << endl;
    return 0;
}