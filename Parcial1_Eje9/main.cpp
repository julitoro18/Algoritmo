#include <iostream>// Processor directive to include IO library

using namespace std; // Tell compilet to invoke standard function names

int main() // Start program with standard function
{
    cout << endl << endl;
    cout << "Este programa determina la eficiencia del consumo de una platnta termo electrica" << endl << endl; //Program description

    float consumo; //Declare variable and store in floating point

    cout << "Entre el consumo en Kw: "; //Ask for user input
    cin >> consumo; //Assign variable

    if (consumo > 8000 && consumo <= 10000) //Invoke if conditional to define parameters for "Consumo Medio"
    {
        cout << "CONSUMO MEDIO" << endl; //Display output if condition is true
    }

    if (consumo > 10000) //Invoke if conditional to define "Consumo Alto" parameters
    {
        cout << "CONSUMO ALTO DE ENERGIA" << endl << endl; //Display output if the conditional is true
    }

    return 0; //Return value to OS
}
