// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Fecha creación: 11/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
int main()
{
    float productos = 0;
    float precios = 0;
    float iva = 0;
    float montofinal = 0;
    float descunto = 0;
    float sumafinal = 0;
    srand(time(NULL));
    system("cls");
    cout<<"ingrese la cantidad de productos vendidos: ";
    cin>>productos;
    for (int i = 1; i <= productos; i++)
    {
        precios = GenerarAleatorio(20,50);
        sumafinal +=precios;
        precios *= 0.13;
        iva += precios;
    }
    if (sumafinal >= 2500)
    {
        descunto = sumafinal * 0.05;
    }
    montofinal = sumafinal + iva + descunto;
    cout<<"la suma de los productos es: "<<sumafinal<<endl;
    cout<<"el Iva es de: "<<iva<<endl;
    cout<<"el descuento es de: "<<descunto<<endl;
    cout<<"el monto final es de: "<<montofinal<<endl;
    return 0;
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}