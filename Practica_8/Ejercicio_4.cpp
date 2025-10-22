//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 4

#include <iostream>
using namespace std;

int euclides (int x, int y);
void cambiar(int &x, int &y);

int main()
{
    int x, y;
    cout<<"Ingrese dos numero: "<<endl;
    cin>>x>>y;
    if (x<y)
    {
        cambiar(x, y);
    } 
    int gdc=euclides(x, y);
    cout<<"El mcd es: "<<gdc<<endl;

    return 0;
}

int euclides (int x, int y) 
{
    if (x%y==0) 
    {
        return y;
    } 
    else 
    {
        return euclides(y, x % y);
    }
}

void cambiar(int &x, int &y)
{
    y=y+x;
    x=y-x;
    y=y-x;
}