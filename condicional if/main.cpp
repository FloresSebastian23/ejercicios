#include <iostream>

using namespace std;

int main()
{   float importeVenta, importeVentaConDescuento, porcentajeDescuento;

    cout << "ingresar valor de la venta sin descuento: ";
    cin >> importeVenta;
    cout << "ingresar valor con descuento: ";
    cin >> importeVentaConDescuento;

    porcentajeDescuento = 100 - (importeVentaConDescuento * 100 / importeVenta);
    cout << "El descuento aplicado es de: " << porcentajeDescuento << "%";

}

