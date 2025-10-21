//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 5

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    system("cls");
    int n1, n2;
    
    cout<<"Ingrese la cantidad de clientes de la empresa 1: ";
    cin>>n1;
    
    string empresa1[n1];
    for (int i=0; i<n1; i++) 
    {
        cout<<"Cliente "<<i+1<<": ";
        cin>>empresa1[i];
    }
    
    cout<<"\nIngrese la cantidad de clientes de la empresa 2: ";
    cin>>n2;
    
    string empresa2[n2];

    for (int i=0; i<n2; i++) 
    {
        cout<<"Cliente "<<i+1<<": ";
        cin>>empresa2[i];
    }
    
    bool clientesComunes=false;
    
    for (int i=0; i<n1; i++) 
    {
        for (int j=0; j<n2; j++) 
        {
            if (empresa1[i]==empresa2[j]) 
            {
                cout<<"Clientes en comun: "<<empresa1[i]<<endl;
                clientesComunes=true;
            }      
        }
    }
    if (!clientesComunes)
    {
        cout<<"No hay clientes en comun";
    }
    
    return 0;
}