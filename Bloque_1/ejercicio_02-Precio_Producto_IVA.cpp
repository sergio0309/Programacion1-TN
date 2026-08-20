/*2. Escribir un programa que de la entrada estándar el precio de un producto y muestre
en la salida estándar el precio del producto al aplicarle el IVA.*/

#include <iostream>

using namespace std;

int main(){

    float producto;
    float precio = 0;
    float iva = 0;
    cout<<"Ingrese el precio del producto: "<<endl;
    cin>>producto;
    precio = producto*0.21;
    iva = producto + precio;

    cout<< "El precio del producto con el IVA es de: "<< iva;

    return 0;
}