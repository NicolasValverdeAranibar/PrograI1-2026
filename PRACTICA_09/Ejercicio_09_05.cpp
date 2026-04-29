// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 24/04/2026
// Número de ejercicio: 5
#include <iostream>
using namespace std;

void leer(int m[10][10], int f, int c);
void multiplicar(int a[10][10],int b[10][10],int r[10][10],int n,int m,int p);
void mostrar(int m[10][10], int f, int c);

int main()
{
    int n,m,p;
    int a[10][10],b[10][10],r[10][10];
    cin>>n>>m>>p;
    leer(a,n,m);
    leer(b,m,p);
    multiplicar(a,b,r,n,m,p);
    mostrar(r,n,p);
    return 0;
}
void leer(int m[10][10], int f, int c)
{
    for(int i=0;i<f;i++)
        for(int j=0;j<c;j++)
            cin>>m[i][j];
}
void multiplicar(int a[10][10],int b[10][10],int r[10][10],int n,int m,int p)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<p;j++)
        {
            r[i][j]=0;
            for(int k=0;k<m;k++)
                r[i][j]+=a[i][k]*b[k][j];
        }
}
void mostrar(int m[10][10], int f, int c)
{
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}