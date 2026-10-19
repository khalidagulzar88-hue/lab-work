#include<iostream>
using namespace std;
int main(){
	int r;
	float r1,ser=0;
	cout<<"how many resistances your resistor has:";
	cin>>r;
	for(int i=0;i<r;i++){
		cout<<"enter resistance:";
		cin>>r1;
		ser=ser+r1;
	}
	cout<<ser<<"ohms";
	
}
