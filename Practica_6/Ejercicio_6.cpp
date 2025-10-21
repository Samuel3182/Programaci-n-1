//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 20/10/2025
//Numero de Ejercicio: 6

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

int calificacionesAleatorias (int max, int min);

int main()
{
    system("cls");
    srand(time(NULL));
    int n;
    float reprobado=0.0, regular=0.0, bueno=0.0, excelente=0.0;
    vector<int> notas;
    cout<<"ingrese la cantidad de calificaciones a generar: ";
    cin>>n;

    for (int i=0; i<n; i++)
    {
        notas.push_back(calificacionesAleatorias(100,0));
    }

    cout<<"\nCalificaciones: ";
    for (int i=0; i<notas.size(); i++)
    {
        cout<<notas[i]<<" ";
    }
    cout<<endl;

    for (int i=0; i<notas.size(); i++)
    {
        if (notas[i]>=0 && notas[i]<=59)
        {
            reprobado++;
        }
        else if (notas[i]>=69 && notas[i]<=79)
        {
            regular++;
        }
        else if (notas[i]>=80 && notas[i]<=89)
        {
            bueno++;
        }
        else if (notas[i]>=90 && notas[i]<=100)
        {
            excelente++;
        }
    }

    float porcentajeReprobados=(reprobado*100.0)/n;
    float porcentajeRegulares=(regular*100.0)/n;
    float porcentajeBuenos=(bueno*100.0)/n;
    float porcentajeExcelentes=(excelente*100.0)/n;

    cout<<"\nReprobados: "<<porcentajeReprobados<<" %"<<endl;
    cout<<"Regulares: "<<porcentajeRegulares<<" %"<<endl;
    cout<<"Buenos: "<<porcentajeBuenos<<" %"<<endl;
    cout<<"Excelentes: "<<porcentajeExcelentes<<" %"<<endl;
    
    return 0;
}



int calificacionesAleatorias (int max, int min)
{
    int nota;
    nota=rand()%(max-min+1)-min;

    return nota;
}