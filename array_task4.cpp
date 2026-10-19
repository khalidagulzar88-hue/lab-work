#include<iostream>
using namespace std;
int main(){
	int count=0;
	string word;
	cout<<"enter a word:";
	cin>>word;
	for(int i=0;word[i]!='\0';i++){
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||
		word[i]=='u'||word[i]=='O'||word[i]=='U'||word[i]=='E'||word[i]=='A'||word[i]=='I'){
			count=count+1;
		}
	}
	cout<<count;
}
