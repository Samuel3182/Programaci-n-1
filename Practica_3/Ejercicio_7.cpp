// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Carnet: 6785053 L.P.
// Carrera del estudiante: Diseño Digital
// Fecha creación: 15/09/2025
// Número de ejercicio: 7

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int numeroAleatorio(int min, int max);
int main() 
{
    system("chcp 65001");
    system("cls");
    srand(time(NULL));
    
    int n;
    cout<<"Ingrese la cantidad de alumnos: ";
    cin>>n;
    
    int sumaEdades=0;
    int sumaAlturas=0;
    int mayores18=0;
    int altos175=0;
    
    for (int i=1; i<=n; i++) 
    {
        int edad=numeroAleatorio(1, 35);
        int altura=numeroAleatorio(120, 200);
        
        // Acumular para promedios
        sumaEdades+=edad;
        sumaAlturas+=altura;
        
        // Contar alumnos especiales
        if (edad>18) 
        {
            mayores18++;
        }
        if (altura>175) 
        {
            altos175++;
        }
        
        if (i<=3) 
        {
            cout<<"Alumno "<<i<<": "<<edad<<" años, "<<altura<<" cm"<<endl;
        }
    }
    
    double edadMedia=(double)sumaEdades/n;
    double alturaMedia=(double)sumaAlturas/n;
    
    cout<<"\nTotal de alumnos: "<<n<<endl;
    cout<<"Edad media: "<<edadMedia<<" años"<<endl;
    cout<<"Altura media: "<<alturaMedia<<" cm"<<endl;
    cout<<"Alumnos mayores de 18 años: "<<mayores18<<endl;
    cout<<"Alumnos que miden más de 175 cm: "<<altos175<<endl;
    
    return 0;
}

int numeroAleatorio(int min, int max) 
{
    return min+rand()%(max-min+1);
}