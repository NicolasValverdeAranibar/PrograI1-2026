// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Fecha creación: 01/04/2026
// Número de ejercicio: 5

#include <iostream>
using namespace std;

double calcularArea(double lado);
double calcularArea(double base, double altura);
float calcularArea(float radio, float PI);

int main()
{
    double lado = 0;
    double base = 0;
    double altura = 0;
    float radio = 0;
    float PI = 3.1416;
    system("cls");
    cout<<"ingrese el valor del lado: ";
    cin>>lado;
    cout<<"ingrese el valor de base: ";
    cin>>base;
    cout<<"ingrese el valor de altura: ";
    cin>>altura;
    cout<<"ingrese el valor de radio: ";
    cin>>radio;
    cout<<"Cuadrado: "<<calcularArea(lado)<<endl;
    cout<<"Rectangulo: "<<calcularArea(base, altura)<<endl;
    cout<<"Circulo: "<<calcularArea(radio, PI)<<endl;
    return 0;
}
double calcularArea(double lado)
{
    return lado * lado;
}
double calcularArea(double base, double altura)
{
    return base * altura;
}
float calcularArea(float radio, float PI)
{
    return PI * radio * radio;
}