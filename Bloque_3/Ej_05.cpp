/*5. Escriba un programa que lea de la entrada estándar un carácter e indique 
en la salida estándar si el carácter es una vocal minúscula o no.*/

#include<iostream>

using namespace std;

int main(){
  char x;
  cout<<"Ingrese su caracter:";
  cin>>x;

  switch(x){
    case 'a': {
        cout<<"Es una vocal en minuscula";
        break;    
    }
    case 'e': {
        cout<<"Es una vocal en minuscula";
        break;
    }
    case 'i': {
        cout<<"Es una vocal en minuscula";
        break;
    }
    case 'o': {
        cout<<"Es una vocal en minuscula";
        break;
    }
    case 'u': {
        cout<<"Es una vocal en minuscula";
        break;
    }
    default:
        cout<<"No cumple las condiciones";
        break;
  }

  return 0;
  
}