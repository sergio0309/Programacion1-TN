//2. Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d) 

#include<iostream>

using namespace std;

int main () {
    
    float a, b, c, d, resultado;
    cout<<"Ingresa el valor de a: ";
    cin>>a;
    cout<<"Ingresa el valor de b: ";
    cin>>b;
    cout<<"Ingresa el valor de c: ";
    cin>>c;
    cout<<"Ingresa el valor de d: ";
    cin>>d;

    resultado = (a+b)/(c+d);
    cout<<"-----------------------"<<endl;
    cout<<"El total es: "<< resultado;
    return 0;
}