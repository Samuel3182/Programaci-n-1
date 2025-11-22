//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 13/11/2025
//Numero de Ejercicio: 7

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

vector<double> sacarPromedio();
void guardarMostrar(vector<double> promedios);
vector<string> nombres;

int main()
{
    vector<double> promedios=sacarPromedio();
    guardarMostrar(promedios);
    return 0;
}

vector<double> sacarPromedio()
{
    ifstream archivo("calificaciones.txt");
    vector<double> promedio;
    if(!archivo.is_open())
    {
        cout<<"Error al abrir el archivo"<<endl;
        return promedio;
    }
    
    while(!archivo.eof())
    {
        string linea;
        getline(archivo, linea);
        stringstream ss(linea);
        string p;
        double suma=0.0;
        int cont=1;
        while (getline(ss, p, ' ')) 
        {
            if(cont==1)
            {
                nombres.push_back(p);
            } 
            else 
            {
                double num=stod(p);
                suma+=num;
            }
            cont++;
        }
        double prom=suma/4.0;
        promedio.push_back(prom);
    }
    archivo.close();
    return promedio;
}

void guardarMostrar(vector<double> promedios) 
{
    int n=promedios.size();
    ofstream archivo("promedios.txt");
    if(!archivo.is_open())
    {
        cout<<"No se pudo abrir el archivo"<<endl;
        return;
    }
    
    for(int i=0; i<n; i++)
    {
        cout<<nombres[i]<<" "<<promedios[i]<<endl;
        archivo<<nombres[i]<<" "<<promedios[i]<<"\n";
    }
    
    archivo.close();
}

