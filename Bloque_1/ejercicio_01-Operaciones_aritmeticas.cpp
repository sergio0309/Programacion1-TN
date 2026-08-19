/*1. Escribe un programa que lea de la entrada estándar dos números y muestre 
en la salida estándar su suma, resta, multiplicación y división.*/
#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int suma = 0;
    int resta = 0;
    int mult = 0;
    int div = 0;

    cout<< "Ingresa el primer numero: ";
    cin >> num1;
    cout<< "Ingresa el segundo numero: ";
    cin >> num2;

    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << mult << endl;
    cout << "La division es: " << div;

    return 0;
}