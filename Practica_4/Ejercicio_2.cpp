// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Fecha creación: 18/09/2025
// Número de ejercicio: 2

#include<iostream>
#include<cmath>
using namespace std;

float calcularVolumen(float radio, float h);

int main()
{
    system("cls");
    float h=10.0;
    float radio; 

    cout<<"ingrese el radio: ";
    cin>>radio;

    cout<<"\nEl volumen del cilindro es: "<<calcularVolumen(radio, h);

    return 0;

}

float calcularVolumen(float radio, float h)
{

    float volumen=0, PI=3.14159;

    volumen=PI*pow(radio,2)*h;

    return volumen;
}