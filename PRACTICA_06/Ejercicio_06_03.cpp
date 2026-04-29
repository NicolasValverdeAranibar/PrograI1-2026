// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar 
// Fecha creación: 01/04/2026
// Número de ejercicio: 3

#include <iostream>

using namespace std;

void modificarvalores(int num1, int &num2);

int main()
{
    int num1 = 0;
    int num2 = 0;
    system("cls");
    cout<<"ingrese el primer valor: ";
    cin>>num1;
    cout<<"ingrese un segundo valor: ";
    cin>>num2;
    modificarvalores(num1, num2);
    return 0;
}

void modificarvalores(int num1, int &num2)
{
    num1 *= 2;
    num2 += 10;
    cout<<num1<<"\t"<<num2<<endl;
}