#include <iostream>
#include <string.h>
using namespace std;
int main(){
    string nombre = "Maria";
    string nombre2 = " Jose";
    nombre.append(nombre2);
    cout<<nombre<<"\n";
    string estudiante = "willson Flores";
    cout<<"Est: "<<estudiante<<"\n";
    //estudiante[0] = toupper(estudiante[0]);
    //cout<<"\n"<<estudiante;
    for(int i =0; i<estudiante.size(); i++){
        estudiante[i] = toupper(estudiante[i]);
    }
    cout<<"\nDatos MAYUSCULAS:\n"<<estudiante;
    // Minusculas
    for(int i =0; i<estudiante.size(); i++){
        estudiante[i] = tolower(estudiante[i]);
    }
    cout<<"\nDatos minusculas:\n"<<estudiante;
    return 0;
}