//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 3

#include<iostream>
#include<vector>
using namespace std;

void mostrar (char matriz[3][4]);
int muertosFilas (char matriz[3][4]);
int muertosColumnas (char matriz[3][4]);
int muertosColumnas (char matriz[3][4]);
vector<pair<int,int>> hallarMuertos (char matriz[3][4]);
int cantidadTotal (char matriz[3][4]);
int muertosColumna1 (char matriz[3][4]);

int main()
{
    system("cls");
    char matriz[3][4]={{'x', 'o', 'x', 'o'}, {'x', 'o', 'o', 'o'}, {'x', 'o', 'x', 'o'}};
    cout<<"a) Mostrar la matriz"<<endl;
    mostrar(matriz);
    cout<<endl;
    
    cout<<"b) Filas y columnas sin muertos vivientes: "<<endl;
    int filas=muertosFilas(matriz);
    int columnas=muertosColumnas(matriz);
    cout<<"la cantidad de filas libres de muertos vivientes es: "<<filas<<endl;
    cout<<"La cantiadad de columnas libres de muertos vivientes es: "<<columnas<<endl;
    cout<<endl;
    
    cout<<"c) Posiciones de los muertos"<<endl;
    vector<pair<int, int>> muertos=hallarMuertos(matriz);
    cout<<"Los muertos estan en las posiciones: "<<endl;
    for(int i=0; i<muertos.size(); i++)
    { 
        cout<<"("<<muertos[i].first<<","<<muertos[i].second<<")"<<endl;
    }
    cout<<endl;
    
    cout<<"d) Cantidad total de muertos"<<endl;
    int muertosTotales=cantidadTotal(matriz);
    cout<<"La cantidad total de muertos que hay son: "<<muertosTotales<<endl;
    cout<<endl;
    
    cout<<"e) Se puede entrar al complejo o no"<<endl;
    int primeraColumna=muertosColumna1(matriz);
    cout<<"Hay "<<primeraColumna<<" muertos en la primera columna"<<endl;
    if(primeraColumna<=2)
    {
        cout<<"Es posible entrar al complejo"<<endl;
    } 
    else 
    {
        cout<<"No es posible entrar al complejo"<<endl;
    }
    return 0;
}

void mostrar (char matriz[3][4])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<matriz[i][j]<< " ";
        }
        cout<<endl;
    }    
}

int muertosFilas (char matriz[3][4])
{
    int filasLibres=0;
    for(int i=0; i<3; i++)
    {
        int muertos=0;
        for(int j=0; j<4; j++)
        {
            if(matriz[i][j]=='x')
            {
                muertos++;
            }
        }
        if(muertos==0)
        {
            filasLibres++;
        }
    }
    
    return filasLibres;
}

int muertosColumnas (char matriz[3][4])
{
    int columnasLibres=0;
    for(int j=0; j<4; j++)
    {
        int muertos=0;
        for(int i=0; i<3; i++)
        {
            if(matriz[i][j]=='x') 
            {
                muertos++;
            }
        }
        if(muertos==0)
        {
            columnasLibres++;
        }
    }
    return columnasLibres;
}

vector<pair<int,int>> hallarMuertos (char matriz[3][4]) 
{
    vector<pair<int,int>> muertos;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(matriz[i][j]=='x')
            {
                muertos.push_back({i,j});
            }
        }
    }
    
    return muertos;
}

int cantidadTotal (char matriz[3][4])
{
    int muertos=0;
    
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(matriz[i][j]=='x')
            {
                muertos++;
            }
        }
    }
    
    return muertos;
}

int muertosColumna1 (char matriz[3][4]) 
{
    int muertos=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(j==0)
            {
                if(matriz[i][j]=='x')
                {
                    muertos++;
                }
            }
        }
    }
    
    int muertos2=0;
    for(int i=0; i<3;i++)
    {
        if(matriz[i][0]=='x')
        {
            muertos2++;
        }
    }
    
    return muertos2;
}