#include <iostream>
using namespace std;

bool digito (int n, int d){
    if (n == 0){
        return false;
    } 
    if (n % 10 == d) {
        return true;
    }
    return digito (n / 10, d);
}

int main (){
    int n, d;
    cout << "Ingrese un numero positivo: ";
    cin >> n;
    cout << "Ingrese un digito: ";
    cin >> d;
    cout << digito (n, d);
}