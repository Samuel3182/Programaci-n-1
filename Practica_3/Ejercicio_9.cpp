// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 17/09/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

void calcularTiempoLaboral(int minTrabajados);

int main() 
{
    system("chcp 65001");
    system("cls");
    int min;
    
    cout<<"Ingrese el tiempo trabajado en minutos: ";
    cin>>min;
    
    if (min<0) 
    {
        cout<<"El tiempo no puede ser negativo"<<endl;
    } 
    else 
    {
        calcularTiempoLaboral(min);
    }
    
    return 0;
}

void calcularTiempoLaboral(int minTrabajados) 
{
    const int jornadaMin=8*60;
    int diferencia;
    
    if (minTrabajados>jornadaMin) 
    {
        diferencia=minTrabajados-jornadaMin;
        int horasExtra=diferencia/60;
        int minExtra=diferencia%60;
        
        cout<<"Ha trabajado EXTRA:"<<endl;
        cout<<horasExtra<<" horas y "<<minExtra<<" minutos"<<endl; 
    } 
    else if (minTrabajados<jornadaMin) 
    {
        diferencia=jornadaMin-minTrabajados;
        int horasDebe=diferencia/60;
        int minDebe=diferencia%60;
        
        cout<<"Debe tiempo a la empresa:" << endl;
        cout<<horasDebe<<" horas y "<<minDebe<<" minutos"<<endl;
        
    } 
    else 
    {
        cout<<"Ha cumplido con su jornada laboral"<<endl;
    }
}

