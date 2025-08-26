// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 24/08/2025
// Número de ejercicio: 4

#include<iostream>
using namespace std;
int main()
{
	double volumen;
	double r, r3=1.0;
	double PI=3.14159;
	
	cout<<"ingrese el radio de la esfera: ";
	cin>>r;
	
	for(int i=0; i<3 ;i++)
	{
		r3=r*r3;
	}
	//r3=r*r*r;
	volumen = (4.0/3.0)*PI*r3;
	cout<<"\nEl volumen de la esfera es: "<<volumen;
	
	return 0;
	
}