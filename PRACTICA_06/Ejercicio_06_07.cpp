// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Fecha creación: 01/04/2026
// Número de ejercicio: 7

#include <iostream>
using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota);

int main()
{
    int n;
    double nota, suma = 0;
    int contador = 0;
    system("cls");
    cout<<"Ingrese cantidad de notas: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Nota "<<i+1<<": ";
        cin>>nota;
        agregarNota(suma, contador, nota);
    }
    cout<<"Promedio: "<<(suma/contador)<<endl;
    return 0;
}
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota)
{
    sumaTotal += nuevaNota;
    cantidadNotas++;
}