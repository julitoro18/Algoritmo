#include <iostream> // Processor directive

using namespace std; // tell compiler to invoke standard functuin names

// Program Starts
int main()
{
    cout << endl << endl;
    cout << "Este programa calcula el area de un circulo siempre y cuando sea menor de 5000" << endl;

    double radio = 0, pi = 3.14286, area = 0; //declare a variable to store a double precission floating point

    cout << "Digite el radio del circulo: " << endl;
    cin >> radio;

    area = pi * radio * radio; //Operate the area of the circunference and store result in a variable

    // Invoke the if function and declare conditional
    if (area > 5000)
    {
        cout << "DATOS ERRONEOS" << endl; // Display result if conditional is true
    }

    else
    {
        cout << "El Area del Circulo Es: " << area << endl; // Display result otherwise
    }

    // Return to OS
    return 0;
}
