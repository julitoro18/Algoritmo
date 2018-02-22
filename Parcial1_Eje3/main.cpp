#include <iostream> //processor directive to include io library

using namespace std; //Tell compiler to iclude standard function names

//Realizar un algoritmo que lea un importe bruto y calcule su importe neto,
//si es mayor de 15.000 se le aplicará un 16% de impuestos, en caso contrario se le aplicará un 10%.

int main() //Start program
{
    cout << "Algoritmo Importe Bruto" << endl << endl; //Program title
    float ImpBruto = 0, ImpNeto = 0; //Defino la variables
    cout << "Ingrese El Importe Bruto: " << endl; //Imput del usuario valor de ingreso bruto
    cin >> ImpBruto; // Asigno el numbre de la variable
    if (ImpBruto > 15000) //Condicional para determinar el porcentage de carga
    {
        ImpNeto = ImpBruto * 1.16; //Operacion que adiciona el 16% a el ingreso bruto si el condicional se cumple
    }
    else
    {
        ImpNeto = ImpBruto * 1.10; // Opercacion que adiciona el 10% de lo contrario
    }
    cout << "El Importe Neto es: " << ImpNeto << endl; // Muestra de salida
    
    return 0; //Return value to OS
}
