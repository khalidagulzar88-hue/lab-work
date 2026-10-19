#include<iostream>
using namespace std;
int main(){
	string name;
	cout<<"enter the name:";
	cin>>name;
	for(int i=0;name[i]!='\0';i++){
		int ch=name[i];
		ch++;
		char character=ch;
		if(name[i]=='Z'||name[i]=='z'){
			character=='a'||character=='A';
			
		}
		cout<<character;
	}
	} 
