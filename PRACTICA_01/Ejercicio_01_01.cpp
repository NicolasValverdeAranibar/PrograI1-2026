// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ing. Mecatronica 
// Fecha creación: 11/02/2026

#include <iostream>
using namespace std;
int main()
{
    int num1 = 0;
    int num2 = 0;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;
    system("cls");  
    cout << "ingrese el valor del primer numero: ";
    cin >> num1;
    cout << "ingrese el valor del segundo numero: ";
    cin >> num2;
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1/num2;
    cout << "la suma es: "<< suma <<endl;
    cout << "la resta es: "<< resta <<endl;
    cout << "la multiplicacion es: "<< multiplicacion <<endl;
    cout << "la division es: "<< division <<endl;
    return 0;
}