#include <iostream>// Processor directive to include io librery

using namespace std; //Tell compiler to invoke standard function names

int main() //Start program wiht the standard function
{
    cout << endl << endl;
    cout << "Este pograma pide 4 números y los muestre en pantalla de menor a mayor." << endl; //Program description

    int num1 = 0, num2 = 0, num3 = 0, num4 = 0, temp = 0; //Declare variables and store as integres

    //User imput & assign to vriables
    cout << "Entre el primer numero: ";
    cin >> num1;
    cout << "Entre el segundo numero: ";
    cin >> num2;
    cout << "Entre el tercer numero: ";
    cin >> num3;
    cout << "Entre el cuarto numero: ";
    cin >> num4;

    if (num1 > num2) //invoke if function to identify if first number is greater than the second
    {
        temp = num1; //if true, swap numbers
        num1 = num2;
        num2 = temp;
    }

    if (num1 > num3) //invoke if function to identify if first number is greater than the third
    {
        temp = num1; //if true, swap numbers
        num1 = num3;
        num3 = temp;
    }

    if (num1 > num4) //invoke if function to identify if first number is greater than the fourth
    {
        temp = num1; //if true, swap numbers
        num1 = num4;
        num4 = temp;
    }

    if (num2 > num3) //invoke if function to identify if second number is greater than the third
    {
        temp = num2; //if true, swap numbers
        num2 = num3;
        num3 = temp;
    }

    if (num2 > num4) //invoke if function to identify if second number is greater than the fourth
    {
        temp = num2; //if true, swap numbers
        num2 = num4;
        num4 = temp;
    }

    if (num3 > num4) //invoke if function to identify if third number is greater than the fourth
    {
        temp = num3; //if true, swap numbers
        num3 = num4;
        num4 = temp;
    }

    cout << "Los numeros en orden ascendente son: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl; //Display output

    return 0; //return value to the OS
}
