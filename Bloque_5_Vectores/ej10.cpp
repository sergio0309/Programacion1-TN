#include <iostream>
using namespace std;
//Matriz
void iniciarMatriz(int mat[10][10]){
    int i=0,j=0,num=0;
    while (i<10)
    {
        while (j<10)
        {
            mat[i][j] = num +1;
            j++;
            num++;
        }
        i++;
        j=0;
        cout<<"\n";
    }
}
void mostrarMatriz(int mat[10][10]){
    int i=0,j=0,num=0;
    while (i<10)
    {
        while (j<10)
        {
            cout<<mat[i][j]<<" ";
            j++;
        }
        i++;
        j=0;
        cout<<"\n";
    }
}
int main(){
    int mat[10][10];
    iniciarMatriz(mat);
    mostrarMatriz(mat);
    return 0;
}