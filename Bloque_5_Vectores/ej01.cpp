#include<iostream>
using namespace std;

int main(){
    
    int vector[] = {6,7,0,4,11,9,19,100,99,22,50,44};
    int numero = 0, i = 0, num=0;
    cout<<"Ingrese la posicion a ver del vector(0 al 11): ";
    cin>>numero;
    cout<<"\nEl numero del vetor["<<numero<<"] es: "<<vector[numero];
    cout<<"\nIngresa el numero a buscar en el vector: ";
    cin>>num;
    while(i <=11){
        if(num == vector[i]){
            cout<<"El numero "<<num<<" esta en el vector["<<i<<"]";
            return 0;
        }
        i++;
    }
    cout<<"El numero "<<num<<" no se encuentra en el vector";
    return 0;
}