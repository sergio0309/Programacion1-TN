#include <iostream>
using namespace std;
//Variables Globales
int valor = 50;
void suma(){
    cout<<"Funcion: "<<valor;
}


int main() 
{
    cout<<"Codigo Principal: "<<valor;
    cout<<"\n";
    valor = valor + 10;
    suma();
    return 0;
}