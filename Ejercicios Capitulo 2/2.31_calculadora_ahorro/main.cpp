#include <iostream>

using namespace std;

int main()
{
    cout << "Calculadora de ahorro por viajes compartidos en Mazda 3, modelo 2010" << endl;
    cout << "Bienvenido a nuestra aplicacion de ahorro, con nosotros aprenderas el costo que produce tu mazda" <<endl;
    float km, cosgas, promgas, cuota, peaje;
    float total1, total2, totalf;
    cout << "Iniciemos"<<endl;
    cout << "Cual es el total de kilometros recorridos el dia de hoy?" <<endl;
    cin >> km;
    cout << "Cual es costo por litro de gasolina?"<<endl;
    cin >> cosgas;
    cout << "Cual es el promedio de kilometros por litro"<<endl;
    cin >> promgas;
    cout << "Cual es su cuota de estacionamiento?"<<endl;
    cin >> cuota;
    cout << "Cual fue el costo de peaje del dia de hoy?"<<endl;
    cin >> peaje;
    total1 = cosgas/promgas;
    total2 = total1 * km;
    totalf = total1 + total2 +peaje;
    cout<<"El costo total en un dia de viaje es de: Q"<<totalf;
    return 0;
}
