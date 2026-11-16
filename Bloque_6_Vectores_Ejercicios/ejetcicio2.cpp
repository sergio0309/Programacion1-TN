#include<iostream>
using namespace std;

const int TAM = 5;
string mascotas[TAM];

void guardarNombres(){
    for(int i=0; i<TAM; i++){
        cout<<"Ingrese el nombre de la mascota "<<i+1<<" :";
        cin>>mascotas[i];
    }
}
string obtenerNombre(int posicion){
    string encontrado = mascotas[posicion];
    return encontrado;
}

int main(){
    int posicion;
    guardarNombres();
    cout<<"\nIngrese la pocision a consultar (0 a 4)";
    cin>>posicion;
    cout<<"\nLa mascota es: "<<obtenerNombre(posicion);
    return 0;
}