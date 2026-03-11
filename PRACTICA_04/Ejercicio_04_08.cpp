// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica 
// Fecha creación: 10/03/2026

#include <iostream>
using namespace std;

int digitos(int num);
int main()
{
    int num = 0;
    system("cls");
    cout<<"ingrese un numero: ";
    cin>>num;
    cout<<"el numero de digitos es: "<<digitos(num)<<endl;
    return 0;
}
int digitos(int num)
{
    int cont = 0;
    while (num > 0) {
        num /= 10; 
        cont++;    
    }
    return cont;
}