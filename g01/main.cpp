#include <iostream>

using namespace std;


        /* Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
           por un operario y el valor que se le paga por hora trabajada y listar por pantalla
          00 el sueldo que le corresponda.*/

    int main()
{
     float horasTrabajadas;
float valorHora;
float sueldo;

cout<<"Ingrese las horas trabajadas: ";
cin>>horasTrabajadas;
cout<<"ingrese las valor de la hora: ";
cin>>valorHora;

sueldo = horasTrabajadas*valorHora;
cout<<"el resultado es: "<<sueldo;
    return 0;
}

