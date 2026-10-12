#include <iostream>
using namespace std;
//Variables Globales
int valor = 50;
void contadorLlamadas(){
    static int valor = 0;
    valor = valor + 1;
    cout << "La funcion se ha llamado " << valor << " veces." << endl;
}

int main() 
{
    contadorLlamadas();
    contadorLlamadas();
    contadorLlamadas();
    contadorLlamadas();
}