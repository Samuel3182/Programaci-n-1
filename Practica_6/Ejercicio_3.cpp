//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 22/10/2025
//Numero de Ejercicio: 3

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<string>

using namespace std;
int ValorAleatorio (int min, int max);

int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(NULL));
    
    int n;
    vector<string> Nombres{"Samuel","Leonardo","Lucas","Valeria","Walter","John","Luis","Nestor","Nicole","Paul"};
    vector<string> Apellidos{"Zarate","Aguilar","Portillo","Mercado","Pasten","Zurita","Castillo","Ramirez","Barnett","Quispe"};
    vector<int> Edades{25,23,26,20,21,27,24,22,29,28};

    cout<<"ingrese la cantidad de elementos a generar: ";
    cin>>n;

    for (int i=0; i<n; i++)
    {
        string Nombre=Nombres[ValorAleatorio(0,9)];
        string Apellido=Apellidos[ValorAleatorio(0,9)];
        int Edad=Edades[ValorAleatorio(0,9)];

        cout<<i+1<<". "<<Nombre<<" "<<Apellido<<" - "<<Edad<<" años"<<endl;
    }
    
    return 0;
}

int ValorAleatorio (int min, int max)
{
    return rand()%(max-min+1)+min;
}