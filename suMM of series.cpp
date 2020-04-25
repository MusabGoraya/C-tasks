//sum of series
#include <iostream>
using namespace std;
int main(){
	float sum=0;
	cout<<"Sum of series 1,1/2,1/3....1/45 is: ";
	float i=1;
	while(i<=45){
	
	   sum=sum+(1/i); 
	   i++; }  
	   cout<<sum<<endl;
	   
	
	return 0;
}
