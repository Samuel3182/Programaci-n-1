// Materia: Programación I, Paralelo 4
// Autor: Willy Edwin Tenorio Palza
// Carnet: 6785053 L.P.
// Carrera del estudiante: Samuel Sebastian Zarate Zabala
// Fecha creación: 09/09/2025
// Número de ejercicio: 3

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    system("cls");
    srand(time(NULL));
    
    int n=rand()%10+1;
    int factorial=1;
    
    cout<<"Numero aleatorio generado: "<<n<<endl;
    
    for (int i=1; i<=n; i++) 
    {
        factorial=factorial*i;
    }
    
    cout<<"El factorial de "<<n<<" es: "<<factorial<<endl;
    
    return 0;

}