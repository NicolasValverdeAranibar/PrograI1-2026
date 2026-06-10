// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 22/05/2026
// Número de ejercicio: 3

#include <iostream>
using namespace std;

struct Estudiante
{
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    int telefono;
};

void registrarEstudiantes(Estudiante estudiantes[], int n);
void mostrarEstudiantes(Estudiante estudiantes[], int n);

int main()
{
    int n;
    cout << "Cantidad de estudiantes: ";
    cin >> n;
    Estudiante estudiantes[n];
    registrarEstudiantes(estudiantes, n);
    mostrarEstudiantes(estudiantes, n);
    return 0;
}

void registrarEstudiantes(Estudiante estudiantes[], int n)
{
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cout << "\nCedula: ";
        cin >> estudiantes[i].cedula;
        cin.ignore();
        cout << "Nombre: ";
        getline(cin, estudiantes[i].nombre);
        cout << "Apellido: ";
        getline(cin, estudiantes[i].apellido);
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cin.ignore();
        cout << "Profesion: ";
        getline(cin, estudiantes[i].profesion);
        cout << "Lugar de nacimiento: ";
        getline(cin, estudiantes[i].lugar_nacimiento);
        cout << "Direccion: ";
        getline(cin, estudiantes[i].direccion);
        cout << "Telefono: ";
        cin >> estudiantes[i].telefono;
        cin.ignore();
    }
}

void mostrarEstudiantes(Estudiante estudiantes[], int n)
{
    cout << "\nLISTA DE ESTUDIANTES\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nCedula: " << estudiantes[i].cedula;
        cout << "\nNombre: " << estudiantes[i].nombre;
        cout << "\nApellido: " << estudiantes[i].apellido;
        cout << "\nEdad: " << estudiantes[i].edad;
        cout << "\nProfesion: " << estudiantes[i].profesion;
        cout << "\nLugar nacimiento: " << estudiantes[i].lugar_nacimiento;
        cout << "\nDireccion: " << estudiantes[i].direccion;
        cout << "\nTelefono: " << estudiantes[i].telefono << endl;
    }
}