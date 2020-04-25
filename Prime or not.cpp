//Number prime or not
#include <iostream>
using namespace std;
int main(){
	int num,rem_count=0;
	cout<<"Enter a number: ";
	cin>>num;
   for(int i=2;i<=num;i++) 
   
   if(num%i==0) 
   rem_count=rem_count+1;
    if(rem_count==1)
     cout<<num<<" "<<"is prime number.";
	 else if(rem_count!=1)
	 cout<<num<<" "<<"is not prime number.";
	 
     return 0;
}
