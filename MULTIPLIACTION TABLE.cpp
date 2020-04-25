//Multiplication table
#include <iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter a number please: ";
	  cin>>number;
	  cout<<endl;
	cout<<"Multiplication Table of "<<number<<" "<<"is: "<<endl;
	for(int n=1;n<=10;n++){
	
		cout<<number<<"*"<<n<<"="<<number*n<<endl;
	}
	return 0;
}
