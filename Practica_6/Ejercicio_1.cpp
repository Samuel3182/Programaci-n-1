//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 1

#include<iostream>
#include<cmath>
using namespace std;

int main() 
{
    system("chcp 65001");
    system("cls");
    
    int edades[100];
    int n=0;
    int edad;
    
    cout<<"Ingrese edades (ingrese -1 para terminar):"<<endl;
    
    while (n<100) 
    {
        cout<<"Edad "<<n+1<<": ";
        cin>>edad;
        
        if (edad==-1) break;
        if (edad<0 || edad>150) continue;
        
        edades[n]=edad;
        n++;
    }
    
    if (n<2)
    {
        cout<<"Se necesitan al menos 2 edades"<<endl;
        return 0;
    }
    
    double suma=0;
    for (int i=0; i<n; i++)
    {
        suma+=edades[i];
    }
    double promedio=suma/n;
    
    double sumaCuadrados=0;
    for (int i=0; i<n; i++) 
    {
        double diferencia=edades[i]-promedio;
        sumaCuadrados+=diferencia*diferencia;
    }
    double desviacion=sqrt(sumaCuadrados/n);
    
    cout<<"\nPersonas: "<<n<<endl;
    cout<<"Promedio: "<<promedio<<" años"<<endl;
    cout<<"Desviacion tipica: "<<desviacion<<" años"<<endl;
    
    return 0;
}