//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 16/11/2025
//Numero de Ejercicio: 7

#include<iostream>
#include<string.h>
using namespace std;

struct Producto
{
    char nombre[50];
    char codigo[50];
    float precio;
    int cantidad_en_inventario;
    char observaciones[50];
};

void DatosProductos(Producto &product);
void MostrarDatos(Producto product);
void mostrarProductoMasCaro(Producto productos[], int N);
int calcularTotalInventario(Producto productos[], int N);
void verificarInventarioBajo(Producto &product);

int main()
{
    system("chcp 65001");
    system("cls");

    double ProductoMasCaro=0;
    int N;
    cout<<"Ingrese la cantidad de productos: ";
    cin>>N;
    
    Producto productos[N];
    
    for (int i=0; i<N; i++) 
    {
        cout<<"\n------- Producto "<<(i+1)<<" --------"<<endl;
        DatosProductos(productos[i]);
        verificarInventarioBajo(productos[i]);
    }
    
    for (int i=0; i<N; i++)
    {
        cout<<"\nProducto "<<(i+1)<<":"<<endl;
        MostrarDatos(productos[i]);
    }
    
    cout<<"\n------- PRODUCTO MÁS CARO -------"<<endl;
    mostrarProductoMasCaro(productos,N);
    
    int total=calcularTotalInventario(productos,N);
    cout<<"\nCantidad total de productos en inventario: "<<total<<" unidades"<<endl;

    return 0;
}

void DatosProductos(Producto &product)
{
    cin.ignore();
    cout<<"Ingrese el nombre del producto: ";
    cin.getline(product.nombre,50);
    cout<<"Ingrese su codigo: ";
    cin.getline(product.codigo,50);
    cout<<"Ingrese su precio: ";
    cin>>product.precio;
    cout<<"Ingrese la cantidad de inventario: ";
    cin>>product.cantidad_en_inventario;

    if (product.cantidad_en_inventario<5)
    {
        strcpy(product.observaciones, "Producto con baja cantidad de inventario");  
    }
    else
    {
        strcpy(product.observaciones,"");
    }
}

void MostrarDatos(Producto product)
{
    cout<<"\tNombre: "<<product.nombre<<endl;
    cout<<"\tCodigo: "<<product.codigo<<endl;
    cout<<"\tPrecio: "<<product.precio<<endl;
    cout<<"\tCantidad en inventario: "<<product.cantidad_en_inventario<<endl;
    cout<<"\tObservaciones: "<<product.observaciones<<endl;
    cout<<"------------------------------"<<endl;
}

void mostrarProductoMasCaro(Producto productos[], int N) 
{
    int indiceMasCaro=0;
    for (int i=1; i<N; i++) 
    {
        if (productos[i].precio>productos[indiceMasCaro].precio) 
        {
            indiceMasCaro=i;
        }
    }
    MostrarDatos(productos[indiceMasCaro]);
}

int calcularTotalInventario(Producto productos[], int N) 
{
    int total=0;
    for (int i=0; i<N; i++) 
    {
        total+=productos[i].cantidad_en_inventario;
    }
    return total;
}

void verificarInventarioBajo(Producto &product) 
{
    if (product.cantidad_en_inventario<5) 
    {
        strcpy(product.observaciones,"Producto con baja cantidad de inventario");
    }
}