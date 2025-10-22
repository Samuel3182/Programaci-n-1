//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 3

#include<iostream>
#include<string>
using namespace std;

string capitalizarPalabras(string texto);

int main() 
{
    system("chcp 65001");
    system("cls");
    string texto;
    
    cout<<"Ingrese un texto: ";
    getline(cin,texto);
    
    string resultado=capitalizarPalabras(texto);
    
    cout<<"\nTexto con mayusculas: "<<resultado<<endl;
    
    return 0;
}

string capitalizarPalabras(string texto) 
{
    bool nuevaPalabra=true;
    
    for (int i=0; i<texto.length(); i++) 
    {
        if (nuevaPalabra && texto[i]>='a' && texto[i]<='z') 
        {
            texto[i]=texto[i]-32;
            nuevaPalabra=false;
        }
    
        else if (!nuevaPalabra && texto[i]>='A' && texto[i]<='Z') 
        {
            texto[i]=texto[i]+32;
        }
        
        if (texto[i]==' ' || texto[i]=='\t' || texto[i]=='\n' || texto[i]=='.' || texto[i]==',' || texto[i]==';' || texto[i]==':' || texto[i]=='!' || texto[i]=='?')
        {
            nuevaPalabra=true;
        } 
        else if (texto[i] != ' ') 
        {
            nuevaPalabra=false;
        }
    }
    
    return texto;
}

