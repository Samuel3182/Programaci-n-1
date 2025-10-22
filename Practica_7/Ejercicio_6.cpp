//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 6

#include <iostream>
using namespace std;

void leerMatriz(int matriz[][100], int filas, int columnas, string nombre);
void transponerMatriz(int matriz[][100], int transpuesta[][100], int filas, int columnas);
void mostrarMatriz(int matriz[][100], int filas, int columnas, string nombre) ;

int main() 
{
    system("cls");
    int N, M;
    
    cout<<"Ingrese las dimensiones de la matriz:" << endl;
    cout<<"N (filas): ";
    cin>>N;
    cout<<"M (columnas): ";
    cin>>M;
    
    int matrizOriginal[100][100];
    int matrizTranspuesta[100][100]; 
   
    leerMatriz(matrizOriginal, N, M, "original");
    transponerMatriz(matrizOriginal, matrizTranspuesta, N, M);
    
    mostrarMatriz(matrizOriginal, N, M, "original");
    mostrarMatriz(matrizTranspuesta, M, N, "transpuesta");
    
    return 0;
}

void leerMatriz(int matriz[][100], int filas, int columnas, string nombre) 
{
    cout<<"Ingrese los elementos de la matriz "<<nombre<<" ("<<filas<<"x"<<columnas<<"):"<<endl;
    for (int i=0; i<filas; i++) 
    {
        for (int j=0; j<columnas; j++) 
        {
            cout<<nombre<<"["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
}

void transponerMatriz(int matriz[][100], int transpuesta[][100], int filas, int columnas) 
{
    for (int i=0; i<filas; i++) 
    {
        for (int j=0; j<columnas; j++) 
        {
            transpuesta[j][i]=matriz[i][j];
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