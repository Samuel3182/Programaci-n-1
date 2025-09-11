// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 11/09/2025
// Número de ejercicio: 2

#include<iostream>
using namespace std;

double celsiusAFahrenheit(double celsius);
int main() 
{
    system("cls");
    system("chcp 65001");
    double celsius;
    
    cout<<"Ingrese la temperatura en Celsius: ";
    cin>>celsius;
    
    double fahrenheit=celsiusAFahrenheit(celsius);
    
    cout<<celsius<<"°C = "<<fahrenheit<<"°F"<<endl;
    
    return 0;
}

double celsiusAFahrenheit(double celsius) 
{
    return (celsius*9.0/5.0)+32.0;
}
