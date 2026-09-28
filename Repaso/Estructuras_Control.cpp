#include<iostream>

using namespace std;

int main(){

    // IF - ELSE IF - ELSE

    int numero = 7, j = 0;

    if(numero > 0){
        cout<<"Numero positivo";
    } else if(numero < 0){
        cout<<"Numero negativo";
    } else{
        cout<<"Es cero";
    }

    // Ciclo for
    int i = 0, n = 8;
    cout<<"\n\nIncremento\n";
    for(i; i<= n ; i++){
        cout<<"Valor "<<i<<"\n";
    }
    cout<<"\n\nDecremento\n";
    for(int z=8; z >= j ; z--){
        cout<<"Valor "<<z<<"\n";
    }

    // do While

    cout<<"\n\nDo While\n";
    string user = "admin", usuario;
    int password = 12345, password1, intentos = 3;
    bool estado=false;
    do
    {
        cout<<"Ingrese el usuario: ";
        cin>>usuario;
        cout<<"Ingrese contrasenia: ";
        cin>>password1;
        if( usuario == user && password1 == password){
            estado = true;
        }
        else {
            cout<<"Intentos: "<<intentos<<"\n";
            intentos--;    
        }
    } while (estado == false && intentos > 0);

    if(estado ==  true) {
        cout<<"Usuario Bloqueado";
    } else {
        cout<<"Bienvenido!!!";
    }
    
    return 0;
}