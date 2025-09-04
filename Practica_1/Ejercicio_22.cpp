// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 04/09/2025
// Número de ejercicio: 22

#include<iostream>
using namespace std;
int main ()
{
    int N1, N2;
    system("cls");
    
    cout<<"Ingrese un numero: ";
    cin>>N1;
    cout<<"Ingrese otro numero: ";
    cin>>N2;
    
    
    if (N2!=0 && N1%N2==0) 
    {
        cout<<N1<<" ES multiplo de "<<N2<<endl;
    } 
    else 
    {
        cout<<N1<<" NO es multiplo de "<<N2<<endl;
    }
    
    if (N1!=0 && N2%N1==0) 
    {
        cout<<N2<<" ES multiplo de "<<N1<<endl;
    } 
    else 
    {
        cout<<N2<< " NO es multiplo de " <<N1<<endl;
    }
    
    return 0;

}

