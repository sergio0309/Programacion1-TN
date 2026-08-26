/*5. Escriba un fragmento de programa que intercambie los valores de dos 
variables.*/

#include<iostream>

using namespace std;

int main(){
    int num1, num2, aux;

    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    cout<<"Numeros antes del cambio \n";
    cout<<"Primer numero: "<< num1 << "\n";
    cout<<"Segundo numero: "<< num2 << "\n";;
    
    //Cambio de posiciones
    aux = num1;
    num1 = num2;
    num2 = aux;

    cout<<"-------------------------------\n";
    cout<<"Numeros despues del cambio\n";
    cout<<"Primer numero: "<< num1<< "\n";
    cout<<"Segundo numero: " << num2<<"\n";

    return 0;
}