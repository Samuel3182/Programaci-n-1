// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 17/09/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;

void convertirDinero(int monto);

int main() 
{
    system("chcp 65001");
    system("cls");
    int monto;
    
    cout<<"Ingresar la cantidad de dinero: ";
    cin>>monto;
    
    if (monto<=0)
    {
        cout<<"El monto debe ser mayor que cero"<<endl;
    } 
    else 
    {
        convertirDinero(monto);
    }
    
    return 0;
}

void convertirDinero(int monto) 
{
    int billetes200, billetes100, billetes50, billetes20, billetes10;
    int monedas5, monedas2, monedas1;
    
    // Billetes
    billetes200=monto/200;
    monto=monto%200;
    
    billetes100=monto/100;
    monto=monto%100;
    
    billetes50=monto/50;
    monto=monto%50;
    
    billetes20=monto/20;
    monto=monto%20;
    
    billetes10=monto/10;
    monto=monto%10;
    
    // Monedas
    monedas5=monto/5;
    monto=monto%5;
    
    monedas2=monto/2;
    monto=monto%2;
    
    monedas1=monto;
    
    // Mostrar resultados
    cout<<"Desglose del monto:"<<endl;
    
    if (billetes200>0)
    {
        cout<<"\n"<<billetes200<<" billetes de 200 Bs"<<endl;
    }
    if (billetes100>0)
    {
        cout<<billetes100<<" billetes de 100 Bs"<<endl;
    }
    if (billetes50>0) 
    {
        cout<<billetes50<<" billetes de 50 Bs"<<endl;
    }
    if (billetes20>0)
    {
        cout<<billetes20<<" billetes de 20 Bs"<<endl;
    }
    if (billetes10>0) 
    {
        cout<<billetes10<<" billetes de 10 Bs"<<endl;
    }
    if (monedas5>0)
    {
        cout<<monedas5<<" monedas de 5 Bs"<<endl;
    }
    if (monedas2>0)
    {
        cout<<monedas2<<" monedas de 2 Bs"<<endl;
    }
    if (monedas1>0) 
    {
        cout<<monedas1<<" monedas de 1 Bs"<<endl;
    }
}

