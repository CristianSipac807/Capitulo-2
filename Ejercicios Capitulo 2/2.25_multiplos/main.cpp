#include <iostream>

using namespace std;

int main()
{
    cout << "Identificador de multiplos";
    int v1, v2;
    int a=0;
    cout << "Ingrese el primer valor: ";
    cin >> v1;
    cout << "Ingrese el segundo valor: ";
    cin >> v2;

    a = v1%v2;
    if (a==0){
        cout << v1 << " Si es multiplo de " << v2 << endl;
    }
    else{
        cout << v1 << " No es multiplo de " << v2 << endl;
    }
    return 0;
}
