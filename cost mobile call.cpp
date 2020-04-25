//cost of mobile call
#include <iostream>
using namespace std;
int main(){ string day; 
int time, lenth_call;
    cout<<"Enter day of call: ";
    cin>>day;
    cout<<"Enter time of call(Example 1:30 as 1330): ";
    cin>>time;
     cout<<"Enter length of call(minutes): ";
    cin>>lenth_call;
    
    if (((day=="Mo")||(day=="mo")|| (day=="MO") || (day=="Tu")   || (day=="tu")  || (day=="TU")   
	     || (day=="We")  || (day=="we")  || (day=="WE")  || (day=="Th")  || (day=="th")  || (day=="TH") 
		  || (day=="Fr")  || (day=="fr")  || (day=="FR"))   &&   ((time<1800)&&(time>800))  )                               
  {
	  	cout<<"Cost of call is: "<<"$"<<0.40*lenth_call<<" "<<"only";  }
  	
  	else if (((day=="Mo")||(day=="mo")|| (day=="MO") || (day=="Tu")   || (day=="tu")  || (day=="TU")   
	     || (day=="We")  || (day=="we")  || (day=="WE")  || (day=="Th")  || (day=="th")  || (day=="TH") 
		  || (day=="Fr")  || (day=="fr")  || (day=="FR"))   &&   ((time>1800)||(time<800))  )                                  
  {
	  	cout<<"Cost of call is: "<<"$"<<0.25*lenth_call<<" "<<"only"; }
	else                                    
  {
	  	cout<<"Cost of call is: "<<"$"<<0.15*lenth_call<<" "<<"only"; }
  
	return 0;
}
