//percentage of N exrcises
#include <iostream>
using namespace std;
int main(){
	int exr,scr,pnt;
	double per,u=0,k=0;
	 cout<<"How many exercises to input? ";
	    cin>>exr;
	for(int i=1;i<=exr;i++)
	{
	 cout<<"Score received for exercise "<<i<<":";
	    cin>>scr;
	 cout<<"Total points possible for exercise "<<i<<":";
     	cin>>pnt;
    	u=scr+u;
      	k=pnt+k;
}
      per=(u*100)/k;
   cout<<"Your total is "<<u<<" out of "<<k<<", or "<<per<<"%"<<endl;
   cout<<endl; 
  
	return 0;
}
