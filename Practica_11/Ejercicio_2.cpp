//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 24/11/2025
//Numero de Ejercicio: 2

#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;

struct Producto 
{
    int codigo;
    char nombre[50];
    int cantidad;
    double precioUnitario;
};

struct Ventas 
{
    char ci[10];
    char nombre[50];
    int codigo;
    int cantidad;
};

const char* nombreArchivoProducto="producto.bin";
const char* nombreArchivoVenta="venta.txt";

Producto ingresarDatosProducto ();
void escribirProducto ();
void buscarProducto ();
void ModificarProducto ();
Ventas ingresarVenta ();
void AdicionarVentas ();
void reporte ();

int main()
{
    system("chcp 65001");
    system("cls");
    
    int opcion;
    do
    {
        cout<<"1. Adicionar Producto"<<endl;
        cout<<"2. Listado de Productos"<<endl;
        cout<<"3. Buscar Producto por Codigo"<<endl;
        cout<<"4. Modificar un Producto"<<endl;
        cout<<"5. Adicionar Ventas de un Producto"<<endl;
        cout<<"6. Salir"<<endl;
        cin>>opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            escribirProducto();
            break;
        case 2:
            reporte();
            break;
        case 3:
            buscarProducto();
            break;
        case 4:
            ModificarProducto();
            break;
        case 5:
            AdicionarVentas();
            break;
        default:
            cout<<"Saliendo....";
            break;
        }


    } while (opcion!=6);
    
    return 0;
}

Producto ingresarDatosProducto ()
{
    Producto pr;
    cout<<"Ingrese el codigo del producto"<<endl;
    cin>>pr.codigo;
    cin.ignore();
    cout<<"Ingrese el nombre del producto"<<endl;
    cin.getline(pr.nombre, 50);
    cout<<"Ingrese la cantidad"<<endl;
    cin>>pr.cantidad;
    cout<<"Ingrese el precio unitario"<<endl;
    cin>>pr.precioUnitario;
    
    return pr;
}

void escribirProducto () 
{
    Producto pr=ingresarDatosProducto();
    ofstream archivo(nombreArchivoProducto, ios::binary | ios::app);
    if(!archivo.is_open())
    {
        cout<<"Error al escribir"<<endl;
        return;
    }
    archivo.write((char*)&pr, sizeof(Producto));
    
    archivo.close();
}

void buscarProducto () 
{
    cout<<"Ingrese el codigo del producto que esta buscando"<<endl;
    int cod;
    cin>>cod;
    
    ifstream archivo(nombreArchivoProducto, ios::binary);
    if(!archivo.is_open())
    {
        cout<<"Error al buscar"<<endl;
        return;
    }
    Producto pr;
    Producto buscado;
    bool encontrado=false;
    while(archivo.read((char*)(&pr), sizeof(Producto)))
    {
        if(cod==pr.codigo)
        {
            buscado=pr;
            encontrado=true;
        }
    }
    
    archivo.close();
    
    if(encontrado)
    {
        cout<<"Codigo: "<<buscado.codigo<<endl;
        cout<<"Nombre: "<<buscado.nombre<<endl;
        cout<<"Cantidad: "<<buscado.cantidad<<endl;
        cout<<"Precio Unitario: "<<buscado.precioUnitario<<endl;
    } 
    else 
    {
        cout<<"Producto no encontrado"<<endl;
    }
}

void ModificarProducto () 
{
    ifstream archivo(nombreArchivoProducto, ios::binary);
    if(!archivo.is_open())
    {
        cout<<"Error al modificar"<<endl;
        return;
    }
    
    Producto pr;
    int indice=1;
    cout<<"Ingrese el producto que desea modificar"<<endl;
    while(archivo.read((char*)(&pr), sizeof(Producto)))
    {
        cout<<indice<<". "<<pr.nombre<<endl;
        indice++;
    }
    
    archivo.close();
    
    int modificar;
    cin>>modificar;
    
    ofstream archivo2(nombreArchivoProducto, ios::binary | ios::in);
    long offset=(modificar-1) * sizeof(Producto);
    archivo2.seekp(offset);
    
    cout<<"Ingrese los datos del nuevo producto" << endl;
    Producto nuevo=ingresarDatosProducto();
    archivo2.write((char*)&nuevo, sizeof(Producto));
    archivo2.close();
}

Ventas ingresarVenta () 
{
    Ventas ve;
    cout<<"Ingrese el CI del cliente"<<endl;
    cin.ignore();
    cin.getline(ve.ci, 10);
    cout<<"Ingrese el nombre del cliente"<<endl;
    cin.getline(ve.nombre, 50);
    cout<<"Ingrese el codigo del producto"<<endl;
    cin>>ve.codigo;
    cout<<"Ingrese la cantidad"<<endl;
    cin>>ve.cantidad;
    return ve;
}

void AdicionarVentas () 
{
    ofstream archivo(nombreArchivoVenta, ios::app);
    if(!archivo.is_open())
    {
        cout<<"Error en ventas"<<endl;
        return;
    }
    Ventas ve=ingresarVenta();
    archivo<<ve.ci<<";"<<ve.nombre<<";"<<ve.codigo<<";"<<ve.cantidad<<";\n";
    archivo.close();
}

void reporte () 
{
    ifstream archivoProd(nombreArchivoProducto);
    cout<<"Codigo\tNombre Producto\tCantidad Inicial\tPrecio\tCantidadVendida\tTotal"<<endl;
    Producto pr;
    while(archivoProd.read((char*)(&pr), sizeof(Producto)))
    {
        ifstream archivoVenta(nombreArchivoVenta);
        int cantidadVendida=0;
        double total=0.0;
        while(!archivoVenta.eof())
        {
            string linea;
            getline(archivoVenta, linea);
            stringstream ss(linea);
            string p;
            int cont=1;
            int codigo=0;
            while (getline(ss, p, ';')) 
            {
                if(cont==3)
                {
                    codigo=stoi(p);
                }
                if(cont==4)
                {
                    if(codigo==pr.codigo)
                    {
                        cantidadVendida+=stoi(p);
                    }
                }
                cont++;
            }
        }
        total=cantidadVendida*pr.precioUnitario;
        cout<<pr.codigo<<"\t"<<pr.nombre<<"\t"<<pr.cantidad<<"\t\t\t"<<pr.precioUnitario<<"\t"<<cantidadVendida<<"\t"<<total<<endl;
        archivoVenta.close();
    }
    archivoProd.close();
}

