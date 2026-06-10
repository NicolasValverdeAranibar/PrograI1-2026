// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 13/05/2026
// Número de ejercicio: 5

#include <iostream>
#include <fstream>

using namespace std;

void actualizarProducto();

int main()
{
    actualizarProducto();
    return 0;
}

void actualizarProducto()
{
    ifstream entrada("productos.txt");
    ofstream temporal("temp.txt");
    string producto, buscado;
    float precio, nuevoPrecio;
    bool encontrado = false;
    cout << "Producto: ";
    cin >> buscado;
    cout << "Nuevo precio: ";
    cin >> nuevoPrecio;
    while(entrada >> producto >> precio)
    {
        if(producto == buscado)
        {
            precio = nuevoPrecio;
            encontrado = true;
        }
        temporal << producto << " " << precio << endl;
    }
    entrada.close();
    temporal.close();
    remove("productos.txt");
    rename("temp.txt", "productos.txt");
    if(encontrado)
        cout << "Producto actualizado";
    else
        cout << "Producto no encontrado";
}