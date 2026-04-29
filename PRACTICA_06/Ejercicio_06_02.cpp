// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Fecha creación: 01/04/2026
// Número de ejercicio: 2

#include <iostream>

using namespace std;

void calcularvolumen(float radio, float altura);

int main()
{
    float radio = 0;
    float altura = 10.00;
    system("cls");
    cout<<"ingrese un valor para volumen: ";
    cin>>radio;
    calcularvolumen(radio, altura);
    return 0;
}
void calcularvolumen(float radio, float altura)
{
    float volumen = 0;
    volumen = 3.14 * radio * radio * altura;
    cout<<"el volumen es: "<<volumen<<endl;
}
