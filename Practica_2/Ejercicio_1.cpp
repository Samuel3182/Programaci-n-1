// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 03/09/2025
// Número de ejercicio: 1

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    int Pares=0;
    
    srand(time(NULL));
    
    cout<<"Ingrese el numero de lanzamientos: ";
    cin>>n;
    
    for (int i=0; i<n; i++) 
    {
        int resultado=rand()%6+1;
        
        cout<<"Lanzamiento "<<i+1<<": "<<resultado;
        
        if (resultado%2==0)
        {
            cout<<" (PAR)";
            Pares++;
        }
        cout << endl;
    }
    
    cout<<"\nTotal de lanzamientos: "<<n<<endl;
    cout<<"Caras pares obtenidas: "<<Pares<<endl;
    
    return 0;

}