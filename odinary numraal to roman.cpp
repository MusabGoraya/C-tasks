//Ordinary numeral to roman
#include <iostream>
using namespace std;
int main(){
   int integer,rslt;
   string roman;
   cout<<"Please type an integer: ";
   cin>>integer;
   if ((integer>=3000)||(integer<=0)){
   	cout<<"Invalid integer."<<roman<<endl;
   	}else{
   		 if(integer>=1000){
   		rslt=(integer/1000); 
   			for(int i=1;i<=rslt;i++) {
   		roman+="M";}
	   integer%1000; }
	    if(integer>=100){
	   	rslt=(integer/100);
	   	if(rslt==9){
	   		roman+="CM"; }
	   		 else if(rslt>=5){
		   	roman+="D";
		   	for(int i=1;i<=rslt-5;i++){
		   		roman+="C"; }}
			   	 integer%100; }
		   if(integer>=10){
		   	rslt=(integer/10);
		   	if(rslt==9){
		   		roman+="XC";}
			   else if(rslt>=5){
			   	roman+="L";
			   	for(int i=1;i<=rslt-5;i++){
			   		roman+="X"; }}
			   integer=integer%10;}
             if(integer>=1)
             {rslt=integer;
			 if (rslt==9){
			 	roman+="IX";}
			 else if(rslt>=5){
			 	roman+="V";
			 	for(int i=0;i<rslt-5;i++){
			 		roman+="I";}}
			 else if(rslt==4){
			 	roman+="IV";}
			 else if(rslt>=1){
			 	for (int i=1;i<=rslt;i++){
			 		roman+="I";}}}
   		cout<<"Roman Numeral: "<<roman<<endl;}
	   return 0;}

   	
	   
	  
	   	
		   
		   
		   
	   
	   
	   
   	
 
