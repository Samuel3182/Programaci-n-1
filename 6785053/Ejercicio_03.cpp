//Defensa pratica 1
//Materia: programacion 1, paralelo 4
//Estudiante: Samuel Sebastian Zarate Zabala
//Fecha: 28/08/2025

#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int N;
    float S=0, nota, promedio;
    cout<<"Ingrese la cantidad de notas: ";
    cin>>N;

    for (int i=1; i<=N; i++)
    {
        cout<<"Ingrese nota: ";
        cin>>nota;
        S=S+nota;
    }
    promedio=S/N;
    cout<<"\nel promedio general es: "<<promedio;
    
    return 0;
}