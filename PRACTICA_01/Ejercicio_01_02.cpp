// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ing. Mecatronica
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;
int main()
{
    int pProducto = 0;
    int iva = 0;    
    system("cls");
    cout<<"ingrese el valor del producto: ";
    cin>>pProducto;
    iva=pProducto*0.13;
    cout<<"el iva es: "<<iva;

    return 0;
}