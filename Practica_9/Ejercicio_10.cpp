//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 21/11/2025
//Numero de Ejercicio: 10

#include <iostream>
using namespace std;

struct Fraccion 
{
    int numerador;
    int denominador;
};

struct FraccionSimplificada 
{
    int numerador;
    int denominador;
};

int calcularMCD(int a, int b);
FraccionSimplificada ReducirFraccion(Fraccion frac);
void mostrarFraccion(Fraccion frac);
void mostrarFraccionSimplificada(FraccionSimplificada frac);

int main() 
{
    system("chcp 65001");
    system("cls");
    
    Fraccion fraccion;
    
    cout<<"Ingrese el numerador: ";
    cin>>fraccion.numerador;
    
    cout<<"Ingrese el denominador: ";
    cin>>fraccion.denominador;
    
    // Validar que el denominador no sea cero
    if (fraccion.denominador==0) 
    {
        cout<<"Error: El denominador no puede ser cero"<<endl;
        return 1;
    }
    
    FraccionSimplificada simplificada=ReducirFraccion(fraccion);
    
    cout<<"\nFracción original: ";
    mostrarFraccion(fraccion);
    
    cout<<"\nFracción simplificada: ";
    mostrarFraccionSimplificada(simplificada);
    
    cout<<endl;
    
    return 0;
}


int calcularMCD(int a, int b) 
{
    while (b!=0) 
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

FraccionSimplificada ReducirFraccion(Fraccion frac) 
{
    FraccionSimplificada resultado;
    
    int mcd = calcularMCD(frac.numerador, frac.denominador);
    
    resultado.numerador=frac.numerador/mcd;
    resultado.denominador=frac.denominador/mcd;
    
    return resultado;
}

void mostrarFraccion(Fraccion frac) 
{
    cout<<frac.numerador<<"/"<<frac.denominador;
}

void mostrarFraccionSimplificada(FraccionSimplificada frac) 
{
    cout<<frac.numerador<<"/"<<frac.denominador;
}

