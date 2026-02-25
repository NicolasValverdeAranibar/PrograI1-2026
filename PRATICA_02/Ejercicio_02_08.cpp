// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main()
{
    double prodructos = 0;
    double precio = 0;
    double total_sin_IVA = 0;
    double total_con_IVA = 0;
    double IVA = 0;
    double descuento = 0;
    double total = 0;
    system("cls");
    cout<<"ingrese la cantidad de productos vendidos en el dia: ";
    cin>>prodructos;
    for (int i = 1; i <= prodructos; i++)
    {
        cout<<"ingrese el precio del producto "<< i <<":";
        cin>>precio;
        total_sin_IVA += precio;   
    }
    IVA = total_sin_IVA * 0.13; 
    total_con_IVA = total_sin_IVA + IVA;
    if (total_con_IVA > 2500)
    {
        descuento = total_con_IVA * 0.05;
    }
    total = total_con_IVA - descuento;
    cout<<"el precio total sin IVA es: "<<total_sin_IVA<<endl;
    cout<<"el precio total con IVA es: "<<total_con_IVA<<endl;
    cout<<"su descueto sera: "<<descuento<<endl;
    cout<<"el total final vendido es: "<<total<<endl;
    cout<<"el IVA a pagar es de: "<<IVA<<endl;
    return 0;
}