// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Fecha creación: 16/09/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

void salarioBase(double &s, int antiguedad);
double comision (double &salario, double precio);

int main()
{
    system("cls");
    system("chcp 65001");
    int n;
    double total=0.0;
    double precio;

    cout<<"Ingrese la cantidad de vendedoras: ";
    cin>>n;
    
    cout<<"Ingrese el precio de los productos: ";
    cin>>precio;
    
    double sBase=2750.0;
    
    for(int i=1; i<=n; i++)
    {
        int antiguedad;
        cout<<"------------------------------------------------"<<endl;
        cout<<"Ingrese los años de antiguedad de la vendedora "<<i<<": ";
        cin>>antiguedad;
        
        salarioBase(sBase, antiguedad);
        
        cout<<"\nSu salario tomando en cuenta su antiguedad es: "<<sBase<<endl;
        
        double c=comision(sBase, precio);
        
        cout<<"Su comision por ventas es de: "<<c<<endl;
        cout<<"Su salario total de la vendedora "<<i<<" es de: "<<sBase<<endl;
        
        cout<<endl;
        
        sBase=2750.0;
    }
    
}

void salarioBase(double &s, int antiguedad)
{
    for(int i=0; i<antiguedad; i++)
    {
        double aumento=s*0.10;
        s=s+aumento;
    }
}

double comision(double &salario, double precio)
{
    double ganancia=precio*10.0;
    double c=ganancia*0.10;
    salario=salario+c;
    return c;
}