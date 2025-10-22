//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 5

#include<iostream>
#include<vector>

using namespace std;
int suma (int i, vector<int> vi);

int main()
{
    system("cls");
    int n;
    cout<<"Ingrese el tamanio del vector: " << endl;
    cin>>n;
    vector<int> vi(n);
    for(int i=0; i<n; i++)
    {
        cin>>vi[i];
    }
    
    int s=suma(n-1, vi);
    cout<<"La suma de los valores del vector es: "<<s<<endl;
    
    return 0;
}

int suma (int i, vector<int> vi)
{
    if(i==0)
    {
        return vi[0];
    } 
    else 
    {
        return vi[i]+suma(i-1, vi);
    }
}