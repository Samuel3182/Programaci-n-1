//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/11/2025
//Numero de Ejercicio: 6

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

struct RegistroTemperatura 
{
    string ciudad;
    double temperatura;
};

void crearArchivoTemperaturas(string nombreArchivo);
void filtrarTemperaturas(string archivoEntrada, string archivoSalida, double temperaturaMinima);
vector<RegistroTemperatura> leerArchivoTemperaturas(string nombreArchivo);
void escribirArchivoTemperaturas(vector<RegistroTemperatura> registros, string nombreArchivo, double temperaturaMinima);
void mostrarResultados(vector<RegistroTemperatura> registrosFiltrados);
void menuPrincipal();

int main() 
{
    system("chcp 65001");
    system("cls");

    menuPrincipal();
    return 0;
}

void menuPrincipal() 
{
    string archivoEntrada="temperaturas.txt";
    string archivoSalida="altas_temperaturas.txt";
    int opcion=0;
    double temperaturaMinima;
    
    do 
    {
        cout<<"1. Crear archivo de temperaturas"<<endl;
        cout<<"2. Filtrar temperaturas altas"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        
        if (opcion==1) 
        {
            crearArchivoTemperaturas(archivoEntrada);
        } 
        else if (opcion==2) 
        {
            cout<<"Ingrese la temperatura minima (N°C): ";
            cin>>temperaturaMinima;
            filtrarTemperaturas(archivoEntrada, archivoSalida, temperaturaMinima);
            cout<<"Proceso completado. Verifique el archivo: "<<archivoSalida<<endl;
            system("pause");
        }
    } while (opcion!=0);
}

void crearArchivoTemperaturas(string nombreArchivo) 
{
    ofstream archivo(nombreArchivo);
    int cantidadCiudades;
    
    if (archivo.fail()) 
    {
        cout<<"Error al abrir archivo "<<nombreArchivo<<endl;
        return;
    }
    
    cout<<"CREACION DEL ARCHIVO DE TEMPERATURAS"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Ingrese la cantidad de ciudades a registrar: ";
    cin>>cantidadCiudades;
    
    cin.ignore();
    
    for (int i=0; i<cantidadCiudades; i++) 
    {
        string ciudad;
        double temperatura;
        
        cout<<"\nCiudad "<<(i+1)<<":"<<endl;
        cout<<"Nombre de la ciudad: ";
        getline(cin, ciudad);
        cout<<"Temperatura promedio: ";
        cin>>temperatura;
        cin.ignore();

        archivo<<ciudad<<" "<<temperatura<<endl;
    }
    
    archivo.close();
    cout<<"\nArchivo "<<nombreArchivo<<" creado exitosamente"<<endl;
    system("pause");
}

void filtrarTemperaturas(string archivoEntrada, string archivoSalida, double temperaturaMinima) 
{
    vector<RegistroTemperatura> registros=leerArchivoTemperaturas(archivoEntrada);
    
    vector<RegistroTemperatura> registrosFiltrados;
    
    for (int i=0; i<registros.size(); i++) 
    {
        if (registros[i].temperatura>temperaturaMinima) 
        {
            registrosFiltrados.push_back(registros[i]);
        }
    }
 
    escribirArchivoTemperaturas(registrosFiltrados, archivoSalida, temperaturaMinima);
   
    mostrarResultados(registrosFiltrados);
}

vector<RegistroTemperatura> leerArchivoTemperaturas(string nombreArchivo) 
{
    ifstream archivo(nombreArchivo);
    vector<RegistroTemperatura> registros;
    
    if (archivo.fail()) 
    {
        cout<<"Error al abrir archivo "<<nombreArchivo<<endl;
        return registros;
    }
    
    string ciudad;
    double temperatura;
    
    while (archivo>>ciudad>>temperatura) 
    {
        RegistroTemperatura registro;
        registro.ciudad=ciudad;
        registro.temperatura=temperatura;
        registros.push_back(registro);
    }
    
    archivo.close();
    return registros;
}

void escribirArchivoTemperaturas(vector<RegistroTemperatura> registros, string nombreArchivo, double temperaturaMinima) {
    ofstream archivo(nombreArchivo);
    
    if (archivo.fail()) 
    {
        cout<<"Error: No se pudo crear el archivo "<<nombreArchivo<<endl;
        return;
    }
    
    archivo<<"Ciudades con temperatura superior a "<<temperaturaMinima<<"°C"<<endl;
    archivo<<"-------------------------------------"<<endl;
    
    for (int i=0; i<registros.size(); i++) 
    {
        archivo<<registros[i].ciudad<<" "<<registros[i].temperatura<<endl;
    }
    
    archivo.close();
}

void mostrarResultados(vector<RegistroTemperatura> registrosFiltrados) 
{
    cout<<"\nRESULTADOS DEL FILTRADO:"<<endl;
    cout<<"---------------------------"<<endl;
    
    if (registrosFiltrados.size()==0) 
    {
        cout<<"No se encontraron ciudades que cumplan con el criterio"<<endl;
    }
    else 
    {
        cout<<"Se encontraron "<<registrosFiltrados.size()<<" ciudades:"<<endl;
        for (int i=0; i<registrosFiltrados.size(); i++) 
        {
            cout<<"- "<<registrosFiltrados[i].ciudad<<": " <<registrosFiltrados[i].temperatura<<"°C"<<endl;
        }
    }
    cout<<endl;
}