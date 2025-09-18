// Materia: Programación I, Paralelo 4
// Autor: Samuel Sebastian Zarate Zabala
// Fecha creación: 18/09/2025
// Número de ejercicio: 4

#include<iostream>
using namespace std;

float ConvertirCelsiusaFarenheit(float c, float f);
float MayorTemperatura(float c, float f);

int main()
{
    system("cls");
    float c, f;

    cout<<"Ingrese los grados celsius: ";
    cin>>c;

    float conversion=ConvertirCelsiusaFarenheit(c,f);
    cout<<"\nla conversion a farenheit es: "<<conversion<<endl;

    cout<<"\nIngrese otros grados farenheit: ";
    cin>>f;

    float mayor=MayorTemperatura(c,f);
    cout<<"\nLa temperatura de mayor valor es: "<<mayor;


    return 0;
}

float ConvertirCelsiusaFarenheit(float c, float f)
{
    f=(c*(9.0/5.0))+32.0;
    return f;
}
float MayorTemperatura(float c, float f)
{
    if (c>f)
    {
        return c;
    }
    else
    {
        return f;
    }
}