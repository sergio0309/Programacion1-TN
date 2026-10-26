//Multiplicar arreglo duplicado
#include<iostream>
using namespace std;
int main(){
    const int TAMANIO = 5;
    int originales[TAMANIO];
    int duplicados[TAMANIO];
    cout<<"---------- MULTIPLICAR ARREGLO DUPLICADO x2 ----------\n";
    for(int i=0; i<TAMANIO; i++){
        cout<<"Ingrese un valor en la posicion ["<<i<<"]: ";
        cin>>originales[i];
        //Duplicar y multiplcar arreglo
        duplicados[i] = originales[i] * 2;
    }
    cout<<"\nArreglo Original: ";
    for(int i=0; i<TAMANIO; i++){
        cout<<"Valor de la posicion ["<<i<<"] = "<<originales[i]<<"\n";
    }
    cout<<"\n#############################\n";
    cout<<"\nArreglo Duplicado: ";
    for(int i=0; i<TAMANIO; i++){
        cout<<"Valor de la posicion ["<<i<<"] = "<<duplicados[i]<<"\n";
    }
    return 0;
}