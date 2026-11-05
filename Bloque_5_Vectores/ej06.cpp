#include<iostream>
#include<time.h>
using namespace std;
//Colocar numeros aleatoreos
//Buscar el Mayot y/o Menor en el arreglo
void IniciarArray(int arr[50]){
    for(int i=0; i<50; i++){
        arr[i]= rand()%150;
    }
}
void MostrarArray(int arreglo[50]){
    for(int i=0;i<50;i++){
        cout<<"arreglo ["<<i<<"]= "<<arreglo[i]<<"\n";
    }
}
int BuscarMayor(int arreglo[50]){
    int mayor = arreglo[0];
    for(int i =0; i<50; i++){
        if(arreglo[i] > mayor){
            mayor = arreglo[i];
        }
    }
    return mayor;
}
int BuscarMenor(int arreglo[50]){
    int menor = arreglo[0];
    for(int i =0; i<50; i++){
        if(arreglo[i] < menor){
            menor = arreglo[i];
        }
    }
    return menor;
}
int main(){
    srand(time(NULL));
    int arreglo[50];
    IniciarArray(arreglo);
    MostrarArray(arreglo);
    cout<<"\nEl numero mayor en el arreglo es: "<<BuscarMayor(arreglo);
    cout<<"\nEl numero menor en el arreglo es: "<<BuscarMenor(arreglo);
    return 0;
}