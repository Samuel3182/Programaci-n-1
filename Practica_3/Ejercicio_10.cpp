// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 15/09/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

double calcularTarifa(double kmRecorridos);

int main() 
{
    system("cls");

    double distancia;
    
    cout<<"Tarifa base: 10 Bs"<<endl;
    cout<<"Precio por km: 2 Bs"<<endl;
    cout<<"Descuento: 10% para distancias mayores a 10 km"<<endl;
    cout<<"\nIngrese la distancia recorrida en km: ";
    cin>>distancia;
    
    if (distancia<0) 
    {
        cout<<"Error: La distancia no puede ser negativa"<<endl;
        return 1;
    }
    
    double tarifa=calcularTarifa(distancia);
    
    cout<<"\nDistancia recorrida: "<<distancia<<" km"<<endl;
    cout<<"Tarifa total: "<<tarifa<<" Bs"<<endl;
    
    return 0;
}

double calcularTarifa(double kmRecorridos) 
{
    double tarifaBase=10.0;
    double precioKm=2.0;
    
    double total=tarifaBase+(precioKm*kmRecorridos);
    
    if (kmRecorridos>10.0) 
    {
        total=total*0.9; // 10% de descuento
    }
    
    return total;
}