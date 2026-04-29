// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Fecha creación: 01/04/2026
// Número de ejercicio: 1

#include <iostream>

using namespace std;

void IntercambiarValores(int &num1, int &num2);

int main()
{
    int num1 = 0;
    int num2 = 0;
    system("cls");
    cout<<"ingrese el primer valor: ";
    cin>>num1;
    cout<<"ingrese el segundo valor: ";
    cin>>num2;
   IntercambiarValores(num1, num2);
    
    return 0;
}
void IntercambiarValores(int &num1, int &num2)
{
    int aux = 0;    
    aux = num1;
    num1 = num2;
    num2 = aux;
    cout<<num1<<"\t"<<num2;
}