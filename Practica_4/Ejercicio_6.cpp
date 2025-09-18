// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Fecha creación: 18/09/2025
// Número de ejercicio: 6

#include<iostream>
using namespace std;

int SumaDigitosNoCero(int n);
bool Primo(int n);

int main() 
{
    system("cls");
    int n;
    
    cout<<"Ingrese un numero entero: ";
    cin>>n;
    
    int suma=SumaDigitosNoCero(n);
    
    cout<<"\nSuma de digitos distintos de cero es: "<<suma<<endl;
    
    // Verificar si la suma es un número primo
    if (Primo(suma)) 
    {
        cout<<"La suma "<<suma<<" Es un numero primo"<<endl;
    } 
    else 
    {
        cout<<"La suma "<<suma<<" no es un numero primo"<<endl;
    }
    
    return 0;
}

int SumaDigitosNoCero(int n) 
{
    int suma=0;
    int temp=abs(n); //Trabajar con valor absoluto
    
    while (temp>0) 
    {
        int digito=temp%10; //Obtener el último dígito
        
        if (digito!=0) 
        {   
            //Solo sumar si no es cero
            suma=suma+digito;
        }
        temp=temp/10; //Eliminar el último dígito
    }
    
    return suma;
}
// Función para verificar si un número es primo
bool Primo(int n) 
{
    if (n<=1)
    {
        return false;
    }
    if (n==2) 
    {
        return true;
    }   
    if (n%2==0) 
    {
        return false;
    }
    
    for (int i=3; i<=n/2; i=i+2) 
    {
        if (n%i==0) 
        {
            return false;
        }
    }
    
    return true;
}

