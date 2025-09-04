// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 04/09/2025
// Número de ejercicio: 17

#include<iostream>
using namespace std;
int sumaDivisoresPropios(int n) 
{
    int suma=0;
    
    for (int i=1; i<=n/2; i++) 
    {
        if (n%i==0) 
        {
            suma=suma+i;
        }
    }
    return suma;
}

int main() 
{
    int N1, N2;
    system("cls");
    
    cout<<"Ingrese el 1er numero: ";
    cin>>N1;
    cout<<"Ingrese el 2do numero: ";
    cin>>N2;
    
    int suma1=sumaDivisoresPropios(N1);
    int suma2=sumaDivisoresPropios(N2);
    
    if (suma1==N2 && suma2==N1) 
    {
        cout<<"\nLos numeros son amigos"<<endl;
    } 
    else 
    {
        cout<< "\nLos numeros NO son amigos"<<endl;
    }
    
    return 0;
}