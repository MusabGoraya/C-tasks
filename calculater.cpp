//calculator using switch statements
#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	char oprtr;
	cout<<"Enter first number: ";
	cin>>num1;
	cout<<"Enter the operator: ";
	cin>>oprtr;
	cout<<"Enter second number: ";
	cin>>num2;

  switch (oprtr) {
  
  case '+':
    cout<<"Sum : "<<(num1+num2);
	break; 
  case '-':
  	cout<<"Substraction : "<<(num1-num2);
  	break ;
  case '*':
  	cout<<"Multiplication : "<<(num1*num2);
  	break;
  case '/':
  	cout<<"Division : "<<(num1/num2);
  	break;
  case '%':
  	cout<<"Remainder : "<<num1%num2;
  	break;
  case '>':
  	cout<<"Result : "<<(num1>num2);
  	break;
  case '<':
  	cout<<"Result : "<<(num1<num2);
  	break;
  case '&':
    cout<<"Result : "<<(num1)&&(num2);
  	break;
  case '|':
    cout<<"Result : "<<(num1)||(num2);
  	break;
  case '?':
    cout<<"Result : "<<(num1>num2)?num1:num2;
  	break;
  	default:
  		cout<<"Sorry you cannot use that operation in this calculator.";
	}
        return 0;
	
}
