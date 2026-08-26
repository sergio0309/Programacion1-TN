/*6. Escriba un programa que lea las tres notas de un alumno y calcule la 
nota final media de dicho alumno

0 - 60 => REPROBADO

61 - 80 => APROBADO

81 - 90 => DESTACABLE

91 - 100 => EXCELENCIA
*/

#include<iostream>

using namespace std;

int main(){

    float nota1, nota2, nota3, promedio;
    cout<<"Ingrese la primera nota: ";
    cin>>nota1;
    cout<<"Ingrese la segunda  nota: ";
    cin>>nota2;
    cout<<"Ingrese la tercera  nota: ";
    cin>>nota3;

    promedio = (nota1 + nota2 + nota3) / 3;

    if(promedio<= 60){
        cout<<"\nEL promedio es: "<< promedio<<"\n" ;
        cout<<"Reprobo";
    }
    if(promedio>=61 && promedio<= 80){
        cout<<"\nEL promedio es: "<< promedio<<"\n" ;
        cout<<"Aprobado";
    }
    if(promedio>=81 && promedio<= 90){
        cout<<"\nEL promedio es: "<< promedio<<"\n" ;
        cout<<"Destacado";
    }
    else if(promedio>=91){
        cout<<"\nEL promedio es: "<< promedio<<"\n" ;
        cout<<"Excelencia";
    }
    return 0;
}