// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 22/05/2026
// Número de ejercicio: 9

#include <iostream>

using namespace std;

struct Alumno
{
    string nombre;
    float T1;
    float T2;
    float T3;
    float T4;
    float EF;
    float NF;
};

void registrarAlumnos(Alumno alumnos[], int n);
void calcularNotas(Alumno alumnos[], int n);
float notaMayor(Alumno alumnos[], int n);
float notaMenor(Alumno alumnos[], int n);
float promedioCurso(Alumno alumnos[], int n);

int main()
{
    int n;
    cout << "Cantidad de alumnos: ";
    cin >> n;
    Alumno alumnos[n];
    registrarAlumnos(alumnos, n);
    calcularNotas(alumnos, n);
    cout << "\nPromedio del curso: " << promedioCurso(alumnos, n);
    cout << "\nNota maxima: " << notaMayor(alumnos, n);
    cout << "\nNota minima: " << notaMenor(alumnos, n);
    return 0;
}

void registrarAlumnos(Alumno alumnos[], int n)
{
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cout << "\nNombre: ";
        getline(cin, alumnos[i].nombre);
        cout << "T1: ";
        cin >> alumnos[i].T1;
        cout << "T2: ";
        cin >> alumnos[i].T2;
        cout << "T3: ";
        cin >> alumnos[i].T3;
        cout << "T4: ";
        cin >> alumnos[i].T4;
        cout << "EF: ";
        cin >> alumnos[i].EF;
        cin.ignore();
    }
}

void calcularNotas(Alumno alumnos[], int n)
{
    for(int i = 0; i < n; i++)
    {
        float NP;
        NP = (alumnos[i].T1 + alumnos[i].T2 + alumnos[i].T3 + alumnos[i].T4) / 4;
        alumnos[i].NF = (0.7 * NP) + (0.3 * alumnos[i].EF);
    }
}

float promedioCurso(Alumno alumnos[], int n)
{
    float suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma += alumnos[i].NF;
    }
    return suma / n;
}

float notaMayor(Alumno alumnos[], int n)
{
    float mayor = alumnos[0].NF;
    for(int i = 1; i < n; i++)
    {
        if(alumnos[i].NF > mayor)
            mayor = alumnos[i].NF;
    }
    return mayor;
}

float notaMenor(Alumno alumnos[], int n)
{
    float menor = alumnos[0].NF;
    for(int i = 1; i < n; i++)
    {
        if(alumnos[i].NF < menor)
            menor = alumnos[i].NF;
    }
    return menor;
}