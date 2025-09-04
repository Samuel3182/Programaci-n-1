// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 04/09/2025
// Número de ejercicio: 18

#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int contador=0;
    int n=2; 
    
    cout<<"Los primeros 100 numeros primos son:"<<endl;
    
    while (contador<100) 
    {
        bool P=true;
        
        if (n<=1) 
        {
            P=false;
        } 
        else 
        {
            for (int i=2; i*i<=n; i++) 
            {
                if (n%i==0) 
                {
                    P=false;
                }
            }
        }
        
        if (P) 
        {
            cout<<n<< " ";
            contador++;
            
            if (contador%10==0) 
            {
                cout << endl;
            }
        }
        
        n++;
    }
    
    return 0;
}