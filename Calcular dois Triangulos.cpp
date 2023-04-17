#include <iostream>
#include <math.h>
using namespace std;

// Adicionando as variaveis e desenvolvendo a conta a ser feita
double calcularAreaTriangulo (double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt (p* (p -a) * (p - b) * (p - c));
}

int main () {
    double xa, xb, xc, ya, yb, yc;
    
    // Interface do usuario e recebimento dos valores de X
    cout << "Digite as medidas dos lados do triangulo X (separados por espaco): " << endl;
    cin >> xa >> xb >> xc;
    
    // Interface do usuario de recebimento dos valores de Y
    cout << "Digite as medidas dos lados do triangulo Y (separados por espaco): " << endl;
    cin >> ya >> yb >> yc;
    
    // Introduzindo a "Area" e realizando o calculo
    double areaX = calcularAreaTriangulo (xa, xb, xc);
    double areaY = calcularAreaTriangulo (ya, yb, yc);
    
    // Entrega dos valores das areas para o usuario
    cout << "Area do triangulo X: " << areaX << endl;
    cout << "Area do triangulo Y: " << areaY << endl;
    
    // Condicao If/Else para derteminar a maior area, ou se sao iguais
    if (areaX > areaY) {
        cout << "O triangulo X tem a maior area." << endl;
    } else if (areaX < areaY) {
        cout << "O triangulo Y tem a maior area." << endl;
    } else {
        cout << "Os triangulos tem a mesma area." << endl;
    }
    return 0;
} 
