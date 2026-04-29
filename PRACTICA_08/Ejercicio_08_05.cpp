// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde Aranibar
// Fecha creación: 13/04/2026
#include <iostream>
#include <string>

using namespace std;
void validarCorreo (string correo);

int main()
{
    string correo;
    system("cls");
    cout<<"ingrese su correo electronico: ";
    cin>>correo;
    validarCorreo(correo);
    return 0;
}
void validarCorreo (string correo)
{
    int arroba = 0;
    for (int i = 0; i < correo.length(); i++)
    {
        if (correo[i] == '@')
        {
            arroba++;
        }
    }
    if (arroba > 1 or arroba == 0)
    {
        cout<<"correo electronico invalido"<<endl;
    }else
    {
        for (int i = 0; i < correo.length(); i++)
        {
            if (correo[i] == '@' and correo[i+1] == '.')
            {
                cout<<"correo electronico valido"<<endl;
            }else
            {
                cout<<"correo invalido"<<endl;
            }
            
        }
    }
}
