//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 2

#include <iostream>
#include <string>
using namespace std;

void buscarMineral(string nombres[], double produccion[], string nombreBuscado);
void ordenarMinerales(string nombres[], double produccion[]);
void mostrarTabla(string nombres[], double produccion[]);

int main() 
{
    system("cls");
    string nombres[6]={"SN", "SB", "AU", "PT", "AG", "CU"};
    
    double produccion[6]={998.000, 876.500, 786.670, 636.143, 135.567, 109.412};
    
    int opcion;
    string nombreBuscar;
    
    do
    {
        cout<<"1. Buscar mineral por nombre"<<endl;
        cout<<"2. Mostrar minerales ordenados por produccion"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        
        if (opcion==1) 
        {
            cout<<"Ingrese el nombre del mineral (SN, SB, AU, PT, AG, CU): ";
            cin>>nombreBuscar;
            buscarMineral(nombres, produccion, nombreBuscar);
        }
        else if (opcion==2) 
        {
            string nombresCopia[6];
            double produccionCopia[6];
            
            for (int i=0; i<6; i++) 
            {
                nombresCopia[i]=nombres[i];
                produccionCopia[i]=produccion[i];
            }
            
            ordenarMinerales(nombresCopia, produccionCopia);
            mostrarTabla(nombresCopia, produccionCopia);
        }
        else if (opcion==3) 
        {
            cout<<"Saliendo del programa..."<<endl;
        }
        
    } while (opcion!=3);
    
    return 0;
}

void buscarMineral(string nombres[], double produccion[], string nombreBuscado) 
{
    bool encontrado=false;
    for (int i=0; i<6; i++) 
    {
        if (nombres[i]==nombreBuscado) 
        {
            cout<<"Produccion de "<<nombreBuscado<<": "<<produccion[i]<<" TM"<<endl;
            encontrado=true;
        }
    }
    if (!encontrado) 
    {
        cout<<"Mineral '"<<nombreBuscado<<"' no encontrado."<<endl;
    }
}

void ordenarMinerales(string nombres[], double produccion[]) 
{
    for (int i=0; i<5; i++) 
    {
        for (int j=0; j<5-i; j++) 
        {
            if (produccion[j]<produccion[j+1]) 
            {
                double tempProd=produccion[j];
                produccion[j]=produccion[j+1];
                produccion[j+1]=tempProd;
                
                string tempNom=nombres[j];
                nombres[j]=nombres[j+1];
                nombres[j+1]=tempNom;
            }
        }
    }
}

void mostrarTabla(string nombres[], double produccion[]) 
{
    cout<<"\nMineral   Produccion TM"<<endl;
    cout<<"----------------------" <<endl;
    for (int i=0; i<6; i++) 
    {
        cout<<nombres[i]<<"    "<<produccion[i]<<endl;
    }
}

