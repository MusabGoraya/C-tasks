//Task number 4
#include <iostream>
using namespace std;
int main (){
	float distance_mil=55.0,speed_mil_p_hrs=15.0,time_hrs,time_min;
	int time_HRS;
    

	time_hrs=distance_mil/speed_mil_p_hrs;                                  //prints time in hours in decimal
	time_HRS=distance_mil/speed_mil_p_hrs;                                  //prints time in hours in integer
		
		time_min=(time_hrs-time_HRS)*60;                                    //prints time in minutes
		cout<<"Time : "<<time_HRS<<" hours "<<"and "<<time_min<<" mminutes"<<endl;  //prints time in hours and minutes
	
	
	return 0;
}
