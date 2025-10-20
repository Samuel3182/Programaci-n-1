//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 1

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<double> generarVoltajes();
vector<double> generarTemperaturas();
vector<char> generarCaracteres();
vector<int> generarAños();
vector<double> generarVelocidades();
vector<double> generarDistancias();
void mostrarVectorDouble(const vector<double>& vec, const string& nombre);
void mostrarVectorInt(const vector<int>& vec, const string& nombre);
void mostrarVectorChar(const vector<char>& vec, const string& nombre);

int main() 
{
    system("cls");
    srand(time(NULL));
    
    vector<double> voltajes=generarVoltajes();
    mostrarVectorDouble(voltajes, "Voltajes (100 elementos)");
    
    vector<double> temperaturas=generarTemperaturas();
    mostrarVectorDouble(temperaturas, "Temperaturas (50 elementos)");
    
    vector<char> caracteres=generarCaracteres();
    mostrarVectorChar(caracteres, "Caracteres alfanumericos (30 elementos)");
    
    vector<int> años=generarAños();
    mostrarVectorInt(años, "Años (100 elementos)");
    
    vector<double> velocidades=generarVelocidades();
    mostrarVectorDouble(velocidades, "Velocidades (32 elementos)");
    
    vector<double> distancias=generarDistancias();
    cout<<"Distancias (1000 elementos - mostrando primeros 50):"<<endl;
    for(int i=0; i<50; i++) 
    {
        cout<<distancias[i]<<" ";
        if((i+1)%10==0) cout<<endl;
    }
    
    return 0;
}

vector<double> generarVoltajes() 
{
    vector<double> voltajes;
    for(int i=0; i<100; i++) 
    {
        double voltaje=20.00+(rand()%20001)/100.0;
        voltajes.push_back(voltaje);
    }
    return voltajes;
}

vector<double> generarTemperaturas() 
{
    vector<double> temperaturas;
    for(int i=0; i<50; i++) 
    {
        double temperatura=(rand()%10001)/100.0;
        temperaturas.push_back(temperatura);
    }
    return temperaturas;
}

vector<char> generarCaracteres() 
{
    vector<char> caracteres;
    string alfanumericos="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    
    for(int i=0; i<30; i++) 
    {
        int indice=rand() % alfanumericos.length();
        caracteres.push_back(alfanumericos[indice]);
    }
    return caracteres;
}

vector<int> generarAños() 
{
    vector<int> años;
    for(int i=0; i<100; i++) 
    {
        int año=1990+(rand() % 36);
        años.push_back(año);
    }
    return años;
}

vector<double> generarVelocidades() 
{
    vector<double> velocidades;
    for(int i=0; i<32; i++) 
    {
        double velocidad=10.00+(rand()%29001)/100.0;
        velocidades.push_back(velocidad);
    }
    return velocidades;
}

vector<double> generarDistancias() 
{
    vector<double> distancias;
    for(int i=0; i<1000; i++) 
    {
        double distancia=1.00+(rand() % 999001)/1000.0;
        distancias.push_back(distancia);
    }
    return distancias;
}

void mostrarVectorDouble(const vector<double>& vec, const string& nombre) 
{
    cout<<nombre<<":"<<endl;
    for(int i=0; i<vec.size(); i++) 
    {
        cout<<vec[i]<<" ";
        if((i+1)%10==0) cout<<endl;
    }
    cout<<endl<<endl;
}

void mostrarVectorInt(const vector<int>& vec, const string& nombre) 
{
    cout<<nombre<<":"<<endl;
    for(int i=0; i<vec.size(); i++) 
    {
        cout<<vec[i]<< " ";
        if((i+1)%10==0) cout<<endl;
    }
    cout<<endl<<endl;
}

void mostrarVectorChar(const vector<char>& vec, const string& nombre) 
{
    cout<<nombre<<":"<<endl;

    for(int i=0; i<vec.size(); i++) 
    {
        cout<<vec[i]<<" ";
        if((i+1)%10==0) cout<<endl;
    }
    cout<<endl<<endl;
}