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
    int num_al = 0;
    int suma = 0;
    float promedio = 0;
    int mayor = 1000 ;
    int menor = 0 ;
    system("cls");
    cout<<"ingrese la cantidad de numeros a generar: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        num_al = rand() % 1000 + 1;
        cout<<"el numero "<< i <<" es: "<<num_al<<endl;
        suma +=num_al;
        if (num_al < mayor)
        {
            mayor = num_al;
        }
        if (num_al > menor)
        {
            menor = num_al;
        }   
    }
    promedio = suma / n;
    cout<<"la suma de los numeros es: "<<suma<<endl;
    cout<<"el promedio es: "<<promedio<<endl;
    cout<<"el menor valor generado es: "<<mayor<<endl;
    cout<<"el mayor valor generado es: "<<menor<<endl;
    return 0;
}