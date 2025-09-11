// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 11/09/2025
// Número de ejercicio: 3

#include<iostream>
using namespace std;

int invertirNumero(int numero);
void mostrarResultado(int numero);
bool esCapicua(int numero);

int main() 
{
    system("cls");
    system("chcp 65001");
    int numero;
    char continuar;
    
    do 
    {
        cout<<"\nIngrese un numero entero: ";
        cin>>numero;
        
        mostrarResultado(numero);
        
        cout<<"\n¿Desea verificar otro numero? (s/n): ";
        cin>>continuar;
        
    } while (continuar=='s' || continuar=='S');
    
    cout << "\nPrograma finalizado"<<endl;
    
    return 0;
}


int invertirNumero(int numero) 
{
    int invertido=0;
    
    while (numero>0) 
    {
        int digito=numero%10; 
        invertido=invertido*10+digito; 
        numero=numero/10;            
    }
    
    return invertido;
}

bool esCapicua(int numero) 
{
    if (numero<0) return false;
    
    int numeroInvertido=invertirNumero(numero);
    return (numero==numeroInvertido);
}

void mostrarResultado(int numero) 
{
    if (esCapicua(numero))
    {
        cout<<numero<<" es un numero Capicua"<<endl;
    } 
    else 
    {
        cout<<numero<<" No es un numero Capicua"<<endl;
    }
}

