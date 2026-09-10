/*1. Escriba un programa que lea dos números y determine cuál de ellos es 
el mayor.*/

#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Ingrese en primer valor: ";
    cin>>num1;
    cout<<"Ingrese en segundo valor: ";
    cin>>num2;

    if( num1 > num2) { cout<<"El numero mayor es :"<< num1 ;}
    else { cout<<"El numero mayor es :"<< num2 ;}
    
    return 0;
}