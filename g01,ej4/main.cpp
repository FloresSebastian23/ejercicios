#include <iostream>

using namespace std;
        /*  Hacerun programa para ingresar por teclado la cantidad de asientos totales en un avi�n
            y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupaci�n
             y el porcentaje de no ocupaci�n del mismo.*/

int main()
{
  int AsientosTotales;
  int PasajesVendidos;
  float PorcentajeOcupado;
  float PorcentajeDesocupado;

  cout<<" ingrese cantidad de asientos";
  cin>> AsientosTotales;
  cout<<" ingrese pasajes vendidos:";
  cin>> PasajesVendidos;


  PorcentajeOcupado = PasajesVendidos*100/AsientosTotales;
  PorcentajeDesocupado = 100 - PorcentajeOcupado;



  cout<< " el porcentaje ocupado es % " << PorcentajeOcupado <<" el porcentaje desocupado es % " << PorcentajeDesocupado ;


 return 0;
}
