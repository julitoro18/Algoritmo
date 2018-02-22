#include <iostream>// Processor directive to include IO library

using namespace std; // Tell compilet to invoke standard function names

int main() //Start program with standard main function
{
    cout << endl << endl;
    cout << "Este programa expresa en horas, minutos y segundos un tiempo dado en segundos" << endl;//Program description

    int horas = 0, minutos = 0, segundos = 0; //Declare and store variables as integres

    cout << "Ingrese el tiempo en segundos: ";//Request imput from user
    cin >> segundos; // Assing variable

    horas = segundos / 3600; //Operation that converts the input into hours
    segundos = segundos % 3600; //Use modular division to find and assign the remaing value to the variable
    minutos = segundos / 60; //Operation that convers the seconds into minutes
    segundos = segundos % 60; //modular division to find the remaining value to the segundos variable

    cout << endl << endl;
    cout << horas << ":" << minutos << ":" << segundos << endl << endl; //Display output

    return 0;//Return value to OS
}
