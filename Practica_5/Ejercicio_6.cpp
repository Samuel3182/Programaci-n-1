//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 6

#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    system("cls");
    int tamaño=5;
    
    vector<int> vector1(tamaño);
    vector<int> vector2(tamaño);
    vector<int> vector3(tamaño);
    
    cout<<"Ingrese 5 valores para el vector 1:"<<endl;
    for(int i=0; i<tamaño; i++) 
    {
        cout<<"Vector1 ["<<i<<"]: ";
        cin>>vector1[i];
    }
    
    cout<<"\nIngrese 5 valores para el vector 2:"<<endl;
    for(int i=0; i<tamaño; i++) 
    {
        cout<<"Vector2 ["<<i<<"]: ";
        cin>>vector2[i];
    }
    
    for(int i=0; i<tamaño; i++) 
    {
        vector3[i]=vector1[i]+vector2[i];
    }
    
    cout<<"vector 1: ";
    for(int i=0; i<tamaño; i++) 
    {
        cout<<vector1[i]<<" ";
    }
    
    cout<<"\nvector 2: ";
    for(int i=0; i<tamaño; i++) 
    {
        cout<<vector2[i]<<" ";
    }
    
    cout<<"\nSuma de los 2 vectores en vector 3: ";
    for(int i=0; i<tamaño; i++) 
    {
        cout<<vector3[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}