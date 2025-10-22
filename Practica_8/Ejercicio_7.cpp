//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 7

#include<iostream>
#include<cmath>

using namespace std;
double Q(int n);

int main() 
{
    system("cls");
    int n;
    
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    
    if (n<1) 
    {
        cout<<"n debe ser mayor o igual a 1"<<endl;
        return 1;
    }
    
    double resultado=Q(n);
    cout<<"Q("<<n<<") = "<<resultado<<endl;
    
    return 0;
}

double Q(int n) 
{
    if (n==1) 
    {
        return 1;
    }
    
    else 
    {
        return pow(n,4)+Q(n-1);
    }
}