/*8. Escribe un programa que lea de la entrada estándar tres números. Después 
debe leer un cuarto número e indicar si el número coincide con alguno de los 
introducidos con anterioridad.*/

#include<iostream>

using namespace std;

int main(){
    int num1,num2,num3,num4;

    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el primer numero: ";
    cin>>num2;
    cout<<"Ingrese el primer numero: ";
    cin>>num3;
    cout<<"Ingrese el primer numero: ";
    cin>>num4;

    if (num4 == num1 )
    {
        cout<<"es similar";
    }
    else if (num4 == num2)
    {
        /* code */
        cout << "es similar";
    }
    else if (num4 == num3)
    {
        /* code */
        cout << "es similar";
    }
    
    return 0;
}