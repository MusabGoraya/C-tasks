//Task num 5
#include <iostream>
using namespace std;
int main (){
	float percentage,GPA;
	cout<<"Enter your percentage: ";
	cin>>percentage;
	GPA=(percentage/100)*4;
	cout<<"Your Grade Point Average is: "<<GPA;   //prints GPA according to percentage
	return 0;
}
