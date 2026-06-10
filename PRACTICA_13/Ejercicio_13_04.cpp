// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 22/05/2026
// Número de ejercicio: 4

#include <iostream>
using namespace std;

struct Empleado
{
    string nombre;
    string genero;
    float salario;
};

void registrarEmpleados(Empleado empleados[], int n);
int salarioMayor(Empleado empleados[], int n);
int salarioMenor(Empleado empleados[], int n);

int main()
{
    int n;
    cout << "Cantidad de empleados: ";
    cin >> n;
    Empleado empleados[n];
    registrarEmpleados(empleados, n);
    int mayor = salarioMayor(empleados, n);
    int menor = salarioMenor(empleados, n);
    cout << "\nEMPLEADO CON MAYOR SALARIO\n";
    cout << empleados[mayor].nombre << " - " << empleados[mayor].salario;
    cout << "\n\nEMPLEADO CON MENOR SALARIO\n";
    cout << empleados[menor].nombre << " - " << empleados[menor].salario;
    return 0;
}

void registrarEmpleados(Empleado empleados[], int n)
{
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cout << "\nNombre: ";
        getline(cin, empleados[i].nombre);
        cout << "Genero: ";
        getline(cin, empleados[i].genero);
        cout << "Salario: ";
        cin >> empleados[i].salario;
        cin.ignore();
    }
}

int salarioMayor(Empleado empleados[], int n)
{
    int pos = 0;
    for(int i = 1; i < n; i++)
    {
        if(empleados[i].salario >
           empleados[pos].salario)
        {
            pos = i;
        }
    }
    return pos;
}

int salarioMenor(Empleado empleados[], int n)
{
    int pos = 0;
    for(int i = 1; i < n; i++)
    {
        if(empleados[i].salario <
           empleados[pos].salario)
        {
            pos = i;
        }
    }
    return pos;
}