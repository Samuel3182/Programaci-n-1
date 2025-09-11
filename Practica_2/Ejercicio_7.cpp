// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 09/09/2025
// Número de ejercicio: 7

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main()
{
    system("cls");
    srand(time(NULL));
    
    int n;
    cout<<"Ingrese la cantidad total de niños: ";
    cin>>n;
    
    int niños1, niños2, niños3;
  
    niños1=rand()%(n+1);
    niños2=rand()%(n-niños1+1);
    niños3=n-niños1-niños2;
    
    
    int consumo1=niños1*6;
    int consumo2=niños2*3;
    int consumo3=niños3*2;
    int totalPañales=consumo1+consumo2+consumo3;
    
    cout<<"Niños de 1 año: "<<niños1<<endl;
    cout<<"Niños de 2 años: "<<niños2<<endl;
    cout<<"Niños de 3 años: "<<niños3<<endl;
    cout<<"Total de niños: "<<(niños1+niños2+niños3)<<endl;
    
    cout<<"1 año ("<<niños1<<" niños × 6 pañales): "<<consumo1<<" pañales"<<endl;
    cout<<"2 años ("<<niños2<<" niños × 3 pañales): "<<consumo2<<" pañales"<<endl;
    cout<<"3 años ("<<niños3<<" niños × 2 pañales): "<<consumo3<<" pañales"<<endl;

    cout<<"Consumo Total: "<<totalPañales<<" Pañales por Dia"<<endl;
    
    return 0;

}