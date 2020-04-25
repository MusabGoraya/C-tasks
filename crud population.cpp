//Green crud population
#include <iostream>
using namespace std;
int main(){
	double i_siz,no_days;
	char yn;
do{
  		cout<<"Enter initial size(pounds) of green crude population: ";
	    cin>>i_siz;
	cout<<"Enter the number of days: ";
    	cin>>no_days;
    	if(no_days<=5)
    	cout<<"Total numbers of pounds of green crudes "<<i_siz*1<<endl;
    	else if(no_days<=10)
    	cout<<"Total numbers of pounds of green crudes "<<i_siz*2<<endl;
    		else if(no_days<=15)
    	cout<<"Total numbers of pounds of green crudes "<<i_siz*3<<endl;
    		else if(no_days<=20)
    	cout<<"Total numbers of pounds of green crudes "<<i_siz*4<<endl;
    		else if(no_days<=25)
    			cout<<"Total numbers of pounds of green crudes "<<i_siz*5<<endl;
    		else if(no_days<=30)
    			cout<<"Total numbers of pounds of green crudes "<<i_siz*6<<endl;
    				else if(no_days<=35)
    			cout<<"Total numbers of pounds of green crudes "<<i_siz*7<<endl;
    				else if(no_days<=40)
    			cout<<"Total numbers of pounds of green crudes "<<i_siz*8<<endl;
    				else if(no_days<=45)
    			cout<<"Total numbers of pounds of green crudes "<<i_siz*9<<endl;
    			else if(no_days<=50)
    			cout<<"Total numbers of pounds of green crudes "<<i_siz*10<<endl;
    			cout<<"Do you want to continue Y/N: ";
    			cin>>yn;
    			cout<<endl;
     }  while(!(yn=='n'||yn=='N'));
  	return 0;
}
