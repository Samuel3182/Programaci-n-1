//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 7

#include <iostream>
#include <vector>

using namespace std;
vector<int> ingresar();
void mostrar (vector<int> arr);

int main()
{
    system("cls");
    vector<int> arr=ingresar();
    mostrar(arr);
    
    return 0;
}

vector<int> ingresar()
{
    int i=0;
    vector<int> arr;
    int a=1;
    
    while(i<10 && a>=0)
    {
        cout<<"ingrese el valor "<<i+1<<": ";
        cin>>a;

        if(a<0)
        {
            continue;
        } 
        else 
        {
            arr.push_back(a);
            i++;
        }
    }
    
    return arr;
}

void mostrar (vector<int> arr)
{
    for(int i:arr)
    {
        cout<<i<<"\t";
    }
}

