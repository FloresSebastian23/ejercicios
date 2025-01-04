#include <iostream>

using namespace std;
   /* 5 Un comercio vende tres marcas de alfajores distintas A, B y C.
      Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas
      y luego se informe el porcentaje de ventas para cada una de ellas. */
int main()
{
 int Block, Pepito, Shot;
 float PorcentajeShot, PorcentajePepito, PorcentajeBlock;
 float TotalAlfajores;

 cout<< "ingrese cantidad de alfajores shot:";
 cin>> Shot;
 cout<< "ingrese cantidad de alfajores pepito:";
 cin>> Pepito;
 cout<< "ingrese cantidad de alfajores block:";
 cin>> Block;

 TotalAlfajores= Shot+Pepito+Block;

 PorcentajeBlock= Block*100/TotalAlfajores;
 PorcentajePepito= Pepito*100/TotalAlfajores;
 PorcentajeShot= Shot*100/TotalAlfajores;

 cout<< " el porcentaje de alfajores shot es de % " << PorcentajeShot << endl;
 cout<< " el porcentaje de alfajores pepito es de % " << PorcentajePepito << endl;
 cout<< " el porcentaje de alfajores block es de % " << PorcentajeBlock << endl;
 cout<< " el total de alfajores es " << TotalAlfajores << endl;

    return 0;
}
