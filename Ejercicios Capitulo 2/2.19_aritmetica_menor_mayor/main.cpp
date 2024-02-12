#include <iostream>

using namespace std;

int main()
{
    cout << "Calculo de promedio, producto, menor y mayor" << endl;
    int numero1, numero2,numero3;
    cout << "Ingrese el primer valor: ";
    cin >> numero1;
    cout << "Ingrese el segundo valor: ";
    cin >> numero2;
    cout << "Ingrese el tercer valor valor: ";
    cin >> numero3;
    cout << "Los valores que se escogieron son: " << "\n" << numero1<< "\n" <<numero2<< "\n" << numero3<< "\n" << endl;
    int suma;
    suma = numero1 + numero2 + numero3;
    cout << "La suma de los 3 valores es: " << suma << endl;
    float promedio;
    promedio = suma/3;
    cout << "El promedio de los 3 valores es: " << promedio << endl;
    int producto;
    producto = numero1 * numero2 * numero3;
    cout << "El producto de los 3 valores es: " << producto << endl;
    int mayor;
    if (numero1 > numero2 && numero1 > numero3) {
            mayor = numero1;
    }
    else if (numero2 > numero1 && numero2 > numero3){
            mayor = numero2;
    }
    else if (numero3 > numero1 && numero3 > numero1){
            mayor = numero3;
    }
    cout << "El mayor de los 3 valores es: " << mayor << endl;
    int menor;
    if (numero1 < numero2 && numero1 < numero3) {
            menor = numero1;
    }
    else if (numero2 < numero1 && numero2 < numero3){
            menor = numero2;
    }
    else if (numero3 < numero1 && numero3 < numero1){
            menor = numero3;
    }
    cout << "El menor de los 3 valores es: " << menor << endl;
    return 0;
}
