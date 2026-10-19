#include<iostream>
using namespace std;
string something(string);
int main(){
	string word;
	word=something(word);
	cout<<word;
	return 0;
}
string something(string word){
	cout<<"enter the word :";
	cin>>word;
	cout<<"something ";
	return word;
}
