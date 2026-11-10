#include <iostream>
using namespace std;
int main(){
    //string nombre = "Jesus Ramos";
    string nombre;
    cout<<"Ingrese nombre completo: ";
    getline(cin,nombre);
    cout<<nombre<<"\n";
    int i = 0;
    while(i<nombre.size()){
        cout<<nombre[i]<<"\n";
        i++;
    }
    cout<<"Fin del codigo...";
    return 0;
}