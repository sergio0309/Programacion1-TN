/*8. Escriba un programa que lea de la entrada estándar los dos catetos de un 
triángulo rectángulo y escriba en la salida estándar su hipotenusa.*/

//Manuel Quevedo puntos extra

#include <iostream>
#include <cmath>

using namespace std;

int a,b;
float hipo;

int main (){

    cout << "Ingrese el primer cateto" <<endl;
    cin >> a;
    cout << "Ingrese el segundo cateto" <<endl;
    cin >> b;

    hipo = sqrt(pow(a,2)+pow(b,2));

    cout << "La hipotenusa es = "<<hipo;
}