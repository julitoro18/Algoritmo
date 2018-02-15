#include <iostream>

using namespace std;
// Algoritmo para imprimir el numero mayor de 3 numeros
int main()
{
    cout << "Algoritmo Numero Mayor" << endl << endl;
    float Num1 = 0, Num2 = 0, Num3 = 0; //Declaracion de variables.
    cout << "Entre El Primer Numero:" << endl; //EL usuario debe ingresar el primer numero
    cin >> Num1; //Se identifica la primera variable
    cout << "Entre El Segundo Numero:" << endl; //Segunda variable
    cin >> Num2;
    cout << "Entre El Tercer Numero:" << endl; //Tercera variable
    cin >> Num3;
    if (Num1 > Num2 && Num1 > Num3) //Condicional que compara el primer numero con los otors dos
    {
            cout << "El Primer Numero es Mayor: " << Num1 << endl; //Salida si el primer numero es mayor
    }
    else if (Num2 > Num1 && Num2 > Num3) //Condicionla que compara el segundo numero con los otros dos
    {
        cout << " El Segundo Numero es Mayor: " << Num2 << endl; //Salida si el segundo numero es mayor
    }
    else
    {
        cout << "El Tercer Numero es Mayor: " << Num3 << endl; //Salida si el numero es mayor
    }
    return 0;
}
