#include<iostream>
using namespace std;

void Sumatoria(int num){         //1---2
    static int sumatoria = 0;
    sumatoria = sumatoria + num;    //0+1, sumatoria=1 -, 3 
    //return sumatoria;
    cout<<sumatoria<<"\n";
}


int main(){
    int numero=0;
    cout<<"Ingrese la cantidan de numeros a sumar: ";
    cin>>numero;
    for(int i=1; i<=numero; i++){
        //cout<<Sumatoria(i)<<"\n";   // i=1, i=2, i=3
        Sumatoria(i);
    }
    return 0;
}