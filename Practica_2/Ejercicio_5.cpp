// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 09/09/2025
// Número de ejercicio: 5

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    system("cls");
    srand(time(NULL));
    
    int n;
    int suma=0;
    int mayor=0;
    int menor=1001;
    
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;
    
    for (int i=0; i<n; i++) 
    {
        int numero=rand()%1000+1;
        
        cout<<numero<<"\n";
        
        suma+=numero;
        
        if (numero>mayor) 
        {
            mayor=numero;
        }
        
        if (numero<menor) 
        {
            menor=numero;
        }
        
        if ((i+1)%10==0) 
        {
            cout<<endl;
        }
    }
    
    double promedio=static_cast<double>(suma)/n;
    
    cout<<"a. Sumatoria de todos los numeros: "<<suma<<endl;
    cout<<"b. Promedio: "<<promedio<<endl;
    cout<<"c. Mayor valor generado: "<<mayor<<endl;
    cout<<"d. Menor valor generado: "<<menor<<endl;
    
    return 0;
}