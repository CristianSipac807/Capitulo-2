#include <iostream>

using namespace std;

int main()
{
    cout << "Mayor y Menor de 5 enteros";
    int a, b, c, d, e;
    int mayor;
    int menor;
    cout << "Ingrese el primer entero: ";
    cin >> a;
    cout << "Ingrese el segundo entero: ";
    cin >> b;
    cout << "Ingrese el tercer entero: ";
    cin >> c;
    cout << "Ingrese el cuarto entero: ";
    cin >> d;
    cout << "Ingrese el quinto entero: ";
    cin >> e;
    cout << "\n" << endl;
    if (a > b && a > c && a > d && a > e) {
            mayor = a;
    }
    if (b > a && b > c && b > d && b > e) {
            mayor = b;
    }
    if (c > a && c > b && c > d && c > e) {
            mayor = c;
    }
    if (d > b && d > c && d > a && d > e) {
            mayor = d;
    }
    if (e > a && e > b && e > c && e > d) {
            mayor = e;
    }
    cout << "El mayor es : " << mayor << endl;

    if (a < b && a < c && a < d && a < e) {
            menor = a;
    }
    if (b < a && b < c && b < d && b < e) {
            menor = b;
    }
    if (c < a && c < b && c < d && c < e) {
            menor = c;
    }
    if (d < b && d < c && d < a && d < e) {
            menor = d;
    }
    if (e < a && e < b && e < c && e < d) {
            menor = e;
    }
    cout << "El menor es : " << menor << endl;

    return 0;\
}
