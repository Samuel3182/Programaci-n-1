//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 24/11/2025
//Numero de Ejercicio: 3

#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>
using namespace std;

struct Pizza 
{
    int codigo;
    char nombre[30];
    char tipo[15];
    char tamano[15];
    float precio;
};

const char* archivoProductos="PRODUCTO.BIN";
const char* archivoVentas="VENTAS.TXT";

void mostrarMenu();
void adicionarPizza();
void listarPizzas();
void modificarPrecio();
void eliminarPizza();
void adicionarVenta();
float calcularPrecioFinal(const char* tipo, float precio);
void cargarPizzas(vector<Pizza>& pizzas);
void guardarPizzas(const vector<Pizza>& pizzas);
bool existeCodigo(int codigo);

int main() 
{
    system("chcp 65001");
    system("cls");
    
    int opcion;
    do 
    {
        mostrarMenu();
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        cin.ignore();
        
        switch(opcion) 
        {
            case 1: adicionarPizza(); break;
            case 2: listarPizzas(); break;
            case 3: modificarPrecio(); break;
            case 4: eliminarPizza(); break;
            case 5: adicionarVenta(); break;
            case 6: cout<<"Saliendo...\n"; break;
            default: cout<<"Opcion invalida\n"; break;
        }
        
        if (opcion != 6) 
        {
            cout<<"\nPresione Enter...";
            cin.get();
            system("cls");
        }
    } while (opcion!=6);
    
    return 0;
}

void mostrarMenu() 
{
    cout<<"  PIZZERIA ELI'S\n";
    cout<<"========================\n";
    cout<<"1. Adicionar Pizza\n";
    cout<<"2. Listado de Pizzas\n";
    cout<<"3. Modificar precio\n";
    cout<<"4. Eliminar Pizza\n";
    cout<<"5. Adicionar Venta\n";
    cout<<"6. Salir\n";
    cout<<"========================\n";
}

void adicionarPizza() 
{
    Pizza p;
    cout<<"\nNUEVA PIZZA\n";
    cout<<"Codigo: "; cin>>p.codigo; 
    cin.ignore();
    
    if (existeCodigo(p.codigo))
    {
        cout<<"Codigo ya existe\n";
        return;
    }
    
    cout<<"Nombre: "; 
    cin.getline(p.nombre, 30);
    
    do 
    {
        cout<<"Tipo (TRADICIONAL/ESPECIAL): ";
        cin.getline(p.tipo,15);
    } while (strcmp(p.tipo,"TRADICIONAL")!=0 && strcmp(p.tipo,"ESPECIAL")!=0);
    
    const char* tamanos[]={"XS", "MEDIANA", "GRANDE", "FAMILIAR", "INTERMINABLE"};
    bool valido;
    do 
    {
        valido=false;
        cout<<"Tamaño (XS, MEDIANA, GRANDE, FAMILIAR, INTERMINABLE): ";
        cin.getline(p.tamano, 15);
        for (int i=0; i<5; i++) 
        {
            if (strcmp(p.tamano, tamanos[i])==0) 
            valido=true;
        }
    } while (!valido);
    
    cout<<"Precio base: "; 
    cin>>p.precio; 
    cin.ignore();
    
    ofstream archivo(archivoProductos, ios::binary | ios::app);
    if (archivo.is_open()) 
    {
        archivo.write((char*)&p, sizeof(Pizza));
        archivo.close();
        cout<<"Pizza registrada!\n";
    }
}

void listarPizzas() 
{
    vector<Pizza> pizzas;
    cargarPizzas(pizzas);
    
    if (pizzas.empty()) 
    {
        cout<<"\nNo hay pizzas registradas\n";
        return;
    }
    
    cout<<"\n====================================================\n";
    cout<<"COD NOMBRE           TIPO   TAMAÑO   PRECIO\n";
    cout<<"====================================================\n";
    
    for (const auto& p : pizzas) 
    {
        float precioFinal=calcularPrecioFinal(p.tipo, p.precio);
        printf("%-4d %-15s %-7s %-9s %6.2f\n", p.codigo, p.nombre, p.tipo, p.tamano, precioFinal);
    }
    cout<<"====================================================\n";
}

void modificarPrecio() 
{
    int codigo;
    cout<<"\nMODIFICAR PRECIO\n";
    cout<<"Codigo de pizza: "; 
    cin>>codigo;
    
    vector<Pizza> pizzas;
    cargarPizzas(pizzas);
    
    bool encontrado=false;
    for (auto& p : pizzas) 
    {
        if (p.codigo==codigo) 
        {
            encontrado=true;
            cout<<"Precio actual: "<<p.precio<<"\nNuevo precio: ";
            cin>>p.precio;
            guardarPizzas(pizzas);
            cout<<"Precio modificado\n";
        }
    }
    
    if (!encontrado)
    {
        cout<<"Pizza no encontrada\n";
    }
}

void eliminarPizza() 
{
    int codigo;
    cout<<"\nELIMINAR PIZZA\n";
    cout<<"Codigo: "; 
    cin>>codigo;
    
    vector<Pizza> pizzas, nuevas;
    cargarPizzas(pizzas);
    
    for (const auto& p : pizzas) 
    {
        if (p.codigo!=codigo)
        {
            nuevas.push_back(p);
        } 
        
    }
    
    if (nuevas.size()==pizzas.size()) 
    {
        cout<<"Pizza no encontrada\n";
    } 
    else 
    {
        guardarPizzas(nuevas);
        cout<<"Pizza eliminada\n";
    }
}

void adicionarVenta() 
{
    int carnet, codigo, cantidad;
    char tamano[15];
    
    cout<<"\nNUEVA VENTA\n";
    cout<<"Carnet cliente: "; 
    cin>>carnet;
    cout<<"Codigo pizza: "; 
    cin>>codigo; 
    cin.ignore();
    
    if (!existeCodigo(codigo)) 
    {
        cout<<"Pizza no existe\n";
        return;
    }
    
    cout<<"Tamaño: "; cin.getline(tamano, 15);
    cout<<"Cantidad: "; 
    cin>>cantidad;
    
    ofstream archivo(archivoVentas, ios::app);
    if (archivo.is_open()) 
    {
        archivo<<carnet<<";"<<codigo<<";"<<tamano<<";"<<cantidad<<"\n";
        archivo.close();
        cout<<"Venta registrada!\n";
    }
}

float calcularPrecioFinal(const char* tipo, float precio) 
{
    if (strcmp(tipo, "ESPECIAL")==0) 
    {
        return precio*1.10f;
    }
    return precio;
}

void cargarPizzas(vector<Pizza>& pizzas) 
{
    pizzas.clear();
    ifstream archivo(archivoProductos, ios::binary);
    if (!archivo.is_open()) return;
    
    Pizza p;
    while (archivo.read((char*)&p, sizeof(Pizza))) 
    {
        pizzas.push_back(p);
    }
    archivo.close();
}

void guardarPizzas(const vector<Pizza>& pizzas)
{
    ofstream archivo(archivoProductos, ios::binary);
    if (!archivo.is_open()) return;
    
    for (const auto& p : pizzas) 
    {
        archivo.write((char*)&p, sizeof(Pizza));
    }
    archivo.close();
}

bool existeCodigo(int codigo) 
{
    vector<Pizza> pizzas;
    cargarPizzas(pizzas);
    
    for (const auto& p : pizzas) 
    {
        if (p.codigo==codigo) return true;
    }
    return false;
}