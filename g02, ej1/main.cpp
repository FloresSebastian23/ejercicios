#include <iostream>

using namespace std;

int main()
{
  int Numero;

  cout <<" ingrese numero:";
  cin >> Numero ;
  if ( Numero > 0 )
{    cout <<" el numero es positivo." ;
  }
  else  if (Numero < 0) {


  cout <<" el numero es negativo." ;
  }
  else {

    cout <<" el numero es cero." ;
  }
  cout << endl;
    return 0;
}
