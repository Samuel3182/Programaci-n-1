//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/11/2025
//Numero de Ejercicio: 5

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

struct Producto 
{
    string nombre;
    double precio;
};

void crearArchivoVacio(string nombreArchivo);
bool archivoExiste(string nombreArchivo);
vector<Producto> leerProductos(string nombreArchivo);
void guardarProductos(vector<Producto> productos, string nombreArchivo);
void agregarProducto(string nombreArchivo);
void mostrarProductos(string nombreArchivo);
void actualizarPrecioProducto(string nombreArchivo);

int main() 
{
    system("chcp 65001");
    system("cls");
    
    string nombreArchivo="productos.txt";
    
    if (!archivoExiste(nombreArchivo)) 
    {
        cout<<"El archivo '"<<nombreArchivo<<"' no existe"<<endl;
        crearArchivoVacio(nombreArchivo);
    }
    else 
    {
        cout<<"Archivo '"<<nombreArchivo<<"' encontrado"<<endl;
    }
    
    int opcion;
    bool ejecutando=true;
    
    while (ejecutando) 
    {
        cout<<"\n------- MENÚ PRINCIPAL --------"<<endl;
        cout<<"1. Mostrar todos los productos"<<endl;
        cout<<"2. Agregar nuevo producto"<<endl;
        cout<<"3. Actualizar precio de producto"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Seleccione una opción: ";
        cin>>opcion;
        
        switch (opcion) 
        {
            case 1: 
            {
                mostrarProductos(nombreArchivo);
                break;
            }
            case 2: 
            {
                agregarProducto(nombreArchivo);
                break;
            }
            case 3: 
            {
                actualizarPrecioProducto(nombreArchivo);
                break;
            }
            case 4: 
            {
                ejecutando=false;
                cout<<"Saliendo del programa..."<<endl;
                break;
            }
            default: 
            {
                cout<<"Opcion no valida. Intente nuevamente"<<endl;
            }
        }
    }
    
    return 0;
}

void crearArchivoVacio(string nombreArchivo) 
{
    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) 
    {
        archivo.close();
        cout<<"Archivo '"<<nombreArchivo<<"' creado exitosamente"<<endl;
    } 
    else 
    {
        cout<<"Error: No se pudo crear el archivo"<<endl;
    }
}

bool archivoExiste(string nombreArchivo) 
{
    ifstream archivo(nombreArchivo);
    bool existe=archivo.is_open();
    if (existe) 
    {
        archivo.close();
    }
    return existe;
}

vector<Producto> leerProductos(string nombreArchivo) 
{
    vector<Producto> productos;
    ifstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cout<<"Error: No se pudo abrir el archivo para lectura"<<endl;
        return productos;
    }
    
    string nombre;
    double precio;
    
    while (archivo>>nombre>>precio) 
    {
        Producto producto;
        producto.nombre=nombre;
        producto.precio=precio;
        productos.push_back(producto);
    }
    
    archivo.close();
    return productos;
}

void guardarProductos(vector<Producto> productos, string nombreArchivo)
{
    ofstream archivo(nombreArchivo);
    
    if (!archivo.is_open()) 
    {
        cout<<"Error: No se pudo abrir el archivo para guardar"<<endl;
        return;
    }
    
    for (int i=0; i<productos.size(); i++) 
    {
        archivo<<productos[i].nombre<<" "<<productos[i].precio;
        if (i < productos.size()-1) 
        {
            archivo<<endl;
        }
    }
    
    archivo.close();
}

void mostrarProductos(string nombreArchivo) 
{
    vector<Producto> productos=leerProductos(nombreArchivo);
    
    if (productos.empty()) 
    {
        cout<<"No hay productos registrados en el archivo"<<endl;
        return;
    }
    
    cout<<"\n======= LISTA DE PRODUCTOS ======="<<endl;
    cout<<"Producto\tPrecio"<<endl;
    cout<<"-------------------------"<<endl;
    
    for (int i=0; i<productos.size(); i++) 
    {
        cout<<productos[i].nombre<<"\t$"<<productos[i].precio<<endl;
    }
    cout<<"-------------------------" << endl;
    cout<<"Total: "<<productos.size()<<" productos"<<endl;
}

void agregarProducto(string nombreArchivo) 
{
    vector<Producto> productos=leerProductos(nombreArchivo);
    Producto nuevoProducto;
    
    cout<<"\n--- AGREGAR NUEVO PRODUCTO ---"<<endl;
    cout<<"Nombre del producto: ";
    cin>>nuevoProducto.nombre;
    cout<<"Precio del producto: ";
    cin>>nuevoProducto.precio;
    
    productos.push_back(nuevoProducto);
    guardarProductos(productos, nombreArchivo);
    
    cout<<"Producto '"<<nuevoProducto.nombre<<"' agregado exitosamente"<<endl;
}

void actualizarPrecioProducto(string nombreArchivo) 
{
    vector<Producto> productos=leerProductos(nombreArchivo);
    
    if (productos.empty())
    {
        cout<<"No hay productos para actualizar"<<endl;
        return;
    }
    
    string productoBuscar;
    double nuevoPrecio;
    
    cout<<"\n--- ACTUALIZAR PRECIO ---"<<endl;
    cout<<"Ingrese el nombre del producto: ";
    cin>>productoBuscar;
    cout<<"Ingrese el nuevo precio: ";
    cin>>nuevoPrecio;
    
    bool productoEncontrado=false;
    int indiceProducto=-1;
    
    for (int i=0; i<productos.size() && !productoEncontrado; i++) 
    {
        if (productos[i].nombre==productoBuscar) 
        {
            productoEncontrado=true;
            indiceProducto=i;
        }
    }
    
    if (productoEncontrado) 
    {
        double precioAnterior=productos[indiceProducto].precio;
        productos[indiceProducto].precio=nuevoPrecio;
        guardarProductos(productos, nombreArchivo);
        
        cout<<"\n¡Precio actualizado exitosamente!"<<endl;
        cout<<"Producto: "<<productoBuscar<<endl;
        cout<<"Precio anterior: $"<<precioAnterior<<endl;
        cout<<"Precio nuevo: $"<<nuevoPrecio<<endl;
    } 
    else 
    {
        cout<<"Error: El producto '"<<productoBuscar<<"' no existe"<<endl;
    }
}