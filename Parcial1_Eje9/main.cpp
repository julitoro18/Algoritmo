#include <iostream>

using namespace std;

int main()
{
    cout << endl << endl;
    cout << "Este programa determina la eficiencia del consumo de una platnta termo electrica" << endl << endl;

    float consumo;

    cout << "Entre el consumo en Kw: ";
    cin >> consumo;

    if (consumo > 8000 && consumo <= 10000)
    {
        cout << "CONSUMO MEDIO" << endl;
    }

    if (consumo > 10000)
    {
        cout << "CONSUMO ALTO DE ENERGIA" << endl << endl;
    }

    return 0;
}
