#include <iostream>

using namespace std;

int main()
{
    int Numero1,Numero2,Numero3;

     cout << " ingrese un numero:";
     cin >> Numero1;
     cout << " ingrese un numero:";
     cin >> Numero2;
     cout << " ingrese un numero:";
     cin >> Numero3;

     if (Numero1!=Numero2 && Numero2!=Numero3 && Numero3!=Numero2){

        cout << " los numeros son distintos";
     }
     cout << endl;




    return 0;
}
