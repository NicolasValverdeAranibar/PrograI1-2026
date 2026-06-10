// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 22/05/2026
// Número de ejercicio: 6

#include <iostream>

using namespace std;

struct Empleado
{
    string nombre;
    int id;
    float sueldo;
    int antiguedad;
};

void registrarEmpleados(Empleado empleados[], int n);
int contarSueldosMayores(Empleado empleados[], int n, float sueldo);
float promedioAntiguedad(Empleado empleados[], int n);

int main()
{
    int n;
    float sueldo;
    cout << "Cantidad de empleados: ";
    cin >> n;
    Empleado empleados[n];
    registrarEmpleados(empleados, n);
    cout << "\nIngrese sueldo de referencia: ";
    cin >> sueldo;
    cout << "Empleados con sueldo mayor: " << contarSueldosMayores(empleados, n, sueldo);
    cout << "\nPromedio de antiguedad: " << promedioAntiguedad(empleados, n);
    return 0;
}

void registrarEmpleados(Empleado empleados[], int n)
{
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cout << "\nNombre: ";
        getline(cin, empleados[i].nombre);
        cout << "ID: ";
        cin >> empleados[i].id;
        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;
        cout << "Antiguedad: ";
        cin >> empleados[i].antiguedad;
        cin.ignore();
    }
}

int contarSueldosMayores(Empleado empleados[], int n, float sueldo)
{
    int contador = 0;
    for(int i = 0; i < n; i++)
    {
        if(empleados[i].sueldo > sueldo)
            contador++;
    }
    return contador;
}

float promedioAntiguedad(Empleado empleados[], int n)
{
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma += empleados[i].antiguedad;
    }
    return (float)suma / n;
}