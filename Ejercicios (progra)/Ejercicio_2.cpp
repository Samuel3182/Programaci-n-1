//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 2

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int numeroAleatorio(int A, int B);
void generarMatriz(int matriz[][100], int N, int A, int B);
void mostrarMatriz(int matriz[][100], int N);

int main() 
{
    system("cls");
    srand(time(NULL));
    int N, A, B, matriz[100][100];
    
    cout<< "=== MATRIZ ALEATORIA Y CALCULOS ===\n";
    cout<<"Orden (N): "; 
    cin>>N;
    cout<<"Minimo (A): "; 
    cin>>A;
    cout<<"Maximo (B): "; 
    cin>>B;
    
    generarMatriz(matriz, N, A, B);
    mostrarMatriz(matriz, N);
    
    int sumaUltimaCol=0, productoUltimaFil=1;
    int mayor=matriz[0][0], filaMayor=0, colMayor=0;
    double suma=0, sumaCuadrados=0;
    int total=N*N;
    
    for (int i=0; i<N; i++) 
    {
        for (int j=0; j<N; j++) 
        {
            if (j==N-1) sumaUltimaCol+=matriz[i][j];
            
            if (i==N-1) productoUltimaFil*=matriz[i][j];
            
            if (matriz[i][j]>mayor) 
            {
                mayor=matriz[i][j];
                filaMayor=i;
                colMayor=j;
            }
            suma+=matriz[i][j];
            sumaCuadrados+=matriz[i][j]*matriz[i][j];
        }
    }
    
    double media=suma/total;
    double desviacion=sqrt(sumaCuadrados/total-media*media);
    
    cout<<"\n1. Suma ultima columna: "<<sumaUltimaCol<<endl;
    cout<<"2. Producto ultima fila: "<<productoUltimaFil<<endl;
    cout<<"3. Mayor valor: "<<mayor<<" en ["<<filaMayor<<"]["<<colMayor<<"]\n";
    cout<<"4. Desviacion estandar: "<<desviacion<<endl;
    
    return 0;
}

int numeroAleatorio(int A, int B) 
{
    return rand()%((B-A+1)+A);
}

void generarMatriz(int matriz[][100], int N, int A, int B) 
{
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            matriz[i][j]=numeroAleatorio(A, B);
        }
    }           
}

void mostrarMatriz(int matriz[][100], int N) 
{
    cout<<"\nMatriz "<<N<<"x"<<N<<":\n";

    for (int i=0; i<N; i++) 
    {
        for (int j=0; j<N; j++)
        {
            cout<<matriz[i][j]<<" ";
        }
            
        cout<<endl;
    }
}