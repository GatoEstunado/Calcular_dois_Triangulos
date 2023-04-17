#include <iostream>
#include <math.h>
using namespace std;

//
double calcularAreaTriangulo (double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt (p* (p -a) * (p - b) * (p - c));
}

int main () {
    double xa, xb, xc, ya, yb, yc;
    
    //
    cout << "Digite as medidas dos lados do triangulo X (separados por espaço): " << endl;
    cin >> xa >> xb >> xc;
    
    //
    cout << "Digite as medidas dos lados do triangulo Y (separados por espaço): " << endl;
    cin >> ya >> yb >> yc;
    
    //
    double areaX = calcularAreaTriangulo (xa, xb, xc);
    double areaY = calcularAreaTriangulo (ya, yb, yc);
    
    //
    cout << "Área do triangulo X: " << areaX << endl;
    cout << "Área do triangulo Y: " << areaY << endl;
    
    //
    if (areaX > areaY) {
        cout << "O triangulo X tem a maior área." << endl;
    } else if (areaX < areaY) {
        cout << "O triangulo Y tem a maior área." << endl;
    } else {
        cout << "Os triangulos tem a mesma área." << endl;
    }
    return 0;
} 