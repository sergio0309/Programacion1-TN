/*3. Realice un programa que lea un valor entero y determine si se trata de un 
número par o impar.*/

#include<iostream>

using namespace std;

int main(){
    int x;

    cout<<"Ingresar valor par: ";
    cin>>x;

    if( x % 2 == 0){
        cout<<"Es par";
    } else{
        cout<<"Es impar";
    }


    return 0;
}