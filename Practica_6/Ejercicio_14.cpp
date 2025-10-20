//Materia: Programacion I, Paralelo 4
//Autor: Samuel Sebastian Zarate Zabala
//Fecha de creacion: 19/10/2025
//Numero de Ejercicio: 14

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> contarVocales (string texto);

int main()
{
    system("cls");
    string texto;
    
    cout<<"Ingrese un texto: "<<endl;
    getline(cin, texto);
    
    vector<int> vocales=contarVocales(texto);
    
    vector<char> v={'A', 'E', 'I', 'O', 'U'};
    
    for(int i=0; i<5; i++)
    {
        cout<<v[i]<<": "<<vocales[i]<<endl;
    }
    
    return 0;
}

vector<int> contarVocales (string texto)
{
    int n=texto.length();
    vector<int> vocales(5, 0);
    
    for(int i=0; i<n; i++)
    {
        if(texto[i]=='a' || texto[i]=='A')
        {
            vocales[0]++;
        } 
        else if (texto[i]=='e' || texto[i]=='E')
        {
            vocales[1]++;
        } 
        else if (texto[i]=='i' || texto[i]=='I')
        {
            vocales[2]++;
        } 
        else if (texto[i]=='o' || texto[i]=='O')
        {
            vocales[3]++;
        } 
        else if (texto[i]== 'u' || texto[i]=='U')
        {
            vocales[4]++;
        } 
    }
    
    return vocales;
}