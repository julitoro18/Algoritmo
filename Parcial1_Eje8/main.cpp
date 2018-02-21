#include <iostream>

using namespace std;

int main()
{
    cout << endl << endl;
    cout << "Este programa calcula el salario de un trabajador dadas las horas trabajadas y la tarifa por hora" << endl << endl;

    //Assign variables to floating points
    float horas = 0, tarifa = 0, horasExtra = 0, tarifaHorasExtra = 0, salario = 0;

    //Request user imput for total hours and assign to variable
    cout << "Entre las horas trabajadas: ";
    cin >> horas;

    //Request user imput for cost per hour and assign to variable
    cout << "Entre la tarifa por hora: ";
    cin >> tarifa;

    //Calculate cost of overtim per hour
    tarifaHorasExtra = tarifa * 1.5;

    //invoke conditional if person worked overtime
    if (horas > 40)
    {
        horasExtra = horas - 40; //Operation to calculate number of overtime hours
        salario = (tarifa * horas) + (tarifaHorasExtra * horasExtra); //Operation to calculate salary if perosn worked overtime

    }

    else //invoke conditional if person didn't work overtime
    {
        salario = tarifa * horas; //Operation to calculate salary if perosn didnt worked overtime
    }

    cout << "Tarifa por Hora Extra: " << tarifaHorasExtra << endl; //Display cost per overtime hour
    cout << "Horas Extra Trabajadas: " << horasExtra << endl; //Display overtime hours
    cout << "Salario Total: " << salario << endl; //Display total salary

    return 0;
}
