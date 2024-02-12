#include <iostream>

using namespace std;

int main()
{
    char v1;
    cout << "Traductor a codigo ASCII" << endl;
    cout << "¿Que valor desea transformar a codigo ASCII?" << endl;
    cin >> v1;
    cout << "Su valor en codigo ASCII es igual a "<<static_cast<int>(v1);
    return 0;
}
