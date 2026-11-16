#include<iostream>
using namespace std;
int datos[6]={4,50,32,12,17,19};
int limite = 17;

void mostrarDatos(){
    for(int i=0; i<6; i++ ){
        cout<<datos[i]<<" ";
    }
    cout<<"\n";
}
int contarMayores(){
    int contador = 0;
    for(int i=0; i<6; i++ ){
        if(datos[i]>limite){
            contador++;
        }
    }
    return contador;
}
int main(){
    mostrarDatos();
    int resultado = contarMayores();
    cout<<"\nLos numeros mayores a 17 en el arreglo son: "<<resultado;
    return 0;
}