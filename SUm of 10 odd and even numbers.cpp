//sum of first 10 odd and even numbers
#include <iostream>
using namespace std;
int main(){
	int sum=0;
	int addition=0;
	cout<<"Sum of first 10 even number is: ";

	for(int i=1; i<=20;i++){
		if(i%2==0)
	    sum=sum+i;
	}
    cout<<sum<<endl;
    cout<<"Sum of first 10 odd number is: ";
    	for(int i=1; i<=20;i++){
		if(i%2==1)
	    addition=addition+i;
	}
	cout<<addition<<endl;
return 0;
}
