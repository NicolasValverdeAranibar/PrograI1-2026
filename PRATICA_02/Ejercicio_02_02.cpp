// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Carnet: 6862015
// Carrera del estudiante: Ingenieria Mecatronica
// Fecha creación: 25/02/2026

#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int suma = 0;
    int suma_pares = 0;
    int suma_impares = 0;
    int suma_primos = 0;
    system("cls");
    do
    {
        cout<<"ingrese un numero: ";
        cin>>num;
        if (num>=0 and num<=100)
        {
            suma +=num;
            if (num%2 == 0)
            {
                suma_pares += num;
            }else
            {
                suma_impares += num;
            }
            bool esprimo = true;
            if (num <= 1)
            {
                esprimo = false;
            }else
            {
                for (int i = 2; i < num/2; i++)
                {
                    if (num % i == 0)
                    {
                        esprimo = false;
                        break;
                    }
                    
                }  
            }
            if (esprimo)
            {
                suma_primos += num;
            } 
        }
        
    } while ((num >= 1 or num <=100) and num != 0);
    cout<<"la suma de todos los numeros en el rango es: "<<suma<<endl;
    cout<<"la suma de todos los pares es: "<<suma_pares<<endl;
    cout<<"la suma de todos los impares es: "<<suma_impares<<endl;
    cout<<"la suma de todos los primos es: "<<suma_primos<<endl;
    return 0;
}