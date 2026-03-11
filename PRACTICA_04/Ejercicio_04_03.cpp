// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica 
// Fecha creación: 09/03/2026

#include <iostream>
using namespace std;
float volumen (float radio, float altura);
int main()
{
    float radio = 0;
    float altura = 0;
    system("cls");
    cout<<"ingrese el radio: ";
    cin>>radio;
    cout<<"ingrese la altura: ";
    cin>>altura;
    cout<<"el volumen del cilindro es: "<<volumen(radio,altura)<<endl;
    return 0;
}
float volumen (float radio, float altura)
{
    float volumen = 0;
    const float pi = 3.14;
    volumen = pi*radio*radio*altura;
    return volumen;
}
