/*2. Escriba un programa que lea tres números y determine cuál de ellos es 
el mayor.*/

#include<iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout<<"Ingrese en primer valor: ";
    cin>>num1;
    cout<<"Ingrese en segundo valor: ";
    cin>>num2;
    cout<<"Ingrese en tercer valor: ";
    cin>>num3;

    if( num1 > num2 && num1 > num3) {
        cout<<"El numero mayor es :"<< num1 ;
    }
    else if( num2 > num1 && num2 > num3) {
        cout<<"El numero mayor es :"<< num2 ;
    }
    else if( num3 > num2 && num3 > num1) {
        cout<<"El numero mayor es :"<< num3 ;
    }
    
    
    return 0;
}