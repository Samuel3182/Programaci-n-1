// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 25/08/2025
// Número de ejercicio: 10

#include<iostream>
using namespace std;
int main()
{
    int nota;

    cout<<"Ingrese su nota: ";
    cin>>nota;
    
    if(nota>=51)
    {
        cout << "\nAprobado - ";
        
        if(nota==100) 
        {
            cout<<"Calificacion = A+"<<endl;
        } 
        else if(nota<=95) 
        {
            cout<<"Calificacion = A"<<endl;
        } 
        else if(nota<=90) 
        {
            cout<<"Calificacion = B+"<<endl;
        } 
        else if(nota<=80) 
        {
            cout<<"Calificacion = B"<<endl;
        } 
        else if(nota<=70) 
        {
            cout<<"Calificacion = C+"<<endl;
        } 
        else if(nota<=60) 
        {
            cout<<"Calificacion = C"<<endl;
        }  
       
    } 
    else 
    {
        cout<<"Reprobado"<<endl;
    }

    return 0;

}
