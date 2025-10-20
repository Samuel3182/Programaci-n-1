//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 11

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> separar (string texto, char delimitador);
void mostrar (vector<string> palabras);

int main()
{
    system("cls");
    
    string texto;
    cout<<"Ingrese un texto: ";
    getline(cin, texto);
    
    char delimitador;
    
    cout<<"Ingrese el delimitador: ";
    cin>>delimitador;
    
    vector<string> palabras=separar(texto, delimitador);
    
    cout<<"\nEl mensaje sin el delimitador es: "<<endl;
    mostrar(palabras);
    
    return 0;
}

vector<string> separar (string texto, char delimitador)
{
    int n=texto.length();
    vector<string> palabras;
    string p="";
    
    for(int i=0; i<n; i++)
    {
        if(texto[i]!=delimitador)
        {
            p=p+texto[i];
        } 
        else if (texto[i]==delimitador && p.length()>0)
        {
            palabras.push_back(p);
            p="";
        }
    }
    
    if(p.length()>0)
    {
        palabras.push_back(p);
    }
    
    return palabras;
}

void mostrar (vector<string> palabras)
{
    for(string i:palabras)
    {
        cout<<i<<endl;
    }
}

