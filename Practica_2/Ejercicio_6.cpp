// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 09/09/2025
// Número de ejercicio: 6

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>

using namespace std;

bool esPrimo(int numero) 
{
    if (numero<=1) return false;
    if (numero==2) return true;
    if (numero%2==0) return false;
    
    for (int i=3; i<=sqrt(numero); i+=2) 
    {
        if (numero%i==0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    system("cls");
    srand(time(0));
    int n;
    int contadorPrimos=0;
    
    cout<<"Ingrese la cantidad de numeros a generar: ";
    cin>>n;
    
    for (int i=0; i<n; i++) 
    {
        int numero=rand()%10000+1;
        cout<<numero;
        
        if (esPrimo(numero)) 
        {
            cout<<" [Primo]";
            contadorPrimos++;
        }
        cout<<endl;
    }
    
    cout<<"\nTotal de numeros generados: "<<n<<endl;
    cout<<"Cantidad de numeros primos: "<<contadorPrimos<<endl;
    
    return 0;
}