// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ing. Mecatronica
// Fecha creación: 12/02/2026
#include <iostream>
#include <math.h>
using namespace std;
int main()
{  
    float cateto1 = 0;
    float cateto2 = 0;
    float hipotenusa = 0;
    system("cls");
    cout<<"ingrese el valor del primer cateto: ";
    cin>>cateto1;
    cout<<"ingrese el valor del segundo cateto: ";
    cin>>cateto2;
    hipotenusa = sqrt((cateto1*cateto1)+(cateto2*cateto2));
    cout<<"la hipotenusa es: "<<hipotenusa<<endl;
    return 0;
}