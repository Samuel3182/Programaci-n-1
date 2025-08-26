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
	int edad;
	cout<<"Ingrese su edad: ";
	cin>>edad;
	
	if(edad<=12)
	{
		cout<<"Usted es niño"<<endl;
	}
	else if(edad<=18)
	{
		cout<<"Usted es adolescente"<<endl;
	}
	else if(edad<60)
	{
		cout<<"Usted es mayor de edad"<<endl;
	}
	else
	{
		cout<<"Usted es adulto mayor"<<endl;
	}
	
	return 0;
	
}