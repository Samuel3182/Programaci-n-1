// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 04/09/2025
// Número de ejercicio: 20

#include<iostream>
using namespace std;
int main() 
{
    system("cls");
    int n;
   
    cout<<"Ingrese un numero entero: ";
    cin>>n;
    
    if (n==0) 
    {
        cout<<"El numero 0 tiene 1 digito"<<endl;

    }
    int contador=0, Nt=(n<0)?-n:n;
    do 
    {
        Nt=Nt/10;
        contador++;

    } while (Nt>0);
    
    cout<<"El numero "<<n<<" tiene "<<contador<<" digito(s)"<<endl;
    
    return 0;
}
