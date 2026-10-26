//Total de gasto Semanal
#include<iostream>
using namespace std;
int main(){
    const int DIAS = 7;
    double gastos[DIAS];
    double gastoTotal = 0.0;
    cout<<"*---- CONTROL DE GASTOS SEMANALES ----*\n";
    for(int i = 0; i < DIAS; i++){
        cout<<"\nIngrese el gasto del dia ["<<i<<"]: ";
        cin>>gastos[i];
        gastoTotal += gastos[i]; //gastoTotal + gastos[i]
    }
    cout<<"\nEl gasto total de la semana es: "<<gastoTotal;
    return 0;
}