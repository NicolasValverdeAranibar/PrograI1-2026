// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica 
// Fecha creación: 09/03/2026

#include <iostream>
using namespace std;
float cambio_oficial (float monto);
float cambio_paralelo(float monto);
int main()
{
    float monto = 0;
    system("cls");
    cout<<"ingrese el monto a convetir a dolares: ";
    cin>>monto;
    cout<<"la conversion a cambio oficial es: "<<cambio_oficial(monto)<<endl;
    cout<<"la conversion a cambio paralelo es: "<<cambio_paralelo(monto)<<endl;    
    return 0;
}
float cambio_oficial (float monto) 
{
    float oficial = 6.97;
    monto /= oficial;
    return monto; 
}
float cambio_paralelo(float monto)
{
    float paralelo = 9.17;
    monto /= paralelo;
    return monto; 
}