#include<iostream>
using namespace std;
int main(){
	int line1[2];
	for(int i=0;i<2;i++){
		cout<<"enter the number:";
		cin>>line1[i];
	}
	int a,n[a];
	cout<<"how many elements you want to add in array 2:";
	cin>>a;
	for(int i=0;i<a;i++){
		cout<<"enter number:";
		cin>>n[i];
	}
	cout<<"["<<line1[0]<<",";
	for(int i=0;i<a;i++){
		cout<<n[i]<<",";
	}
	cout<<line1[1]<<"]";
}
