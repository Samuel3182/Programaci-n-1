// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 04/09/2025
// Número de ejercicio: 23

#include<iostream>
using namespace std;
int main() 
{
    system("cls");
    int n;
    
    cout<<"Ingrese un numero entero: ";
    cin>>n;
    
    int NO=n;
    int NI=0;

    while (n>0) 
    {
        int digito=n%10;
        NI=NI*10+digito;
        n=n/10;
    }
    
    cout<<"\nNumero original: "<<NO<<endl;
    cout<<"Numero invertido: "<<NI<<endl;
    
    return 0;
}