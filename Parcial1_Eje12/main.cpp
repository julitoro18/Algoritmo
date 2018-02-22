#include <iostream>

using namespace std;

int main()
{
    cout << endl << endl;
    cout << "Este programa pide tres numeros y detecta si estos han sido introducidos de forma creciente" << endl; //Program description

    float num1 = 0, num2 = 0, num3 = 0; //Declare variables and store as floating point

    cout << "Ingrese el primer numero: "; //User imput 1
    cin >> num1; //Assign variable

    cout << "Ingrese el segundo numero: "; //User imput 2
    cin >> num2; //Assign variable

    cout << "Ingrese el tercer numero:"; //User imput 3
    cin >> num3; //Assign variable

    if (num1 < num2 && num1 < num3 && num2 < num3) //invoke if function to compare numbers
    {
        cout << "Los numeros han sido introducidos de forma creciente" << endl << endl; //Output if condition is ture
    }

    else
    {
        cout << "Los numeros NO han sido introducidos de forma creciente" << endl << endl; //output of the condition above is not true
    }

    return 0;
}
