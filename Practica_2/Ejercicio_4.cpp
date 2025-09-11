// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 09/09/2025
// Número de ejercicio: 4

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    system("cls");
    srand(time(NULL));
    
    int numeroSecreto=rand()%51;
    int intento;
    int min=0;
    int max=50;
    int intentosRestantes=5;
    
    cout<<"Estoy pensando un numero entre 0 y 50"<<endl;
    
    for (int i=1; i<=5; i++) 
    {
        cout<<"Intento "<<i<<endl;
        cin>>intento;
        
        if (intento==numeroSecreto) 
        {
            cout<<"Felicidades! Adivinaste el numero "<<numeroSecreto<<" en "<<i<<" intentos"<<endl;
            return 0;
        }
        
        if (intento<numeroSecreto) 
        {
            min=intento;
            cout<<"\nEl numero esta entre "<<min<<" y "<<max<<endl;
        } 
        else 
        {
            max=intento;
            cout<<"\nEl numero esta entre "<<min<<" y "<<max<<endl;
        }
        
        intentosRestantes--;
        
        if (intentosRestantes==1) 
        {
            cout<<"\nUltimo intento! El numero es "<<(numeroSecreto%2==0?"par":"impar")<<endl;
        }
    }
    
    cout<<"Lo siento, no adivinaste. El numero era: "<<numeroSecreto<<endl;
    
    return 0;
}