#include<iostream>
#include<windows.h>
using namespace std;
int main(){
	int price,discount,final;
	float r,w,t;
	cout<<"red rose:"<<endl;
	cin>>r;
	cout<<"white rose:"<<endl;
	cin>>w;
	cout<<"tulip rose:"<<endl;
	cin>>t;
	price=(r*2)+(w*4.10)+(t*2.50);
	cout<<"total price"<<price<<endl;
	if(price>200){
		cout<<"20% discount";
		discount=price*0.2;
		final=price-discount;
		cout<<"final price:"<<final<<endl;
	}
}
