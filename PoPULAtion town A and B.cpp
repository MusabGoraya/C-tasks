//Population of town A and town B
#include <iostream>
using namespace std;
int main(){
	int pop_A, pop_B,years=0;
	float rate_A,rate_B;
	    cout<<"Enter population of town A : ";
	cin>>pop_A;
	   cout<<"Enter growth rate(%) of town A : ";
	 cin>>rate_A;
		cout<<"Enter population of town B : ";
	cin>>pop_B;
	  cout<<"Enter growth rate(%) of town B : ";
	 cin>>rate_B;
	 if((pop_A<pop_B)&&(rate_A>rate_B)) { 
do
	   {  
	    pop_A= (pop_A*(rate_A/100)+pop_A);
	   pop_B= (pop_B*(rate_B/100)+pop_B);
	   years=years+1;
		} while(!(pop_A>pop_B));
    cout<<"After "<<years<<" years town A will have greater population than that of town B"<<endl;
	cout<<"Total population of town A; "<<pop_A<<endl;
	cout<<"Total population of town B: "<<pop_B<<endl;
	 }
	    else 
	 return 0;
}
