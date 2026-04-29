// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 22/04/2026
// Número de ejercicio: 2

#include <iostream>
#include <vector> 

using namespace std;

void desplegarvector (vector<float> voltios);

int main()
{
    vector <float> voltios = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    system("cls");
    desplegarvector(voltios);
    return 0;
}
void desplegarvector (vector<float> voltios)
{
    for (int i = 0; i < voltios.size(); i++)
    {
        cout<<voltios[i]<<"\t";
        if ((i == 2) or (i == 5) or (i == 8))
        {
            cout<<endl;
        }
    }   
}

