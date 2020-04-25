//name sign compatible
#include <iostream>
using namespace std;
int main(){ int date,month;
	cout<<"Enter birthmonth number: ";
	cin>>month;
	cout<<endl;
	cout<<"Enter birthdate: ";
	cin>>date;
	cout<<endl;
	if ((((month==1)||(month==2)))&&(((date>19)||(date<19)))) {
		cout<<"Sign: "<<"Acquarius"<<endl;
		cout<<endl;
		cout<<"Element: Air"<<endl;
		cout<<endl; 
		cout<<"Gemini and Libra would be compatible for your birthday"<<endl;
		cout<<endl; }
		else	if ((((month==2)||(month==3)))&&(((date>18)||(date<21)))) {
		cout<<"Sign: "<<"Pisces"<<endl; 
		cout<<endl;
		cout<<"Element: Water"<<endl;
		cout<<endl; 
		cout<<"Cancer and Scorpio would be compatible for your birthday"<<endl; 
		cout<<endl;   }
		else	if ((((month==3)||(month==4)))&&(((date>20)||(date<20)))) {
		cout<<"Sign: "<<"Aries"<<endl; 
		cout<<endl; 
		cout<<"Element: Fire"<<endl;
		cout<<endl; 
		cout<<"Leo and Sagittarius would be compatible for your birthday"<<endl; 
		cout<<endl;  }
		else	if ((((month==4)||(month==5)))&&(((date>19)||(date<21)))) {
		cout<<"Sign: "<<"Taurus"<<endl; 
		cout<<endl;
		cout<<"Element: Earth"<<endl;
		cout<<endl; 
		cout<<"Virgo and Capricorn would be compatible for your birthday"<<endl;
		cout<<endl;    }
		else	if ((((month==5)||(month==6)))&&(((date>20)||(date<22)))) {
		cout<<"Sign: "<<"Gemini"<<endl; 
		cout<<endl; 
		cout<<"Element: Air"<<endl;
		cout<<endl; 
		cout<<"Aquarius and Libra would be compatible for your birthday"<<endl;
		cout<<endl;   }
		else	if ((((month==6)||(month==7)))&&(((date>21)||(date<23)))) {
		cout<<"Sign: "<<"Cancer"<<endl; 
		cout<<endl; 
		cout<<"Element: Water"<<endl;
		cout<<endl; 
		cout<<"Scorpio and Pisces would be compatible for your birthday"<<endl;
		cout<<endl;   }
		else	if ((((month==7)||(month==8)))&&(((date>22)||(date<23)))) {
		cout<<"Sign: "<<"Leo"<<endl;  
		cout<<endl;
		cout<<"Element: Fire"<<endl;
		cout<<endl; 
		cout<<"Aries and Sagittarius would be compatible for your birthday"<<endl;
		cout<<endl;    }
		else	if ((((month==8)||(month==9)))&&(((date>22)||(date<23)))) {
		cout<<"Sign: "<<"Virgo"<<endl; 
		cout<<endl;
		cout<<"Element: Earth"<<endl;
		cout<<endl;
		cout<<"Taurus and Capricorn would be compatible for your birthday"<<endl;
		cout<<endl;    }
		else	if ((((month==9)||(month==10)))&&(((date>22)||(date<23)))) {
		cout<<"Sign: "<<"Libra"<<endl;  
		cout<<endl;
		cout<<"Element: Air"<<endl;
		cout<<endl;
		cout<<"Gemini and Aquarius would be compatible for your birthday"<<endl; 
		cout<<endl;  }
		else	if ((((month==10)||(month==11)))&&(((date>22)||(date<22)))) {
		cout<<"Sign: "<<"Scorpio"<<endl;  
		cout<<endl;  
		cout<<"Element: Water"<<endl;
		cout<<endl;
		cout<<"Cancer and Pisces would be compatible for your birthday"<<endl;     
		cout<<endl;         }
		else	if ((((month==11)||(month==12)))&&(((date>21)||(date<22)))) {
		cout<<"Sign: "<<"Sagittarius"<<endl;  
		cout<<endl;
		cout<<"Element: Fire"<<endl;
		cout<<endl; 
		cout<<"Aries and Leo would be compatible for your birthday"<<endl;  
		cout<<endl;   }
		else	if ((((month==12)||(month==21)))&&(((date>21)||(date<20)))) {
		cout<<"Sign: "<<"Capricorn"<<endl;  
		cout<<endl;
		cout<<"Element: Earth"<<endl;
		cout<<endl; 
		cout<<"Taurus and Virgo would be compatible for your birthday"<<endl;  
		cout<<endl;  }
		else 
		cout<<"Invalid date or month";
		return 0;	
	}


