// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 24/08/2025
// Número de ejercicio: 3

#include<iostream>
using namespace std;
int main()
{
	float B;
	float A;
	float Area;
	
	cout<<"Ingresar base: ";
	cin>>B;
	cout<<"Ingresar altura: ";
	cin>>A;
	
	Area = B*A/2;
	cout<<"\nEl area es: "<<Area;
	
	return 0; 
}