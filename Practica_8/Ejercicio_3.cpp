//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 3

#include<iostream>
using namespace std;

int fibonacci(int n);

int main() 
{
    system("cls");
    int n;

    cout<<"Ingrese la posicion n: ";
    cin>>n;
    
    cout<<"F("<<n<<") = "<<fibonacci(n)<<endl;
    
    cout<<"Secuencia completa: ";
    for (int i=0; i<=n; i++) 
    {
        cout<<fibonacci(i)<< " ";
    }
    cout<<endl;
    
    return 0;
}

int fibonacci(int n)
{
    if (n<=0) 
    {
        return 0;
    }      
    if (n==1)
    {
        return 1;
    }       
    return fibonacci(n-1)+fibonacci(n-2);
}