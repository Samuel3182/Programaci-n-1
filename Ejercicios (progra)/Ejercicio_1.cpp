//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 1

#include<iostream>
using namespace std;
void leerMatriz(int matriz[][100], int filas, int columnas);
void intercambiarFila(int matriz[][100], int filas, int columnas);
void mostrarMatriz(int matriz[][100], int filas, int columnas, string nombre);

int main() 
{
    system("cls");
    int filas, columnas;
    
    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    cout<<"Ingrese el numero de columnas: ";
    cin>>columnas;
    
    int matriz[100][100];
  
    leerMatriz(matriz, filas, columnas);
    
    mostrarMatriz(matriz, filas, columnas, "original");
    
    intercambiarFila(matriz, filas, columnas);
    
    mostrarMatriz(matriz, filas, columnas, "modificada");
    
    return 0;
}

void leerMatriz(int matriz[][100], int filas, int columnas) 
{
    cout << "Ingrese los elementos de la matriz "<<filas<<"x"<<columnas<<":"<<endl;
    for (int i=0; i<filas; i++) 
    {
        for (int j=0; j<columnas; j++) 
        {
            cin>>matriz[i][j];
        }
    }
}

void intercambiarFila(int matriz[][100], int filas, int columnas) 
{
    for (int j=0; j<columnas; j++) 
    {
        int temp=matriz[0][j];
        matriz[0][j]=matriz[filas-1][j];
        matriz[filas-1][j]=temp;
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