// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica 
// Fecha creación: 09/03/2026

#include <iostream>
using namespace std;

float Area(float base, float altura);
int main()
{
    float base = 0;
    float altura = 0;
    system("cls");
    cout<<"ingrese la base: ";
    cin>>base;
    cout<<"ingrese la altura: ";
    cin>>altura;
    cout<<"el area es: "<<Area(base, altura)<<endl;
    return 0;
}

float Area(float base, float altura)
{
    float area = 0;
    area = (base*altura)/2;
    return area;
}