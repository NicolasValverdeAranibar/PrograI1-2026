// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ing. Mecatronica
// Fecha creación: 11/02/2026
#include <iostream>
using namespace std;
int main()
{
    int meses = 0;
    system("cls");
    cout<<"Enero  Febrero  Marzo  Abril  Mayo  Junio  Julio  Agosto  Septiembre  Octubre  Noviembre  Diciembre"<<endl;
    cout<<"ingrese un numero entre 1 y 12: ";
    cin>>meses;
    switch (meses)
    {
    case 1:
        cout<<"enero";
        break;
    case 2:
        cout<<"Febrero";
        break;
    case 3:
        cout<<"Marzo";
        break;
    case 4:
        cout<<"Abril";
        break;
    case 5:
        cout<<"Mayo";
        break;
    case 6:
        cout<<"Junio";
        break;
    case 7:
        cout<<"Julio";
        break;
    case 8:
        cout<<"Agosto";
        break;
    case 9:
        cout<<"Septiembre";
        break;
    case 10:
        cout<<"Octubre";
        break;
    case 11:
        cout<<"Noviembre";
        break;
    case 12:
        cout<<"Diciembre";
        break;
    default:
        cout<<"mes invalido";
        break;
    }
    return 0;
}