#include <iostream>
using namespace std;

int main(){
    int n1,n2;
    cout <<"Enter 2 integers: ";
    cin >> n1 >> n2;

    cout <<"Enter an operator('+','-','*','/','%'): ";
    char operatorofchoice;
    cin >> operatorofchoice;

    switch (operatorofchoice){
    case '+':
        cout <<"Sum is: "<< n1+n2 << endl;
        break;
    case '-':
        cout <<"Difference is: "<< n1-n2 << endl;
        break;
    case '*':
        cout <<"Product is: "<< n1*n2 << endl;
        break;
    case '/':
        cout <<"Division is: "<< n1/n2 << endl;
        break;
    case '%':
        cout <<"Remainder is: "<< n1%n2 << endl;
        break;
    default:
        cout <<"Error!"<< endl;
        cout <<"Enter a valid operator"<< endl;
        break;
    }
    return 0;
}