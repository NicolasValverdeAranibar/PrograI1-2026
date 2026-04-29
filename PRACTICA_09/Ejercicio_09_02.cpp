// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 24/04/2026
// Número de ejercicio: 2
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void generar(int m[10][10], int n, int a, int b);
void mostrar(int m[10][10], int n);
int sumaUltimaColumna(int m[10][10], int n);
int productoUltimaFila(int m[10][10], int n);
void mayor(int m[10][10], int n);
void desviacion(int m[10][10], int n);

int main()
{
    srand(time(0));
    int n,a,b,m[10][10];
    cin>>n>>a>>b;
    generar(m,n,a,b);
    mostrar(m,n);
    cout<<"Suma ultima columna: "<<sumaUltimaColumna(m,n)<<endl;
    cout<<"Producto ultima fila: "<<productoUltimaFila(m,n)<<endl;
    mayor(m,n);
    desviacion(m,n);
    return 0;
}
void generar(int m[10][10], int n, int a, int b)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            m[i][j]=a+rand()%(b-a+1);
}
void mostrar(int m[10][10], int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}
int sumaUltimaColumna(int m[10][10], int n)
{
    int suma=0;
    for(int i=0;i<n;i++)
        suma+=m[i][n-1];
    return suma;
}
int productoUltimaFila(int m[10][10], int n)
{
    int prod=1;
    for(int j=0;j<n;j++)
        prod*=m[n-1][j];
    return prod;
}
void mayor(int m[10][10], int n)
{
    int mayor=m[0][0],fi=0,co=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(m[i][j]>mayor){
                mayor=m[i][j];
                fi=i; co=j;
            }

    cout<<"Mayor: "<<mayor<<" Posicion: "<<fi<<","<<co<<endl;
}
void desviacion(int m[10][10], int n)
{
    double suma=0,media,desv=0;
    int total=n*n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            suma+=m[i][j];

    media=suma/total;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            desv+=pow(m[i][j]-media,2);

    desv=sqrt(desv/total);
    cout<<"Desviacion: "<<desv<<endl;
}
