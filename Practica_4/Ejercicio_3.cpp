// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Fecha creación: 18/09/2025
// Número de ejercicio: 3

#include<iostream>
using namespace std;

void ModificarValores(int n1, int &n2);

int main()
{
    system("cls");
    int n1, n2;

    cout<<"ingrese el primer parametro: ";
    cin>>n1;
    cout<<"ingrese el segundo parametro: ";
    cin>>n2;

    ModificarValores(n1, n2);

    cout<<"\nel nuevo valor 1 es: "<<n1<<endl;
    cout<<"el nuevo valor 2 es: "<<n2<<endl;

    return 0;
}

void ModificarValores(int n1, int &n2)
{
    n1=n1*2;
    n2=n2+10;

}