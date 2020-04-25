//Babelonian algorithm
#include <iostream>
using namespace std;
int main(){ 
double guess,r,n;
    cout<<"Enter a number: ";
cin>>n;
    guess=n/2;
	for (int i=1;i<=5;i++)
{
		r=n/guess;
		guess=(guess+r)/2;
}
	cout<<"Square root of "<<n<<" is "<<guess<<endl;
	return 0;
}
