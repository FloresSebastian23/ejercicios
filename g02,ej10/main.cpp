#include <iostream>

using namespace std;

int main()
{
    int Valor1,Valor2,Valor3,Valor4,Valor5;
    int Maximo , Minimo ;

     cout << " ingrese un numero:";
     cin >> Valor1 ;
     cout << " ingrese un numero:";
     cin >> Valor2 ;
     cout << " ingrese un numero:";
     cin >> Valor3 ;
     cout << " ingrese un numero:";
     cin >> Valor4 ;
     cout << " ingrese un numero:";
     cin >> Valor5 ;

     if (Valor1>Valor2){
        Maximo=Valor1;
        Minimo=Valor2;
     }
     else {
        Maximo=Valor2;
        Minimo=Valor1;
     }
     if (Valor3>Maximo){
        Maximo=Valor3;
     }
     else if (Valor3<Minimo){
        Minimo=Valor3;
     }
     if (Valor4>Maximo){
        Maximo=Valor4;
     }
     else if (Valor4<Minimo){
        Minimo=Valor4;
     }
     if (Valor5>Maximo){
        Maximo=Valor5;
     }
     else if (Valor5<Minimo){
        Minimo=Valor5;
     }
     cout << " el numero mayor es:"<< Maximo <<endl;
     cout << " el numero menor es:"<< Minimo <<endl;






    return 0;
}
