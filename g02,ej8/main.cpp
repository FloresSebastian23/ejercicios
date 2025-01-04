#include <iostream>

using namespace std;

int main()
{
    int Lado1,Lado2,Lado3;

     cout << " ingrese una medida:";
     cin >> Lado1;
     cout << " ingrese una medida:";
     cin >> Lado2;
     cout << " ingrese una medida:";
     cin >> Lado3;

     if (Lado1==Lado2&&Lado2==Lado3){
        cout << " es un triangulo equilatero ";
     }
     else if (Lado1!=Lado2&&Lado1!=Lado3){
        cout << " es un triangulo escaleno ";
     }
     else {
        cout << " es un triangulo isosceles ";
     }
     cout << endl;



    return 0;
}
