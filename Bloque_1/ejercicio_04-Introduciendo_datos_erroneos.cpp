#include <iostream>
#include <string>

using namespace std;

int main() {

    // Declaracion de variables
    int edad;
    int opc;
    string genero;
    float altura;

    // Repetir el menu hasta elegir la opcion 4
    do
    {
        cout << "-------- OPCIONES --------" << endl;
        cout << "1. Ingresar Edad" << endl;
        cout << "2. Ingresar Genero" << endl;
        cout << "3. Ingresar Altura" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una de las opciones: ";
        cin >> opc;

        // Evaluar la opcion seleccionada
        switch (opc)
        {
        case 1:
            // Pedir y mostrar la edad
            cout << "Ingrese su edad: ";
            cin >> edad;
            cout << "Su edad es: " << edad << endl;
            break;

        case 2:
            // Pedir y mostrar el genero
            cout << "Ingrese su Genero: ";
            cin >> genero;
            cout << "Su genero es: " << genero << endl;
            break;

        case 3:
            // Pedir y mostrar la altura
            cout << "Ingrese su altura: ";
            cin >> altura;
            cout << "Su altura es: " << altura << endl;
            break;

        case 4:
            // Finalizar el programa
            cout << "Hasta luego!!" << endl;
            break;

        default:
            // Se ejecuta si la opcion no es valida
            cout << "Opcion no valida." << endl;
            break;
        }

    } while (opc != 4);

    return 0;
}