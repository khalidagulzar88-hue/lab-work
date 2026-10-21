#include<iostream>
using namespace std;
long double pyramid(double,double,double,string);
int main(){
	double length,width,height;
	string unit;
	double volume,convertedvalue;
	cout<<"enter the length:";
	cin>>length;
	cout<<"enter the width:";
	cin>>width;
	cout<<"enter the height:";
	cin>>height;
	cout<<"enter the unit:";
	cin>>unit;
	convertedvalue=volume;
	volume=(height*width*length)/3;
	cout<<"volume="<<volume<<"cubicmeter";
	
	return 0;
	
}
long double  pyramid(double length,double height,double width,string unit){
	double volume;
	double convertedvalue;
	volume=(length*width*height)/3;
	cout<<"enter the length:";
	cin>>length;
	cout<<"enter the width:";
	cin>>width;
	cout<<"enter the height:";
	cin>>height;
	cout<<"enter the unit:";
	cin>>unit;
	if(unit=="centimeter"){
		convertedvalue=volume*100;
	}else{
		cout<<"not convertedvalue";
	}
	if(unit=="kilometer"){
		convertedvalue=volume/1000;
	}
	else{
		cout<<"not convertedvalue";
	}
	if(unit=="milimeter"){
		convertedvalue=volume*1000;
	}
	else{
		cout<<"not convertedvalue";
	}
	return convertedvalue;
}
