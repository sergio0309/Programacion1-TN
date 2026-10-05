//Reactica
#include<iostream>
using namespace std;
// Funciones
int Factorial(int num){

    int i= num - 1;         // -4
    if(num== 0) return 1;
    while (i > 0)
    {
        num = num *i;   //5 * 4, num=20, 20*3, num=60, 60*2, num=120, 120*1, num=120
        i--;            //3, 2, 1, 0
    }
    return num;
}

int main(){
    int num=0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    cout<<"El factorial de "<<num<<"! es: "<<Factorial(num);
    return 0;
}