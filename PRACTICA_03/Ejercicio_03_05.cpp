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
    int cont_primos = 0;
    system("cls");
    cout<<"ingrese la cantidad de numeros: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        num_al = rand() % 10000 + 1;
        cout<<num_al<<endl;
      bool primo = true;
        if(num_al<=1)
        {
            primo = false;
        }
        else
        {
            for (int i = 2; i < num_al; i++)
            {
                if (num_al % i == 0)
                {
                    primo = false;
                } 
            }           
        }
        if (primo)
        {
            cont_primos ++;                           
        }   
    }
    cout<<"la cantidad de primos es: "<<cont_primos<<endl;
    
    return 0;
}