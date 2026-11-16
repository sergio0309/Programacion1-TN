#include<iostream>
using namespace std;

const int TAM = 5;
int numeros[TAM];

void ingresarNumeros(){
    for(int i =0; i<TAM; i++){
        cout<<"Ingrese un numero en la posicion ["<<i<<"]: ";
        cin>>numeros[i];
    }
}

int calcularSuma(){
    int suma = 0;
    for(int i=0; i<TAM; i++){
        suma = suma + numeros[i];
    }
    return suma;
}
int main(){
    ingresarNumeros();
    int total = calcularSuma();
    cout<<"\nLa suma de arreglo es: "<<total;
    return 0;
}