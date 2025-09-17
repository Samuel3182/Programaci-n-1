// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 17/09/2025
// Número de ejercicio: 11

#include <iostream>
using namespace std;

double retirarDinero(double saldo, double cantidad);

int main() 
{
    system("chcp 65001");
    system("cls");
    double saldo=1000.0;
    double cantidad;
    
    cout<<"Saldo disponible: "<<saldo<<" bs"<<endl;
    
    cout<<"Ingrese monto a retirar: ";
    cin>>cantidad;
    
    saldo=retirarDinero(saldo, cantidad);
    cout<<"Saldo restante: "<<saldo<<" bs"<<endl;
    
    return 0;
}

double retirarDinero(double saldo, double cantidad) 
{
    if (cantidad>saldo) 
    {
        cout<<"Saldo insuficiente"<<endl;
        return saldo;
    }
    
    if ((int)cantidad%10!=0)
    {
        cout<<"El monto debe ser multiplo de 10"<<endl;
        return saldo;
    }
    
    cout<<"Retiro exitoso de "<<cantidad<<" bs"<<endl;
    return saldo-cantidad;
}

