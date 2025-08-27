// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 26/08/2025
// Número de ejercicio: 7

#include<iostream>
using namespace std;
int main()
{
    char letra;
    cout<<"Ingrese una letra: ";
    cin>>letra;

    //mediante codigo ascii
    if((letra>=65 && letra<=90) || (letra>=97 && letra<=122))
    {
        switch(letra)
        {
            case 65:
            cout<<"\nEs una vocal";
            break;

            case 97:
            cout<<"\nEs una vocal";
            break;

            case 69:
            cout<<"\nEs una vocal";
            break;

            case 101:
            cout<<"\nEs una vocal";
            break;

            case 73:
            cout<<"\nEs una vocal";
            break;

            case 79:
            cout<<"\nEs una vocal";
            break;

            case 105:
            cout<<"\nEs una vocal";
            break;

            case 111:
            cout<<"\nEs una vocal";
            break;

            case 117:
            cout<<"\nEs una vocal";
            break;

            case 85:
            cout<<"\nEs una vocal";
            break;

            default:
            cout<<"\nEs una consonante";
            break;
        }
    }

    return 0;
}