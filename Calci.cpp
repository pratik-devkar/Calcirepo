#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char op;
    int num1,num2;

    cout<<"Enter num1 number:";
    cin>>num1;
   
    cout<<"Enter an operator(+,-,*,/,%):";
    cin>>op;

    cout<<"Enter num2 number:";
    cin>>num2;

    switch(op){
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;

        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;

        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;

        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;

        case '%':
        cout<<num1<<"%"<<num2<<"="<<num1%num2;
        break;

        default:
        cout<<"Invalid operator";

}
return 0;

}