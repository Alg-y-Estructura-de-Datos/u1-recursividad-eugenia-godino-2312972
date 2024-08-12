#include <iostream>
using namespace std;

int invertido (int n, int inver){
    if (n == 0){
        return 0;
    } else {
        inver = inver * 10 + n % 10;
        return invertido (n / 10, inver);
    }
}

int main() {
    int n;
    cout << "Ingrese un numero: " ;
    cin >> n;
    int inver = 0;
    cout << "El numero invertido es: " << invertido (n, inver) << endl;
    return 0;
}
