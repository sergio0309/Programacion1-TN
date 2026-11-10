#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char mensaje[] = "Hola me llamo ";
    char nombre[] = "Jesus Ramos";
    cout<<strcat(mensaje, nombre);
    char a[]="verano";
    char b[]="verano";
    if(strcmp(a,b)==0){ //(strcmp(a,b)==0)
        cout<<"Estas cadenas son iguales\n";
    } else {
        cout<<"Estas cadenas no son iguales\n";
    }
    cout<<"Fin del codigo";
    return 0;
}