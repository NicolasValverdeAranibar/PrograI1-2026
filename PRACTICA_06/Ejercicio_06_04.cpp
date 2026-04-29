// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Fecha creación: 01/04/2026
// Número de ejercicio: 4

#include <iostream>

using namespace std;

void ModificarValores(int a, int &b);

int main(){
    int x = 5, y = 10;
    ModificarValores(x, y);
    cout<<"Fuera funcion -> x: "<<x<<" y: "<<y<<endl;
    return 0;
}
void ModificarValores(int a, int &b)
{
    a = a * 2;
    b = b + 10;
    cout<<"Dentro funcion -> a: "<<a<<" b: "<<b<<endl;
}