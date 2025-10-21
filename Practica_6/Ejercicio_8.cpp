//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 8

#include<iostream>
#include<string>
using namespace std;

int main() 
{
    system("cls");
    string correo;
    cout<<"Ingrese una direccion de correo electronico: ";
    cin>>correo;
    
    int contadorArroba=0;
    int posicionArroba=-1;
    bool tienePuntoDespuesArroba=false;
    
    for (int i=0; i<correo.length(); i++) 
    {
        if (correo[i]=='@') 
        {
            contadorArroba++;
            posicionArroba=i;
        }
    }
    
    if (posicionArroba!=-1)
    {
        for (int i=posicionArroba+1; i<correo.length(); i++) 
        {
            if (correo[i]=='.') 
            {
                tienePuntoDespuesArroba=true;
            }
        }
    }
    
    if (contadorArroba==1 && tienePuntoDespuesArroba) 
    {
        cout<<"Correo electronico valido"<<endl;
    } 
    else 
    {
        cout<<"Correo electronico invalido"<<endl;
        
        if (contadorArroba==0) 
        {
            cout<<"Razon: No contiene el simbolo @"<<endl;
        }
        else if (!tienePuntoDespuesArroba) 
        {
            cout<<"Razon: No contiene un punto despues del @"<<endl;
        }
    }
    
    return 0;
}