#include<iostream>
#include<time.h>
using namespace std;
// Números aleatorios en array (arreglo)
int main(){
    srand(time(NULL));
    const int NUMERO = 50;
    int arr[NUMERO];
    //Asignar numero aleatoris
    for(int i= 0; i<NUMERO; i++){
        arr[i] = rand()%100;
    }
    //Imprimir vector
    for(int i = 0; i<NUMERO; i++){
        cout<<"Vector["<<i<<"] = "<<arr[i]<<"\n";
    }
    cout<<"\nFin del codigo...";
    return 0;
}
