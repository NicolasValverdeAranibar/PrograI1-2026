// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 24/04/2026
// Número de ejercicio: 1
#include <iostream>
using namespace std;

void leerMatriz(int m[10][10], int n);
void intercambiarFilas(int m[10][10], int n);
void mostrar(int m[10][10], int n);

int main()
{
    int n,m[10][10];
    system("cls");
    cout<<"Orden: ";
    cin>>n;
    leerMatriz(m,n);
    intercambiarFilas(m,n);
    cout<<"Resultado:\n";
    mostrar(m,n);
    return 0;
}
void leerMatriz(int m[10][10], int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>m[i][j];
}
void intercambiarFilas(int m[10][10], int n)
{
    for(int j=0;j<n;j++)
    {
        int aux=m[0][j];
        m[0][j]=m[n-1][j];
        m[n-1][j]=aux;
    }
}
void mostrar(int m[10][10], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}