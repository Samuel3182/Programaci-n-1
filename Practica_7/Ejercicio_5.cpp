//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 5

#include<iostream>
#include<vector>
using namespace std;

void resultado(vector<vector<int>> matriz1, vector<vector<int>> matriz2);

int main()
{
    system("cls");
    int n, m;
    cout<<"Ingrese el valor de n: ";
    cin>>n;
    cout<<"Ingrese el valor de m: ";
    cin>>m;
    
    vector<vector<int>> matriz1(n, vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>matriz1[i][j];
        }
    }
    
    vector<vector<int>> matriz2(m, vector<int>(n));
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>matriz2[i][j];
        }
    }
    
    resultado(matriz1, matriz2);
    
    return 0;
}

void resultado(vector<vector<int>> matriz1, vector<vector<int>> matriz2)
{
    int n=matriz1.size();
    int m=matriz1[0].size();
    int p=matriz2[0].size();
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<p; j++)
        {
            int r=0;
            for(int k=0; k<m; k++)
            {
                r+=matriz1[i][k]*matriz2[k][j];
            }
            cout<<r<<" ";
        }
        cout<<endl;
    }
}

