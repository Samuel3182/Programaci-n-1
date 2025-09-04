// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 04/09/2025
// Número de ejercicio: 21

#include<iostream>
using namespace std;
int main() 
{
    system("cls");
    int N1, N2;
    
    cout<<"Ingrese el primer numero: ";
    cin>>N1;
    cout<<"Ingrese el segundo numero: ";
    cin>>N2;
    
    int resultado=0;
    
    int abs_N1=(N1<0)?-N1:N1;
    int abs_N2=(N2<0)?-N2:N2;
    
    for (int i=0; i<abs_N2; i++) 
    {
        resultado+=abs_N1;
    }
    
    if ((N1<0 && N2>0) || (N1>0 && N2<0)) 
    {
        resultado=-resultado;
    }
   
    cout<<"\nResultado de la multiplicacion:"<<endl;
    cout<<N1<< " x " <<N2<<" = "<<resultado<<endl;
    
    cout << "\nProceso de sumas sucesivas:" << endl;
    if (abs_N2>0) 
    {
        for (int i=1; i<=abs_N2; i++) 
        {
            cout<<abs_N1;
            if (i<abs_N2) 
            {
                cout<<" + ";
            }
        }
        cout<<" = "<<abs(resultado)<<endl;
        
        if (resultado<0) 
        {
            cout<<"Ajuste de signo: -"<<abs(resultado)<<" = "<<resultado<<endl;
        }
    } 
    else 
    {
        cout<<"0 (cualquier numero multiplicado por 0 es 0)"<<endl;
    }
    
    return 0;
}