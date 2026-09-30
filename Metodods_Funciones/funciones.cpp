#include <iostream>

using namespace std;

bool estadoAprobado (double promedio){

}

int main(){
    const int TOTAL_NOTAS = 3;
    double suma = 0;
    double nota = 0;

    // 2. Interacion (Buble for) lectura y acumulacion de notas
    for (int i = 1; i <= TOTAL_NOTAS; ++i)
    {
        cout<<"Ingrese la nota "<< i << ": ";
        cin>>nota;
        suma += nota;
    }
    double promedio = suma / TOTAL_NOTAS;
    
    

    return 0;
}