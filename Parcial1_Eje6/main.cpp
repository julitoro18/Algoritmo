#include <iostream> //Processor directive

using namespace std; //Directive to invoke standard function names

//Start Program
int main()
{
    //Program explainer
    cout << endl << endl;
    cout << "Dado un monto calcular el descuento considerando que: por encima de 10000 el descuento es el 20% y por debajo de 10000 el descuento es el 10%." << endl;

    //Declare variables to store a floating point
    float descuento = 0, monto = 0, nuevoMonto = 0;

    cout << "Entre el Monto: ";
    cin >> monto; //Store varible given user input

    //Invoke if function & declare condition
    if (monto > 10000)
    {
      descuento = monto * 0.20; //Apply this discount if condition is met
    }

    else
    {
      descuento = monto * 0.10; //Apply this discount if els
    }

    nuevoMonto = monto - descuento; //Operation that subtacts the discounted amount from the total and stores it in a new variable
    cout << "El descuento es de: " << descuento << endl; //Display discount amount
    cout << "El nuevo monto es de: " << nuevoMonto << endl << endl; //Display new total amount

    //Return to OS
    return 0;
}
