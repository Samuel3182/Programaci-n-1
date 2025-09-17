// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 17/09/2025
// Número de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarCalificaciones(int &cal1, int &cal2, int &cal3, int &cal4);
float calcularPromedioPonderado(int cal1, int cal2, int cal3, int cal4);
void mostrarResultados(int cal1, int cal2, int cal3, int cal4, float promedio);

int main() 
{
    system("chcp 65001");
    system("cls");
    srand(time(NULL));
    
    int cal1, cal2, cal3, cal4;
    float promedio;
    
    generarCalificaciones(cal1, cal2, cal3, cal4);
    
    promedio=calcularPromedioPonderado(cal1, cal2, cal3, cal4);
    
    mostrarResultados(cal1, cal2, cal3, cal4, promedio);
    
    return 0;
}

void generarCalificaciones(int &cal1, int &cal2, int &cal3, int &cal4) 
{
    cal1=rand()%100+1;
    cal2=rand()%100+1;
    cal3=rand()%100+1;
    cal4=rand()%100+1;
}

float calcularPromedioPonderado(int cal1, int cal2, int cal3, int cal4) 
{
    int peso1=10, peso2=20, peso3=30, peso4=40;
    
    int sumaPonderada=(cal1*peso1)+(cal2*peso2)+(cal3*peso3)+(cal4*peso4);
    
    int sumaPesos=peso1+peso2+peso3+peso4;
    
    return (float)sumaPonderada/sumaPesos;
}

void mostrarResultados(int cal1, int cal2, int cal3, int cal4, float promedio) 
{
    cout<<"Calificacion 1: "<<cal1<<" (Peso: 10%)"<<endl;
    cout<<"Calificacion 2: "<<cal2<<" (Peso: 20%)"<<endl;
    cout<<"Calificacion 3: "<<cal3<<" (Peso: 30%)"<<endl;
    cout<<"Calificacion 4: "<<cal4<<" (Peso: 40%)"<<endl;
    
    cout<<"\nCalculo del promedio ponderado:"<<endl;
    cout<<"\n("<<cal1<<" × 10) + ("<<cal2<<" × 20) + ("<<cal3<<" × 30) + ("<<cal4<<" × 40)"<<endl;

    cout<<"\nPromedio ponderado final: "<<promedio<<endl;
}