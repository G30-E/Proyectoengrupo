#include <iostream>
using namespace std;

void crearSecuenciaTribonacci(int totalElementos) {
    int valor1 = 0, valor2 = 1, valor3 = 1, proximoValor;

    cout << valor1 << " " << valor2 << " " << valor3 << " ";

    for (int indice = 3; indice < totalElementos; indice++) {
        proximoValor = valor1 + valor2 + valor3;
        cout << proximoValor << " ";
        valor1 = valor2;
        valor2 = valor3;
        valor3 = proximoValor;
    } //geofrey ando probando

    cout << endl;
}

int main() {
    int cantidadElementos;

    cout << "Ingrese el número total de elementos para la secuencia Tribonacci: ";
    cin >> cantidadElementos;

    if (cantidadElementos < 3) {
        cout << "Por favor, ingrese un valor mayor o igual a 3." << endl;
        return 1;
    }

    crearSecuenciaTribonacci(cantidadElementos);

    return 0;
}
