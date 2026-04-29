// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Fecha creación: 01/04/2026
// Número de ejercicio: 6

#include <iostream>
using namespace std;

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);

int main(){
    int total = 3665;
    int h, m, s;
    system("cls");
    cout<<"ingrese las horas: ";
    cin>>h;
    cout<<"ingrese los minutos: ";
    cin>>m;
    cout<<"ingrese los segundos: ";
    cin>>s;
    calcularTiempo(total, h, m, s);
    cout<<"Horas: "<<h<<" Minutos: "<<m<<" Segundos: "<<s<<endl;
    return 0;
}
void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos)
{
    horas = totalSegundos / 3600;
    totalSegundos %= 3600;
    minutos = totalSegundos / 60;
    segundos = totalSegundos % 60;
}