// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 04/09/2025
// Número de ejercicio: 24

#include <iostream>
using namespace std;
int main()
{
    int Opcion;
    system("cls");

    do
    {
        
        cout<<"\n1. Opcion 1"<<endl;
        cout<<"2. Opcion 2"<<endl;
        cout<<"3. Opcion 3"<<endl;
        cout<<"0. Salida"<<endl;

        cout<<"\nSeleccione una opcion: ";
        cin>>Opcion;

    switch (Opcion)
    {

        case 1:
        cout<<"\nOpcion 1 seleccionada"<<endl;
        break;

        case 2:
        cout<<"\nOpcion 2 seleccionada"<<endl;
        break;

        case 3:
        cout<<"\nOpcion 3 seleccionada"<<endl;
        break;
    
    }
       
    } while (Opcion!=0);

    cout<<"\nSaliendo";
    
    return 0;

}