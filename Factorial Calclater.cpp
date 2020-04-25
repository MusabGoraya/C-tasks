//factorial calculator
#include <iostream>
using namespace std;
int main(){
	int num,fact=1;
	cout<<"Enter an integer:";
	cin>>num;

	if(num>1)  {
		
	for(int i=num;i>=2;i--) {
	
	fact=fact*i; }
cout<<num<<"! ="<<fact<<endl;
	}
	else if (num<0) {
	
	cout<<"Factorial cannot be find for negative integer."<<endl;
}
	else if((num==0)||(num==1)) {
	
	cout<<num<<"! ="<<"1"<<endl;  }

	return 0;
}





