#include <iostream>
#include <cmath>
using namespace std;

// Introduzir a "Classe", triângulo, ondem as operações serão acionadas
class Triangulo {
// Variáveis privadas
private:
    double a, b, c;

// Variáveis públicas
public:
    Triangulo (double lado1, double lado2, double lado3) {
        a = lado1;
        b = lado2;
        c = lado3;
    }
    
    // Realizar o cálculo da área do triângulo
    double calcularArea() {
    
        double p = (a + b + c) / 2;
        double area = sqrt (p* (p -a) * (p - b) * (p - c));
        return area;
    }
    
    // "Get" pega a informação e devolve á sua fonte
    double getLado1() { return a; }
    double getLado2() { return b; }
    double getLado3() { return c; }
};

// Função principal
int main () {
    double a, b, c;
    
    // Interface do usuario e recebimento dos valores de X
    cout << "Digite as medidas dos lados do triangulo X (separados por espaco): " << endl;
    cin >> a >> b >> c;
    // Criar pela "Classe" uma subclasse, Triângulo X
    Triangulo X (a, b, c);
    
    // Interface do usuario de recebimento dos valores de Y
    cout << "Digite as medidas dos lados do triangulo Y (separados por espaco): " << endl;
    cin >> a >> b >> c;
    // Criar pela "Classe" uma subclasse, Triângulo Y
    Triangulo Y (a, b, c);
    
    
    // Introduzindo a "Area" e realizando o calculo
    double areaX = X.calcularArea ();
    double areaY = Y.calcularArea ();
    
    // Entrega dos valores das areas para o usuario
    cout << "Area do triangulo X: " << areaX << endl;
    cout << "Area do triangulo Y: " << areaY << endl;
    
    // Condição If/Else para derteminar a maior área, ou se são iguais
    if (areaX > areaY) {
        cout << "O triangulo X tem a maior area." << endl;
    } else if (areaX < areaY) {
        cout << "O triangulo Y tem a maior area." << endl;
    } else {
        cout << "Os triangulos tem a mesma area." << endl;
    }
    return 0;
} 
