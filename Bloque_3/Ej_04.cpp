//4. Comprobar si un número digitado por el usuario es positivo o negativo.
#include<iostream>

using namespace std;

int main(){
    int x;

    cout<<"Ingresar valor par: ";
    cin>>x;
    if(x>0){
        cout<<"es par";
    }
    else{
        cout<<"es impar";
    }
    return 0;
}