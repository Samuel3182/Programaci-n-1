//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 6

#include<iostream>
#include<vector>
using namespace std;
bool sonIguales(vector<int> a, vector<int> b, int i=0);

int main() 
{
    system("cls");
    
    cout<<sonIguales({1,2,3}, {1,2,3})<<endl;
    cout<<sonIguales({1,2,3}, {1,2})<<endl;

    return 0;
}

bool sonIguales(vector<int> a, vector<int> b, int i=0) 
{
    if (i>=a.size() && i>=b.size()) 
    {
        return true;
    }
    if (i>=a.size() || i>=b.size())
    {
        return false;
    } 
    if (a[i]!=b[i])
    {
        return false;
    }

    return sonIguales(a, b, i+1);
}

