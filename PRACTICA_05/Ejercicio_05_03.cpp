// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Fecha creación: 11/03/2026
#include <iostream>
using namespace std;

float calcularSalario(int horas, float tarifa);
float calcularBonificacion(int horas, float tarifa);
int main()
{
    int horas;
    float tarifa;
    system("cls");
    cout<<"Ingrese horas trabajadas: ";
    cin>>horas;
    cout<<"Ingrese tarifa por hora: ";
    cin>>tarifa;
    float salario = calcularSalario(horas, tarifa);
    float bono = calcularBonificacion(horas, tarifa);
    cout<<"Salario: "<<salario<<endl;
    cout<<"Bonificacion: "<<bono<<endl;
    return 0;
}
float calcularSalario(int horas, float tarifa)
{
    float salario = 0;
    salario = horas * tarifa;
    return salario;
}

float calcularBonificacion(int horas, float tarifa)
{
    float bonificacion = 0;
    if(horas > 8){
        int extra = 0; 
        extra = horas - 8;
        bonificacion = extra * tarifa * 0.5; 
    }
    return bonificacion;
}