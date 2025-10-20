//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 4

#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    system("cls");
    int N;
    
    cout<<"Ingrese la dimension N de los vectores: ";
    cin>>N;
    
    vector<int> vector1(N);
    vector<int> vector2(N);
    vector<int> resultado(N);
    
    cout<<"Ingrese los valores del primer vector:"<<endl;
    for(int i=0; i<N; i++) 
    {
        cout<<"Elemento "<<i+1<<": ";
        cin>>vector1[i];
    }
    
    cout << "Ingrese los valores del segundo vector:" << endl;
    for(int i=0; i<N; i++) 
    {
        cout<<"Elemento "<<i+1<<": ";
        cin>>vector2[i];
    }
    
    for(int i=0; i<N; i++) 
    {
        resultado[i]=vector1[i]*vector2[i];
    }
    
    cout<<"\nResultado de la multiplicacion:"<<endl;
    cout<<"Vector 1: ";
    for(int i=0; i<N; i++) 
    {
        cout<<vector1[i]<<" ";
    }
    
    cout<<"\nVector 2: ";
    for(int i=0; i<N; i++) 
    {
        cout<<vector2[i]<<" ";
    }
    
    cout << "\nResultado: ";
    for(int i=0; i<N; i++) 
    {
        cout<<resultado[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}