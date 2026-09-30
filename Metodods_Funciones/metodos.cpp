#include <iostream>

using namespace std;

// 1. Metodo que solo imprime un mensaje (sin retorno)
void saludo(string nomb, string ap, int edad){
    cout<<"Hola me llamo "<<nomb<<" "<<ap<<" y tengo "<<edad<<" anios";
}

int main(){
    string nombre, apellido;
    int edad=0;
    cout<<"Ingrese su primer nombre: ";
    cin>> nombre;
    cout<<"Ingrese su apellido: ";
    cin>> apellido;
    cout<<"Ingrese su edad: ";
    cin>> edad;

    //Llamar al metodo de 'saludo'
    saludo(nombre, apellido, edad);

    return 0;
}