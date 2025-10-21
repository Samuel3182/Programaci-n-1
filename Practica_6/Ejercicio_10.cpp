//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 20/10/2025
//Numero de Ejercicio: 10

#include<iostream>
#include<string>
using namespace std;

int main() 
{
    string cadena;
    
    cout<<"Ingrese una cadena con digitos y letras: ";
    getline(cin, cadena);
    
    cout<<"Cadena original: "<<cadena<<endl;
    
    string cadenaSinDigitos="";
    
    for (int i=0; i<cadena.length(); i++) 
    {
        if (cadena[i]<'0' || cadena[i]>'9') 
        {
            cadenaSinDigitos+=cadena[i];
        }
    }
    
    cout<<"Cadena sin digitos: "<<cadenaSinDigitos<<endl;
    
    return 0;
}