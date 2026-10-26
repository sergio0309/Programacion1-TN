//Contador de numero Positivos y/o Negativos
#include<iostream>
using namespace std;
int main(){
    int numeros[] = {1, -5, -3, 8, 7, 15, -2, 13, -1, 9, 0};
    int contadorPositivos = 0, contadorNegativos = 0;
    for(int i=0; i <= 9; i++){
        if(numeros[i] > 0){
            contadorPositivos++;
        } else if(numeros[i] < 0){
            contadorNegativos++;
        }
    }
    cout<<"\nEl total de numero postivos en el arreglo es: "<<contadorPositivos;
    cout<<"\nEl total de numero negativos en el arreglo es: "<<contadorNegativos;

    return 0;
}