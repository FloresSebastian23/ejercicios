#include <iostream>

using namespace std;

int main()
{
  float ImporteVenta;

   cout << " ingrese importe de venta:";
  cin >> ImporteVenta ;

  if (ImporteVenta < 100){
    ImporteVenta = ImporteVenta*0.95;
}
 else if (ImporteVenta > 100 && ImporteVenta <= 300 )
{
    ImporteVenta= ImporteVenta*0.90;
 }
   else {
    ImporteVenta= ImporteVenta*0.85;
   }
   cout << " el importe a pagar es:" << ImporteVenta << endl;
    return 0;
}
