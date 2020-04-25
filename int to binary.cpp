//integer to binary
#include <iostream>
using namespace std;
int main(){
	int num,rem,integer,binry=0,k=1;
	cout<<"Enter an integer please: ";
	cin>>integer;
	num=integer;
	do{
      rem=integer%2;
      integer=integer/2;
      binry=binry+(rem*k);
      k=k*10;
  } while(integer!=0);
  cout<<"Binary equivalent of "<<num<<" is "<<binry<<".";
	
	return 0;
}
