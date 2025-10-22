//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 8

#include<iostream>
using namespace std;
void secuenciaUllman(int n);

int main() 
{
    system("cls");
    int n;
    cout<<"Ingrese un entero n>1: ";
    cin>>n;
    
    if (n<=1) 
    {
        cout<<"Error: n debe ser mayor que 1"<<endl;
        return 1;
    }
    
    cout<<"Secuencia para "<<n<<": ";
    secuenciaUllman(n);
    cout<<endl;
    
    return 0;
}

void secuenciaUllman(int n) 
{
    cout<<n<<" ";
    
    if (n==1) 
    {
        return;
    }
    
    else if (n%2==0) 
    {
        secuenciaUllman(n/2);
    }
    
    else 
    {
        secuenciaUllman(3*n+1);
    }
}

