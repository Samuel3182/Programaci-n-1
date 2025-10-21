//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 12

#include<iostream>
#include<string>
using namespace std;

bool esPalindromo(string texto);

int main() 
{
    system("cls");
    string texto;
    
    cout<<"Ingrese un texto para verificar si es palindromo: ";
    getline(cin, texto);
    
    if (esPalindromo(texto)) 
    {
        cout<<"El texto es palindromo"<<endl;
    } 
    else 
    {
        cout<<"El texto no es palindromo"<<endl;
    }
    
    
    return 0;
}

bool esPalindromo(string texto) 
{
    string textoLimpio="";
    
    for (int i=0; i<texto.length(); i++) 
    {
        char c=texto[i];
        
        if ((c>='a' && c<='z') || (c>='A' && c<='Z')) 
        {
            textoLimpio+=tolower(c);
        }
    }
    
    int izquierda=0;
    int derecha=textoLimpio.length()-1;
    
    while (izquierda<derecha) 
    {
        if (textoLimpio[izquierda]!=textoLimpio[derecha]) 
        {
            return false;
        }
        izquierda++;
        derecha--;
    }
    
    return true;
}