#include<iostream>
using namespace std;
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55
//Metodo
void Fibonacci(int num, int num2){
    int i = 2;
    while (i <= 15)
    {
        num = num + num2;   //0+1,num=1--1+0,num=1--1+1,num=2---2+1,num3
        cout<<num<<", ";    //num=2
        num2 = num - num2;  //1-1, num2=0,1-0,num2=1--2-1,num2=1
        i++;
    }
    
}

int main(){
    cout<<"Serie Fibonaci";
    Fibonacci(0,1);
    return 0;
}