//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 4

#include <iostream>
using namespace std;

int main() 
{
    system("cls");
    int n, k;
    
    cout<<"Ingrese la cantidad de numeros: ";
    cin>>n;

    int vector[n];
    
    cout<<"Ingrese "<<n<<" numeros:"<<endl;

    for (int i=0; i<n; i++) 
    {
        cout<<"Numero "<<i+1<<": ";
        cin>>vector[i];
    }
    
    cout<<"Ingrese cuantas posiciones rotar a la derecha: ";
    cin>>k;
    
    cout<<"\nVector original: ";

    for (int i=0; i<n; i++) 
    {
        cout<<vector[i]<<" ";
    }
    cout<<endl;
    
    int vectorRotado[n];
    
    for (int i=0; i<n; i++) 
    {
        int nuevaPosicion=(i+k)%n;
        vectorRotado[nuevaPosicion]=vector[i];
    }
    
    cout<<"Vector rotado "<<k<<" posiciones: ";

    for (int i=0; i<n; i++) 
    {
        cout<<vectorRotado[i]<< " ";
    }
    cout<<endl;
    
    return 0;
}