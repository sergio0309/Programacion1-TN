#include<iostream>
#include<cmath>
using namespace std;

const float PI = 3.1416;

void perimedot_Circulo(double radio){
    int resultado = 0;
    resultado = PI * pow(radio,2);
    cout<<"El Area del Cirulo es: "<< resultado;
}

int main(){
    double radio=0;
    cout<<"Ingrese el Radio del circulo: ";
    cin>>radio;
    perimedot_Circulo(radio);
    return 0;
}