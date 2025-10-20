//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 2

#include<iostream>
#include<vector>
using namespace std;

int main() 
{
    system("cls");
    vector<double> voltios;
    
    voltios.push_back(11.95);
    voltios.push_back(16.32);
    voltios.push_back(12.15);
    voltios.push_back(8.22);
    voltios.push_back(15.98);
    voltios.push_back(26.22);
    voltios.push_back(13.54);
    voltios.push_back(6.45);
    voltios.push_back(17.59);
    
    cout<<"Valores de voltios:"<<endl;

    for(int i=0; i<voltios.size(); i++) 
    {
        cout<<voltios[i]<<" ";
        
        if((i+1)%3==0) 
        {
            cout<<endl;
        }
    }
    
    return 0;
}