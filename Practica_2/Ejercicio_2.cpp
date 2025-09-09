// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 09/09/2025
// Número de ejercicio: 2

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    int caras=0;
    int cruces=0;
    
    srand(time(NULL));
    
    cout<<"Ingrese el numero de lanzamientos: ";
    cin>>n;
    
    for (int i=0; i<n; i++) 
    {
        int resultado=rand()%2;
        
        cout<<"Lanzamiento "<<i+1<<": ";
        
        if (resultado==0) 
        {
            cout<<"Cara";
            caras++;
        } 
        else 
        {
            cout<<"Cruz";
            cruces++;
        }
        cout<<endl;
    }
    
    double porcentajeCaras=((double)caras/n)*100;
    double porcentajeCruces=((double)cruces/n)*100;
    
    cout<<"\nTotal de lanzamientos: "<<n<<endl;
    cout<<"Caras obtenidas: "<<caras<<endl;
    cout<<"Cruces obtenidas: "<<cruces<<endl;
    cout<<"Porcentaje de caras: "<<porcentajeCaras<<"%"<<endl;
    cout<<"Porcentaje de cruces: "<<porcentajeCruces<<"%"<<endl;
    
    return 0;
}
