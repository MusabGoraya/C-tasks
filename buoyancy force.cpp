//buoyancy force
#include <iostream>
using namespace std;
int main(){ double weight,radius,buont_forc,volume,wet_water;
	cout<<"Enter weight(pounds) of object: ";
	cin>>weight;
	cout<<"Enter radius(feet) of sphere: ";
	cin>>radius;
	volume=((4)*(3.14)*(radius*radius*radius))/3;
    wet_water=62.4;
    buont_forc=volume*wet_water;
	cout<<"Buoyant force= "<<buont_forc<<" "<<"N"<<endl;
	if ((buont_forc>weight)||(buont_forc==weight))
	cout<<"The object will float.";
	else
	cout<<"The object will sink.";
	return 0;
}
