//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 21/11/2025
//Numero de Ejercicio: 9

#include <iostream>
#include <string.h>
using namespace std;

struct Alumno 
{
    char nombre[50];
    float T1, T2, T3, T4;
    float EF;
    float NP;
    float NF;
};

void ingresarAlumno(Alumno &alum);
void calcularNotas(Alumno &alum);
void mostrarAlumno(Alumno alum);
void calcularEstadisticas(Alumno alumnos[], int N, float &promedio, float &minimo, float &maximo);

int main() {
    system("chcp 65001");
    system("cls");
    
    int N;

    cout<<"Ingrese la cantidad de alumnos: ";
    cin>>N;
    cin.ignore();
    
    Alumno alumnos[N];
    
    for (int i=0; i<N; i++)
    {
        cout<<"\n--- Alumno "<<(i+1)<<" ---"<<endl;
        ingresarAlumno(alumnos[i]);
        calcularNotas(alumnos[i]);
    }

    cout << "\n--------- CALIFICACIONES FINALES ----------" << endl;
    cout << "================================================================" << endl;
    cout << "Nombre                T1     T2     T3     T4     EF     NP     NF" << endl;
    cout << "================================================================" << endl;
    
    for (int i=0; i<N; i++) 
    {
        cout<<alumnos[i].nombre;

        int espacios=20-strlen(alumnos[i].nombre);
        for (int j=0; j<espacios; j++) 
        {
            cout<<" ";
        }
        
        cout<<"  " <<alumnos[i].T1;
        cout<<"     "<<alumnos[i].T2;
        cout<<"     "<<alumnos[i].T3;
        cout<<"     "<<alumnos[i].T4;
        cout<<"     "<<alumnos[i].EF;
        cout<<"     "<<alumnos[i].NP;
        cout<<"     "<<alumnos[i].NF<<endl;
    }
    
    float promedio, minimo, maximo;
    calcularEstadisticas(alumnos, N, promedio, minimo, maximo);
    
    cout<<"\n------------ ESTADISTICAS DEL CURSO ------------"<<endl;
    cout<<"Promedio de notas finales: "<<promedio<<endl;
    cout<<"Nota final minima: "<<minimo<<endl;
    cout<<"Nota final maxima: "<<maximo<<endl;
    
    return 0;
}

void ingresarAlumno(Alumno &alum) 
{
    cout<<"Nombre del alumno: ";
    cin.getline(alum.nombre, 50);
    
    cout<<"Nota T1: ";
    cin>>alum.T1;
    
    cout<<"Nota T2: ";
    cin>>alum.T2;
    
    cout<<"Nota T3: ";
    cin>>alum.T3;
    
    cout<<"Nota T4: ";
    cin>>alum.T4;
    
    cout<<"Nota Examen Final: ";
    cin>>alum.EF;
    
    cin.ignore();
}

void calcularNotas(Alumno &alum) 
{
    alum.NP=(alum.T1+alum.T2+alum.T3+alum.T4)/4.0;
  
    alum.NF=0.7*alum.NP+0.3*alum.EF;
}

void calcularEstadisticas(Alumno alumnos[], int N, float &promedio, float &minimo, float &maximo) 
{
    if (N==0) 
    {
        promedio=minimo=maximo=0;
        return;
    }

    float suma=alumnos[0].NF;
    minimo=alumnos[0].NF;
    maximo=alumnos[0].NF;
    
    for (int i=1; i<N; i++) 
    {
        suma+=alumnos[i].NF;
        
        if (alumnos[i].NF<minimo) 
        {
            minimo=alumnos[i].NF;
        }
        
        if (alumnos[i].NF>maximo) 
        {
            maximo=alumnos[i].NF;
        }
    }
    
    promedio=suma/N;
}