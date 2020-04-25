//astrology program
#include <iostream>
using namespace std;
int main(){ int date,month;
	cout<<"Enter birthdate: ";
	cin>>date;
	cout<<"Enter birthmonth: ";
	cin>>month;
	if ((((month==1)||(month==2)))&&(((date>19)||(date<19)))) {
		cout<<"Sign: "<<"Acquarius"<<endl;
		cout<<"Horoscope:  Futuristic Aquarius energy helps us innovate and unite for social justice.";  }
		else	if ((((month==2)||(month==3)))&&(((date>18)||(date<21)))) {
		cout<<"Sign: "<<"Piscus"<<endl;
		cout<<"Horoscope: Pisces energy awakens compassion, imagination and artistry, uniting us as one.";    }
		else	if ((((month==3)||(month==4)))&&(((date>20)||(date<20)))) {
		cout<<"Sign: "<<"Aries"<<endl;
		cout<<"Horoscope: Aries energy helps us initiate, fight for our beliefs and fearlessly put ourselves out there.";    }
		else	if ((((month==4)||(month==5)))&&(((date>19)||(date<21)))) {
		cout<<"Sign: "<<"Taurus"<<endl; 
		cout<<"Horoscope: Taurus energy helps us seek security, enjoy earthly pleasures and get the job done.";   }
		else	if ((((month==5)||(month==6)))&&(((date>20)||(date<22)))) {
		cout<<"Sign: "<<"Gemini"<<endl; 
		cout<<"Horoscope: Gemini energy helps us communicate, collaborate and fly our freak flags at full mast.";   }
		else	if ((((month==6)||(month==7)))&&(((date>21)||(date<23)))) {
		cout<<"Sign: "<<"Cancer"<<endl; 
		cout<<"Horoscope: Cancer energy helps us connect with our feelings, plant deep roots and feather our family nests.";   }
		else	if ((((month==7)||(month==8)))&&(((date>22)||(date<23)))) {
		cout<<"Sign: "<<"Leo"<<endl; 
		cout<<"Horoscope: Leo energy helps us shine, express ourselves boldly and wear our hearts on our sleeves.";    }
		else	if ((((month==8)||(month==9)))&&(((date>22)||(date<23)))) {
		cout<<"Sign: "<<"Virgo"<<endl; 
		cout<<"Horoscope: Virgo energy teaches us to serve, do impeccable work and prioritize wellbeing—of ourselves, our loved ones and the planet.";   }
		else	if ((((month==9)||(month==10)))&&(((date>22)||(date<23)))) {
		cout<<"Sign: "<<"Libra"<<endl; 
		cout<<"Horoscope: Libra energy inspires us to seek peace, harmony and cooperation—and to do it with style and grace.";   }
		else	if ((((month==10)||(month==11)))&&(((date>22)||(date<22)))) {
		cout<<"Sign: "<<"Scorpio"<<endl; 
		cout<<"Horoscope: Scorpio energy helps us dive deep, merge our superpowers and form bonds that are built to last."  ;              }
		else	if ((((month==11)||(month==12)))&&(((date>21)||(date<22)))) {
		cout<<"Sign: "<<"Sagittarius"<<endl; 
		cout<<"Horoscope: Sagittarius energy inspires us to dream big, chase the impossible and take fearless risks."  ;   }
		else	if ((((month==12)||(month==21)))&&(((date>21)||(date<20)))) {
		cout<<"Sign: "<<"Capricorn"<<endl;   
		cout<<"Horoscope: Capricorn energy teaches us the power of structure and long-term goals.";  }
		else 
		cout<<"Invalid date or month";
		return 0;	
	}


