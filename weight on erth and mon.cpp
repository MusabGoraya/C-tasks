//weight on Earth or Moon
#include <iostream>
using namespace std;
int main (){
	double car_mass;
	int choice;
	cout<<"Enter the mass of car in kg please: ";
	cin>>car_mass;

	cout<<"Where you want to find the weight of car? "<<endl;
	cout<<"1. On Earth"<<endl;
	cout<<"2. On Moon"<<endl;
	cout<<"Please choose the option number: ";
	
	cin>>choice;
	if (choice==1)
	cout<<"Weight on Earth is "<<car_mass*9.81<<" "<<"N."<<endl;       //prints weight on Earth
	
	else if(choice==2)
	cout<<"Weight on Moon is "<<(car_mass*9.81)/6<<" "<<"N."<<endl;     //prints weight on Moon
	
	return 0;
}
