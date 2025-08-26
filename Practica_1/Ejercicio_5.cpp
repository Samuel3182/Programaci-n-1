// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 24/08/2025
// Número de ejercicio: 5

#include<iostream>
using namespace std;
int main()
{
	float c,conversion;
	float k=273.15;
	
	cout<<"Ingrese los grados celsious: ";
	cin>>c;
	
	conversion=c+k;
	cout<<"\nConversion a Kelvin: "<<conversion;
	
	return 0;
}