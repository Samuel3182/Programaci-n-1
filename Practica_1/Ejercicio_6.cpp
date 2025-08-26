// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 24/08/2025
// Número de ejercicio: 6

#include<iostream>
using namespace std;
int main()
{
	int N;
	
	cout<<"Ingrese un numero: ";
	cin>>N;
	
    
    if (N>0) 
	{
        cout<<"\nEl numero es positivo.";
    }
    else if (N<0) 
	{
        cout<<"\nEl numero es negativo.";
    }
    else 
	{
        cout<<"\nEl numero es cero.";
    }
    
    return 0;
}