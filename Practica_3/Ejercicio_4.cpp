// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 11/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

double calcularIMC(double peso, double altura);
int main() 
{
    system("cls");
    double peso, altura;
    
    cout<<"Ingrese su peso (kg): ";
    cin>>peso;
    
    cout<<"Ingrese su altura (m): ";
    cin>>altura;
    
    double imc=calcularIMC(peso, altura);
    
    cout<<"\nSu IMC es: "<<imc<<endl;
    
    cout<<"Clasificacion: ";
    if (imc<18.5) 
    {
        cout<<"Bajo peso";
    }
    else if (imc<25)
    {
        cout<<"Peso normal";
    } 
    else if (imc<30)
    {
        cout<<"Sobrepeso";
    } 
    else if (imc<35)
    {
        cout<<"Obesidad grado I";
    }
    else if (imc<40) 
    {
        cout<<"Obesidad grado II";
    }
    else 
    {
        cout<<"Obesidad grado III";
    }
    
    return 0;
}

double calcularIMC(double peso, double altura) 
{
    return peso/(altura*altura);
}