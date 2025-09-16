// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 11/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

bool Bisiesto(int año);
int diasDelMes(int año, int mes);

int main() 
{
    system("chcp 65001");
    system("cls");

    int año, mes;
    
    cout<<"Año: ";
    cin>>año;
    cout<<"Mes: ";
    cin>>mes;
    
    int dias=diasDelMes(año, mes);
    
    if (dias==0) 
    {
        cout<<"Mes incorrecto";
    } 
    else 
    {
        cout<<"Dias: "<<dias<<endl;
    }

    if (Bisiesto(año)) 
    {
        cout<<"\nEl año "<<año<<" es bisiesto";
    } 
    else 
    {
        cout<<"\nEl año "<<año<<" no es bisiesto";
    }
    
    return 0;
}

bool Bisiesto(int año)
{
    if (año%4==0) 
    {
        if (año%100==0 && año%400!=0) 
        {
            return false;
        }
        return true;
    }
    return false;
}

int diasDelMes(int año, int mes) 
{
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) 
    {
        return 31;
    }
    else if (mes==4 || mes==6 || mes==9 || mes==11) 
    {
        return 30;
    }
    else if (mes==2) 
    {
        if (Bisiesto(año)) 
        {
            return 29;
        } 
        else 
        {
            return 28;
        }
    }
    else 
    {
        return 0;
    }
}

