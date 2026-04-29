// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 22/04/2026
// Número de ejercicio: 1

#include <iostream>
#include <vector> 
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);
vector <float> generarvoltajes(int n);
vector <float> generartemperaturas(int n);
vector<char> generarletras(int n);
vector <int> generaranios(int n);
vector <float> generarvelocidades (int n);
vector <float> generardistancias(int n);
void desplegarvector(vector<float> lista);
void desplegarvectorchar(vector<char> lista);
void desplegarvectorint(vector<int> lista);

int main()
{
    vector <float> voltajes;
    vector <float> temperaturas;
    vector <char> letras;
    vector <int> anios;
    vector <float> velocidades;
    vector <float> distancias;
    srand(time(NULL));
    system("cls");
    cout << "\nGenerar voltajes" << endl;
    voltajes = generarvoltajes(100);
    desplegarvector(voltajes);
    cout << "\nGenerar temperaturas" << endl;
    temperaturas = generartemperaturas(50);
    desplegarvector(temperaturas);
    cout << "\nGenerar letras" << endl;
    letras = generarletras(30);
    desplegarvectorchar(letras);
    cout << "\nGenerar Anios" << endl;
    anios = generaranios(100);
    desplegarvectorint(anios);
    cout << "\nGenerar velocidades" << endl;
    velocidades = generarvelocidades(32);
    desplegarvector(velocidades);
    cout << "\nGenerar distacnias" << endl;
    distancias = generardistancias(1000);
    desplegarvector(distancias);
    return 0;
}
vector <float> generarvoltajes(int n)
{
    float valorgenerado = 0;
    vector<float> voltajes;
    for (int i = 0; i < n; i++)
    {
        valorgenerado = (GenerarAleatorio(0,99)/100.00)+GenerarAleatorio(20,200);
        voltajes.push_back(valorgenerado);
    }
    return voltajes;    
}
vector <float> generartemperaturas(int n)
{
    float valorgenerado = 0;
    vector<float> temperatura;
    for (int i = 0; i < n; i++)
    {
        valorgenerado = (GenerarAleatorio(0,99)/100.00)+GenerarAleatorio(0,100);
        temperatura.push_back(valorgenerado);
    }
    return temperatura; 
}
vector <char> generarletras(int n)
{
    char letra;
    vector<char> letras;
    int codigoAscii;
    int MayusMinus = 0;
    for (int i = 0; i < n; i++)
    {
        MayusMinus = GenerarAleatorio(1,2);
        if (MayusMinus == 1)
        {
            codigoAscii = GenerarAleatorio(65, 90);
        }
        else
        {
            codigoAscii = GenerarAleatorio(97, 122);
        }
        letras.push_back(char(codigoAscii));
    }
    return letras;
}
vector <int> generaranios(int n)
{
    vector <int> anios;
    for (int i = 0; i < n; i++)
    {
        anios.push_back(GenerarAleatorio(1990,2025));
    }
    return anios;    
}
vector <float> generarvelocidades (int n)
{
    float valorgenerado = 0;
    vector <float> velocidades;
    for (int i = 0; i < n; i++)
    {
        valorgenerado = (GenerarAleatorio(0,99)/100.00)+GenerarAleatorio(10,300);
        velocidades.push_back(valorgenerado);
    }
    return velocidades;
}
vector <float> generardistancias(int n)
{
    float valorgenerado = 0;
    vector <float> distancias;
    for (int i = 0; i < n; i++)
    {
        valorgenerado = (GenerarAleatorio(0,99)/100.00 + GenerarAleatorio(1,1000));
        distancias.push_back(valorgenerado);
    }
    return distancias;
}
void desplegarvector(vector<float> lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout<<lista[i]<<"\t";
    }
}
void desplegarvectorchar(vector<char> lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout<<lista[i]<<"\t";
    }
}
void desplegarvectorint(vector<int> lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        cout<<lista[i]<<"\t";
    }
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}
