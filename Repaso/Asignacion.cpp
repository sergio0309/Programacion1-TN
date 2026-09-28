#include<iostream>

using namespace std;

int main(){
    //Operadores de asignacion y operadores aritmeticos

    int a=20, suma=2, resta=1, multiplicacion=3, division=10;

    //Suma
    //suma = suma + a; 
    suma += a;  //suma = suma + a; 
    cout<<"La suma es: "<<suma<<"\n";     //concadenacion
    
    //resta
    resta -= a;        //resta = resta - a;
    cout<<"La resta es: "<<resta<<"\n";     //concadenacion

    //Multiplicacion
    multiplicacion *= a;    //multiplicacion = multiplicacion * a; //
    cout<<"La multiplicacion es: "<<multiplicacion<<"\n";     //concadenacion

    //Division
    division /= a;//division = division / a; //
    cout<<"La division es: "<<division<<"\n";     //concadenacion

    return 0;
}