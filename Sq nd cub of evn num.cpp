//square and cube of ten even numbers
#include <iostream>
using namespace std;
int main(){
	cout<<"Square of ten even numbers is: ";
	cout<<endl;
	for(int n =2;n<=20;n++ ){
	
	if (n%2==0)
	 {
	   cout<<n<<"*"<<n<<"="<<n*n<<endl;
}
	  else 
	  continue;
	  
}
   cout<<"Cube of ten even numbers is: ";
   cout<<endl;
   for(int n =2;n<=20;n++ ){
   	if (n%2==0){
   		cout<<n<<"*"<<n<<"*"<<n<<"="<<n*n*n<<endl;
	   }
   }
    
return 0;
}
