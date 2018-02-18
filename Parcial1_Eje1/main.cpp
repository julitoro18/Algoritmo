#include <iostream>

using namespace std;

int main()
{
    cout << "Parcial 1 - Algoritmo Suma" << endl << endl;
    //Realizar un algortimo que pida tres números e indicar si el tercero es igual a la suma del primero y el segundo.

    float Num1 = 0, Num2 = 0, Num3 = 0; //Defino variables: 3 numeros de input.
    cout << "Entre el primer numero: " << endl; //Input del usuario - Variable 1
    cin >> Num1; // Asigno numbre a la variable 1
    cout << "Entre el segundo numero: " << endl; //Input del usuario - Variable 2
    cin >> Num2; //Asigno numbre a la variable 2
    cout << "Entre el tercer numero: " << endl; //Input del usuario - Variable 3
    cin >> Num3; //Asigno numbre a la variable 3
    if (Num1 + Num2 == Num3) //Condicional que define la operacion
    {
        cout << "La suma de los dos primeros numeros es igual al tercero. " << endl << endl; //Output si la condicion se cumple
    }
    else
    {
        cout << "La suma de los dos primeros numeros NO es igual al tercero. " << endl << endl;// Outpur si la condicion no se cumple
    }

    return 0;
}
