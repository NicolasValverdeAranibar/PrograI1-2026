// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica 
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

float promedio(float num1, float num2);
int main()
{
    float num1 = 0;
    float num2 = 0;
    system("cls");
    cout<<"ingrese la primera nota: ";
    cin>>num1;
    cout<<"ingrese la segunda nota: ";
    cin>>num2;
    cout<<"el promedio aritmetico es: "<<promedio(num1,num2)<<endl;
    return 0;
}
float promedio(float num1, float num2)
{
    float prom = 0;
    prom = (num1 + num2) / 2;
    return prom;
}
