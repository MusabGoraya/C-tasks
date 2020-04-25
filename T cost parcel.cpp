//total cost of parcel
#include <iostream>
using namespace std;
int main(){
	int weight,loc,t_price,a;
	do{
		cout<<"Enter the weight(kg) of parcel:";
	cin>>weight;
	cout<<"Locations:";
      	cout<<endl;
	cout<<"(1)->Within city.";
	    cout<<endl;
	cout<<"(2)->Outside city.";
	    cout<<endl;
	cout<<"Enter the location number: ";
	cin>>loc;
		if(loc==1)
{
	t_price=weight*(22);
	}	
	else if (loc==2)
	{t_price=weight*(42); }
		cout<<"Total price of parcel is "<<"$"<<t_price<<"."<<endl;
	 cout<<"Enter 0 for exit and 1 for continue:  ";
	cin>>a;
	cout<<endl;
	}while(a!=0);
	return 0;
}
