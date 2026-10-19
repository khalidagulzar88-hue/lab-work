#include<iostream>
using namespace std;
int main(){
	int q,d,n,p;
	float price,c1,c2,c3,c4,sum;
	cout<<"enter the quarters:";
	cin>>q;
	cout<<"enter the dimes:";
	cin>>d;
	cout<<"enter the nickles:";
	cin>>n;
	cout<<"enter the pennies:";
	cin>>p;
	cout<<"enter the item price:";
	cin>>price;
	c1=q*0.25;
	c2=d*0.10;
	c3=n*0.05;
	c4=p*0.01;
	sum=c1+c2+c3+c4;
	if(sum>=price){
		cout<<"ture";
	}else
	{
		cout<<"false";
	}
}
