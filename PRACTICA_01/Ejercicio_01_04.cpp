// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ing. Mecatronica
// Fecha creación: 12/02/2026
#include <iostream>
using namespace std;
int main()
{
    float notapract = 0;
    float notateorica = 0;
    float notapart = 0;
    float notafinal = 0;
    system("cls");
    cout <<"ingrese la nota de las practicas: ";
    cin>>notapract;
    cout <<"ingrese la nota teorica: ";
    cin>>notateorica;
    cout <<"ingrese la nota de participacion: ";
    cin>>notapart;
    notapract = (notapract*30)/100;
    cout<<"la nota practica es: "<<notapract<<endl;    
    notateorica = (notateorica*60)/100;
    cout<<"la nota teorica es: "<<notateorica<<endl;
    notapart = (notapart*10)/100;
    cout<<"la nota de participaciones: "<<notapart<<endl;
    notafinal = notapart+notapract+notateorica;
    cout<<"la nota final es: "<<notafinal;
    return 0;
}