#include <iostream>
using namespace std;

int par (int n, int pos = 0){
    if (n == 0){
        return 0;
    }
    int digito = n % 10;
    if (pos % 2 != 0 && digito % 2 == 0){
        return 1 + par (n / 10, pos + 1);
    } else {
        return par (n / 10, pos + 1);
    }
}

int main (){
    int n;
    cout << "Imgrese un numero: ";
    cin >> n;
    cout << "Cantidad de digitos pares en posiciones impares es: " << par(n) << endl;
    return 0;
}