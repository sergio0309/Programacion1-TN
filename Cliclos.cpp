#include<iostream>

using namespace std;

//Imprimir los primero numeros
int main(){
    int num = 7;
    int cont = 0;
    /*while (num > cont)
    {
        cout<<"Numero: "<<cont<<"\n";
        cont++;
    }
    do
    {
        cout<<"Numero: "<<cont<<"\n";
        cont++;  // cont = cont + 1
    } while (num >= cont);
    cout<<"Fin del codigo";
    

    for(cont; cont<7; cont++){
        cout<<"Numero: "<<cont+1<<"\n";
    }*/

    int num1, num2, opc=0, resultado=0;
    do
    {
        cout<<"\n########## MENU ##########\n";
        cout<<"1. Suma\n";
        cout<<"2. Resta\n";
        cout<<"3. Multiplicacion\n";
        cout<<"4. Salir\n";
        cin>>opc;
        switch (opc)
        {
        case 1:
            cout<<"\nSUMA\n";
            cout<<"Ingrese el primer valor: ";cin>>num1;
            cout<<"Ingrese el segundo valor: ";cin>>num2;
            cout<<"El resultado es: "<< num1 + num2;
            break;
        case 2:
            cout<<"\nRESTA\n";
            cout<<"Ingrese el primer valor: ";cin>>num1;
            cout<<"Ingrese el segundo valor: ";cin>>num2;
            cout<<"El resultado es: "<< num1 - num2;
            break;

        case 3:
            cout<<"\nMULTIPLICACION\n";
            cout<<"Ingrese el primer valor: ";cin>>num1;
            cout<<"Ingrese el segundo valor: ";cin>>num2;
            cout<<"El resultado es: "<< num1 * num2;
            break;
        case 4:
            cout<<"\nCodigo terminado\n";
            break;
        default:
            cout<<"\nNo es ninguna de las opciones";
            break;
        }
    } while (opc!=4); //  ! =
    
    return 0;
}