// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Carnet: 6862015
// Fecha creación: 04/03/2026

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int n = 0;
    int moneda = 0;
    int cont_caras = 0;
    int cont_cruz = 0;
    int porc_caras = 0;
    int porc_cruz = 0;
    system("cls");
    cout<<"ingrese las veces que quiere lanzar su moneda: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        moneda = rand() % 2;
        if (moneda == 0)
        {
            cont_caras++;
        }else
        {
            cont_cruz++;
        }
    }
    porc_caras = (cont_caras * 100)/n;
    porc_cruz = (cont_cruz * 100)/n;
    cout<<"el porcentaje de caras es: "<<porc_caras<<endl;
    cout<<"el porcentaje de cruz es: "<<porc_cruz<<endl;
    return 0;
}