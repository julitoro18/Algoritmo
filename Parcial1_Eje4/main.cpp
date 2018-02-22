#include <iostream> //Processor directive

using namespace std; //Tell the compiler to invoke the name of standard functions

//start program
int main()
{
    cout << "Este programa asigna el dia de la semana segun el numero elegido" << endl; //Descripcion del programa

    int dia = 0; //Declare integer variable

    cout << "Entre un numero del 1 al 7: " << endl;
    cin >> dia;

    switch (dia) //Invoke switch function
    {
    case 1: //Declare operation for case 1
        cout << "Lunes" << endl << endl; //Display result if case one is true
        break; //Tell compiler to finish case
    case 2:
        cout << "Martes" << endl << endl; //Display result if case 2 is true
        break;
    case 3:
        cout << "Miercoles" << endl << endl; //Display result if case 2 is true
        break;
    case 4:
        cout << "Jueves" << endl << endl; //Display result if case 2 is true
        break;
    case 5:
        cout << "Viernes" << endl << endl; //Display result if case 2 is true
        break;
    case 6:
        cout << "Sabado" << endl << endl; //Display result if case 2 is true
        break;
    case 7:
        cout << "Domingo" << endl << endl; //Display result if case 2 is true
        break;
    }

    return 0; //Return to IO
}
