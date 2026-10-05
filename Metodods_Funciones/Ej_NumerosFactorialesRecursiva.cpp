#include<iostream>
using namespace std;
// Funciones - Recursiva
int Factorial(int num){//5------->4-------->3 --------2---------1-------0

    if(num== 0) return 1;
    return num * Factorial(num-1); // 
}

int main(){
    int num=0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"El factorial de "<<num<<"! es: "<<Factorial(num); //5
    return 0;
}