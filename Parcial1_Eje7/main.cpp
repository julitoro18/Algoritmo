#include <iostream> //Processor directive

using namespace std; //Invoke standard names for functions

int main()
{
    cout << endl << endl;
    cout << "Este programa calcula el descuento y sueldo neto que recibe un trabajador dado su sueldo." << endl << endl; //Program heading

    float sueldo = 0, descuento = 0, sueldoNeto = 0; //Declare and store variables on a floating point

    cout << "Entre el sueldo del trabajador: "; //Request user imput
    cin >> sueldo; //Assign imput to sueldo variable

    if (sueldo <= 1000) //Invoke if function and declare conditional
    {
        descuento = sueldo * 0.10; //Operation that calculates discount if 1st statemte is true
    }

    if (sueldo > 1000 && sueldo <= 2000) //Declare second conditional
    {
        descuento = sueldo * 0.05; //Operation that calculates discount if 2nd conditional is true
    }

    else //Invoke else function
    {
        descuento = sueldo * 0.03; //Opertation that calculates discount if the two statements above are false
    }

    sueldoNeto = sueldo - descuento; //Operation that calculates net salary

    cout << "El descuento es de: " << descuento << endl; //Show discount output
    cout << "El sueldo Neto es de: " << sueldoNeto << endl << endl; //Show net salary

    return 0;
}
