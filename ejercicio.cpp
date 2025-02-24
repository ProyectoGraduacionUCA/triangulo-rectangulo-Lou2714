#include <iostream>

using namespace std;

void imprimirTriangulo(int altura) {
    for (int i = 1; i <= altura; i++)
    {
        //Mientras el valor de j sea menos que i, va a imprimir j-veces el *, simboliza columnas
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        //Salto de linea
        cout << "\n";
    }
}

int main() {
    int n1, n2, n3;
    imprimirTriangulo(n1);
    imprimirTriangulo(n2);
    imprimirTriangulo(n3);
    return 0;
}
