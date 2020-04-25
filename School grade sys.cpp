//school grading system
#include <iostream>
using namespace std;
int main(){ 
    int marks;
	cout<<"Total marks = 100 "<<endl;
	cout<<endl;
	cout<<"Obtained marks:";
	cin>>marks;
	cout<<endl;
	 if (marks>100) {
	
    cout<<"Obtained marks cannot be greater than total marks.  "<<endl;
	 }
	else if (marks>90) {
	
	cout<<"Grade: A1."<<endl;
		cout<<endl;
	cout<<"Teacher remarks: Excellent."; }
    else if (marks>80) {
	
    cout<<"Grade: A."<<endl;
    	cout<<endl;
	cout<<"Teacher remarks: Very good."; }
	else  if (marks>70) {
	  
    cout<<"Grade: B."<<endl;
    	cout<<endl;
	cout<<"Teacher remarks:  Good."; }
	else if (marks>60) {
	
    cout<<"Grade: C."<<endl;
    	cout<<endl;
	cout<<"Teacher remarks:  Not bad."; }
    else if (marks>50) {
	 
    cout<<"Grade: D."<<endl;
    	cout<<endl;
    cout<<"Teacher remarks:  Satisfactory."; }
		else if (marks>40) {
		
    cout<<"Grade: E."<<endl;
    	cout<<endl;
	cout<<"Teacher remarks:  Fair."; }
	else if(marks<40) {
	
    cout<<"Grade: F."<<endl;
	cout<<"Teacher remarks:  Better luck for the next time ."; }

	return 0;
	
}
