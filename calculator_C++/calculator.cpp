//Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. Allow the user to input two numbers and choose an operation to perform.

#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter a operator:[ + , * , - , / ]\n";
    cin>>op;
    switch(op){
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;

        default:
        cout<<"Invalid Operator!!";
    }    
}