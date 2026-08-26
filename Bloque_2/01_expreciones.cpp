//1. Escribe la siguiente expresión como expresión en C++: (a/b) + 1
#include<iostream>

using namespace std;

int main () {
    
    float a, b, resultado;
    cout<<"Ingresa el valor de a: ";
    cin>>a;
    cout<<"Ingresa el valor de b: ";
    cin>>b;

    resultado = (a/b) +1;
    cout<<"El total es: "<< resultado;
    return 0;
}