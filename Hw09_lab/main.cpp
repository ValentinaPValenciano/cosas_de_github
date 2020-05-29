#include <iostream>
using namespace std;

// Función que retorna un array utilizando el apuntador (*)
double * suma(double a[2], double b[2]){
    double * c = new double[2];
    c[0] = a[0] + b[0];
    c[1] = a[1] + b[1];
    return c;
}

int main(){
    // Creamos dos arrays que contengan números de doble precisión
    double X[2] = {3.24, -4.333};
    double Y[2] = {6.76, -5.667};
    
    // Generamos un tercer array con el apuntador (*)
    double * Z = suma(X, Y);
    
    // Imprimirmos los dos elementos de Z.
    for(int i=0; i<2; i++)
        cout << Z[i] << endl;
    return 0;
}
