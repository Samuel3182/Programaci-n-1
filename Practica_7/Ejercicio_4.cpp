//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 4

#include<iostream>
using namespace std;

void generarMatriz(int matriz[][100], int n);
void mostrarMatriz(int matriz[][100], int filas, int columnas, string nombre);

int main() 
{
    system("cls");
    int n;
    
    cout<<"Ingrese el orden n de la matriz (nxn): ";
    cin>>n;
    
    int matriz[100][100];
    
    generarMatriz(matriz, n);
    mostrarMatriz(matriz, n, n, "generada");
    
    return 0;
}

void generarMatriz(int matriz[][100], int n) 
{
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++) 
        {
            matriz[i][j]=2*i+j+1;
        }
    }
}

void mostrarMatriz(int matriz[][100], int filas, int columnas, string nombre) 
{
    cout<<"\nMatriz "<<nombre<<" ("<<filas<<"x"<<columnas<<"):"<<endl;
    for (int i=0; i<filas; i++) 
    {
        for (int j=0; j<columnas; j++) 
        {
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
}