
#include <iostream>

using namespace std;


int Fact(int n) {
    if (n >= 0 && n <= 1)  //Si n es 0 o es el número 1, el factorial es 1 
        return 1;
    else
        return n * Fact(n - 1);
}
int main() {
    int numero;
    cout << "Por favor ingrese el numero:" << endl;
    cin >> numero;
    cout << "El factorial es " << Fact(numero);

}