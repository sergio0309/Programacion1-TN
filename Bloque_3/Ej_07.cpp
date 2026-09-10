/*7. Escriba un programa que solicite una edad (un entero) e indique en la 
salida estándar si la edad introducida está en el rango [18-25].*/

#include<iostream>

using namespace std;

int main(){
    int x;

    cout<<"Ingresar su edad: ";
    cin>>x;

    if (x>=18 && x <= 25)
    {
        cout<<"Su edad esta dentro del rango:";
    }
    else{
        cout<<"Su edad esta fuera del rango: ";
    }
    
    return 0;
}