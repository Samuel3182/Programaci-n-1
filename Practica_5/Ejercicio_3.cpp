//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 14/10/2025
//Numero de Ejercicio: 3

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int> ingresar ();
double suma (vector<int> calificaciones);
double promedio (double suma, int n);
vector<double> diferencias (vector<int> calificaciones, double prom);
double desviacion (vector<double> dif);

int main()
{
    system("cls");

    vector<int> calificaciones=ingresar();
    double sum=suma(calificaciones);

    cout<<"La suma de las notas es: "<<sum<<endl;

    int n=calificaciones.size();
    double prom=promedio(sum, n);

    cout<<"El promedio de calificaciones es: "<<prom<<endl;

    vector<double> desv = diferencias(calificaciones, prom);
    double des=desviacion(desv);
    
    cout<<"La desviacion estandar es: "<<des<<endl;
    return 0;
}

vector<int> ingresar ()
{
    cout<<"Ingrese la cantidad de calificaciones"<<endl;
    int n;
    cin>>n;
    
    vector<int> calificaciones(n);
    
    for(int i=0; i<n; i++)
    {
        cout<<"Ingrese la calificacion "<<i+1<<":\n";
        cin>>calificaciones[i];
    }
    
    return calificaciones;
}

double suma (vector<int> calificaciones)
{
    double s=0.0;
    int n=calificaciones.size();
    for(int i=0; i<n; i++)
    {
        s+=calificaciones[i];
    }
    
    return s;
}

double promedio (double suma, int n)
{
    double prom=suma/n;
    return prom;
}

vector<double> diferencias (vector<int> calificaciones, double prom)
{
    int n=calificaciones.size();
    vector<double> dif(n);
    cout<<"Las diferencias son: "<<endl;
    for(int i=0; i<n; i++)
    {
        dif[i]=calificaciones[i]-prom;
        cout<<dif[i]<<"\t";
    }
    cout << endl;
    
    return dif;
}

double desviacion (vector<double> dif)
{
    int n=dif.size();
    double s=0.0;
    for(int i=0; i<n; i++)
    {
        s+=pow(dif[i], 2);
    }
    
    double v=s/(n-1);
    
    double des=sqrt(v);
    
    return des;
}