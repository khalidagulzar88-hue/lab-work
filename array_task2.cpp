#include<iostream>
using namespace std;
int main(){
	 int number[10];
	int i;
	int small=10;
	cout<<"enter the elements:";
	for(i=0;i<10;i++){
		cin>>number[i];
	}
	for(i=0;i<10;i++){
		if(number[i]<small){
			small=number[i];
		}
    }
	cout<<"smallest element:"<<small<<endl;
	
}
