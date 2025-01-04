#include <iostream>

using namespace std;
   /* 3 Unaconcesionaria deautos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido.
       Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
       Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800. */


int main()

{ int CantidadAutosVendidos ;
  const float SueldoFijo = 5000;
  const float Premio = 700;
  cout<<"ingrese autos vendidos:";
  cin>>CantidadAutosVendidos;
  float SueldoFinal = SueldoFijo+CantidadAutosVendidos*Premio;
  cout<<" el total a pagar es $" << SueldoFinal;

    return 0;
}
