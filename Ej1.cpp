#include <iostream>
using namespace std;

int potencia (int base, int exponente){
    if (exponente == 0){
        return 1;
    } else {
        base = base * potencia (base, exponente-1);
    }
    return base;
}

int main() {
    int x, y;
    cout << "Ingrese base: " ;
    cin >> x;
    cout << "Ingrese exponente: ";
    cin >> y;
    cout << "La potencia de " << x << " elevado a la " << y << " es " << potencia(x, y);
}
