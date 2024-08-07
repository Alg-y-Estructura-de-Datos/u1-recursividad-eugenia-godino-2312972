#include <iostream>
using namespace std;

int suma (int a){ 
    if ( a == 1){
        return 1;
    } else {
    return a + (suma (a - 1));
    }
}

int main() {
    int a; 
    cout << "Ingrese un numero: ";
    cin >> a; 
    cout << "La suma de todos los numeros hasta el " << a << " es de: " << suma (a) <<endl;
    return 0;
}
