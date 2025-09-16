// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Fecha creación: 16/09/2025
// Número de ejercicio: 7

#include <iostream>
using namespace std;

void intercambiar(int &n, int &m);
int mcd (int n, int m);
int mcm (int n, int m);

int main()
{
    system("cls");
    int n, m;
    
    cout<<"Ingrese el 1er numero: ";
    cin>>n;
    cout<<"Ingrese el 2do numero: ";
    cin>>m;

    if(n<m)
    {
        intercambiar(n, m);
    }
    
    int gcd=mcd(n, m);
    int multiplo=mcm(n, m);
    
    cout<<"\nEl mcd es: "<<gcd<<endl;
    cout<<"El mcm es: "<<multiplo<<endl;
    
}

void intercambiar(int &n, int &m)
{
    int c=n;
    n=m;
    m=c;
}

int mcd (int n, int m)
{
    int r=1;
    
    while (r!=0)
    {
        int d=n/m;
        r=n%m;
        n=m;
        if(r!=0)
        {
            m=r;
        }
    }

    return m;
}

int mcm (int n, int m)
{
    int i=1, a=1, r=1;
    
    while(r!=0)
    {
        a=n*i;
        r=a%m;
        i++;
    }
    
    return a;
}