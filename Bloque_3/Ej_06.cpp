/*6. Escriba un programa que lea de la entrada estándar un carácter e indique 
en la salida estándar si el carácter es una vocal minúscula, es una vocal 
mayúscula o no es una vocal.*/

#include<iostream>

using namespace std;

int main(){
  char x;
  cout<<"Ingrese su caracter:";
  cin>>x;

  if (x == 'a' || x == 'e' ||x == 'i' ||x == 'o' ||x == 'u' )
  {
    cout<< "Es minuscula";

  }
  else if (x == 'A' || x == 'E' ||x == 'I' ||x == 'O' ||x == 'U' )
  {
    cout<< "ES MAYUSCULA";
  }
  else{
    "No es vocal";
  }
  

  return 0;
  
}