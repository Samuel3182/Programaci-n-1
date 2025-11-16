//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 13/11/2025
//Numero de Ejercicio: 8

#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Atleta 
{
  char nombre[100];
  char departamento[20];
  char deporte[20];
  int medallas;
};

vector<Atleta> ingresar ();
vector<int> contarMedallas (vector<Atleta> at);
void mostrar (vector<int> med);

int main()
{
    system("chcp 65001");
    system("cls");
    srand(time(NULL));
    vector<Atleta> at=ingresar();
    vector<int> med=contarMedallas(at);
    mostrar(med);

    return 0;
}

vector<Atleta> ingresar ()
{
    int n;
    cout<<"Ingrese la cantidad de atletas: ";
    cin>>n;
    vector<Atleta> at(n);
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        cout<<"Ingrese el nombre: "<<endl;
        cin.getline(at[i].nombre, 100);
        cout<<"Ingrese su departamento: "<<endl;
        cin.getline(at[i].departamento, 20);
        cout<<"Ingrese su deporte: "<<endl;
        cin.getline(at[i].deporte, 20);
        at[i].medallas=rand()%(10);
        cout<<"El atleta tiene: "<<at[i].medallas<<" medallas"<<endl;
    }
    
    return at;
}

vector<int> contarMedallas (vector<Atleta> at) 
{
    vector<int> med(9,0);
    
    for(Atleta a:at)
    {
        if(strcmp(a.departamento, "La Paz")==0)
        {
            med[0]+=a.medallas;
        } 
        else if (strcmp(a.departamento, "Santa Cruz")==0)
        {
            med[1]+=a.medallas;
        } 
        else if (strcmp(a.departamento, "Cochabamba")==0)
        {
            med[2]+=a.medallas;
        } 
        else if (strcmp(a.departamento, "Chuquisaca")==0)
        {
            med[3]+=a.medallas;
        } 
        else if (strcmp(a.departamento, "Oruro")==0)
        {
            med[4]+=a.medallas;
        } 
        else if (strcmp(a.departamento, "Potosi")==0)
        {
            med[5]+=a.medallas;
        } 
        else if (strcmp(a.departamento, "Tarija")==0)
        {
            med[6]+=a.medallas;
        } 
        else if (strcmp(a.departamento, "Beni")==0)
        {
            med[7]+=a.medallas;
        } 
        else if (strcmp(a.departamento, "Pando")==0)
        {
            med[8]+=a.medallas;
        }
    }
    
    return med;
}

void mostrar (vector<int> med) 
{
    cout<<"La Paz "<<med[0]<<endl;
    cout<<"Santa Cruz "<<med[1]<<endl;
    cout<<"Cochabamba "<<med[2]<<endl;
    cout<<"Chuquisaca "<<med[3]<<endl;
    cout<<"Oruro "<<med[4]<<endl;
    cout<<"Potosi "<<med[5]<<endl;
    cout<<"Tarija "<<med[6]<<endl;
    cout<<"Beni "<<med[7]<<endl;
    cout<<"Pando "<<med[8]<<endl;
}