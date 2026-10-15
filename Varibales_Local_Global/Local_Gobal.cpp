#include<iostream>
using namespace std;

int numero = 2;

int main(){
    int numero = 4;
    //Imprimir variables
    cout<<"Variable Local: "<<numero<<"\n";
    cout<<"Variable Global: "<<::numero<<"\n";

    return 0;
}