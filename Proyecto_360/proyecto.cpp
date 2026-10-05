/*
Registro de estudiantes en bloc de notas
*/
#include<iostream> // permite usar cin y cout...
#include<string> // Manejo de cadenas de texto
#include<cstdlib> // comandos de sistema ('cls')
#include<fstream> // Permite la lectura y  escritura de texto
using namespace std; // para evitar prefijo 'std'

// 1. Metodo para registrar y guardar estudiante en un archivo
void registrarEstudiante(){
    string nombre, edad, carrera;
    cin.ignore(); // limpia el buffer del teclado
    cout<<"\n--- REGISTRAR ESTUDIANTE ---\n";
    getline(cin, nombre);
    cout<<"Ingrese Edad: ";
    getline(cin, edad);
    cout<<"Ingrese Carrera: ";
    getline(cin, carrera);

    // Evitar guardar campos vacios
    if( nombre.empty() || edad.empty() || carrera.empty()){
        cout<<"\nError: Todos los campos son pbligatorios";
        return;
    }
    //abrir archivo o crear archivo - agregar rregistros al final
    ofstream archivo("estudiante.txt", ios::app);
    if(archivo.is_open()){
        archivo <<"Nombre: "<<nombre<<" | Edad: "<<edad<<" | Carrera: "<<carrera<<"\n";
        archivo.close();
        cout<<"\nEstudiante registrado con exito!!\n";
    }else{
        cout<<"\nError No se puedo abrir el archivo\n";
    }
}

// 2. Metodo mostrar y lees los registros de bloc de notas
void leerEstudiantes(){
    ifstream archivo("estudiante.txt"); //Abrir en modo lectura
    string linea;
    cout<<"\n--- LISTA DE ESTUDIANTES REGISTRADOS ---\n";
    if(archivo.is_open()){
        bool hayDatos = false;
        while (getline(archivo, linea))
        {
            cout<<linea<<"\n";
            hayDatos=true;
        }
        archivo.close();
        if(!hayDatos){
            cout<<"El archivo esta vacio.\n";
        }
    } else {
        cout<<"No hay registros guardados.\n";
    }
}

// Punto de entrada pricipal del programa
int main(){
    int opcion;
    do
    {
        cout<<"\n==================================\n";
        cout<<"\n  SISTEMA DE CONTROL ESTUDIANTIL  \n";
        cout<<"\n==================================\n";
        cout<<"1. Registrar Estudiante\n";
        cout<<"2. Mostrar todos los registros\n";
        cout<<"3. Salir\n";
        cout<<"Selecciones una opcion: ";
        cin>>opcion;
        switch (opcion)
        {
            case 1: registrarEstudiante(); break;
            case 2: leerEstudiantes(); break;
            case 3:
                cout<<"\nSaliendo del programa\n";
                break;
            default:
                cout<<"\nOpcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 3); // ! =
    
    return 0;
}