// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 13/05/2026
// Número de ejercicio: 6

#include <iostream>
#include <fstream>

using namespace std;

void filtrarTemperaturas(float limite);

int main()
{
    float limite;
    cout << "Temperatura minima: ";
    cin >> limite;
    filtrarTemperaturas(limite);
    cout << "Archivo generado";
    return 0;
}

void filtrarTemperaturas(float limite)
{
    ifstream entrada("temperaturas.txt");
    ofstream salida("altas_temperaturas.txt");
    string ciudad;
    float temperatura;
    while(entrada >> ciudad >> temperatura)
    {
        if(temperatura > limite)
        {
            salida << ciudad << " " << temperatura << endl;
        }
    }
    entrada.close();
    salida.close();
}