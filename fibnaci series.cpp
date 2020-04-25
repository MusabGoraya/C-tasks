//Fibonacci series
#include <iostream>
using namespace std;
int main (){
int n1=0,n2=1,Fib_series;
cout<<"Fibonacci series upto 200 is: ";
for(int i=0;i<=11;i++)
if(i==0) {
cout<<n1<<" "<<n2<<" "; }
else
 {
   Fib_series=n1+n2;
  n1=n2;
  n2=Fib_series;
  cout<<Fib_series<<" ";
}
	return 0;
}
