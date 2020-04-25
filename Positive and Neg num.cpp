//Positive and Negative Numbers
#include <iostream>
using namespace std;
int main(){
	int number;
	cout<<"Type a number please: ";
	cin>>number;
	if  (number==0)
		cout<<number<<" is neither positive nor negative.";     //prints 0 is neither positive and negative
		else if (number>0)
		cout<<number <<" is positive number.";                          //prints positive number
		else 
		cout<<number <<" is negative number.";                         //prints negative number
		 

	return  0;
	
}
