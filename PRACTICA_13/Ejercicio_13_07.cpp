// Materia: Programación I, Paralelo 4
// Autor: Nicolas Valverde
// Fecha creación: 22/05/2026
// Número de ejercicio: 7

#include <iostream>

using namespace std;

struct Producto
{
    string nombre;
    string codigo;
    float precio;
    int cantidad_en_inventario;
    string observaciones;
};

void registrarProductos(Producto productos[], int n);
int productoMasCaro(Producto productos[], int n);
int totalInventario(Producto productos[], int n);
void mostrarProductos(Producto productos[], int n);

int main()
{
    int n;
    cout << "Cantidad de productos: ";
    cin >> n;
    Producto productos[n];
    registrarProductos(productos, n);
    cout << "\nPRODUCTO MAS CARO\n";
    int pos = productoMasCaro(productos, n);
    cout << productos[pos].nombre << " - " << productos[pos].precio << endl;
    cout << "\nCantidad total en inventario: " << totalInventario(productos, n) << endl;
    mostrarProductos(productos, n);
    return 0;
}

void registrarProductos(Producto productos[], int n)
{
    cin.ignore();
    for(int i = 0; i < n; i++)
    {
        cout << "\nNombre: ";
        getline(cin, productos[i].nombre);
        cout << "Codigo: ";
        getline(cin, productos[i].codigo);
        cout << "Precio: ";
        cin >> productos[i].precio;
        cout << "Cantidad inventario: ";
        cin >> productos[i].cantidad_en_inventario;
        cin.ignore();
        if(productos[i].cantidad_en_inventario < 5)
        {
            productos[i].observaciones =
            "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO";
        }
        else
        {
            productos[i].observaciones =
            "Inventario suficiente";
        }
    }
}

int productoMasCaro(Producto productos[], int n)
{
    int pos = 0;
    for(int i = 1; i < n; i++)
    {
        if(productos[i].precio >
           productos[pos].precio)
        {
            pos = i;
        }
    }
    return pos;
}

int totalInventario(Producto productos[], int n)
{
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        total += productos[i].cantidad_en_inventario;
    }
    return total;
}

void mostrarProductos(Producto productos[], int n)
{
    cout << "\nLISTA DE PRODUCTOS\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nNombre: " << productos[i].nombre;
        cout << "\nCodigo: " << productos[i].codigo;
        cout << "\nPrecio: " << productos[i].precio;
        cout << "\nCantidad: " << productos[i].cantidad_en_inventario;
        cout << "\nObservacion: " << productos[i].observaciones << endl;
    }
}