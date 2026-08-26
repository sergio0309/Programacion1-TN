/*7.La calificación final de un estudiante es el promedio de tres notas:
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un
60% y la nota de participación que cuenta el 10% restante. Escriba un programa 
que lea las tres notas del alumno y escriba su nota final.*/

#include <iostream>

using namespace std;

int main() {

    float practica;
    float teoria;
    float participacion;
    float notaFinal;

    cout<<"Ingresar nota de la pratica: ";
    cin>>practica;

    cout<<"Ingresar nota de la teoria: ";
    cin>>teoria;

    cout<<"Ingresar nota de la participacion: ";
    cin>>participacion;

    practica *= 0.30;
    participacion *= 0.10;
    teoria *= 0.60;

    notaFinal = practica + participacion + teoria;

    cout<<"La nota final es: " << notaFinal << endl;

    return 0;
}

//Nota Extra JOSE MARIA RIOJA MENESES