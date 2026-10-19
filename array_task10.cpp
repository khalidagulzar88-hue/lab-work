#include<iostream>
using namespace std;
int main(){
	char str[10],res[10];
	int j=0;
	cout<<"enter a string:";
	cin.getline(str,sizeof(str));
	for(int i=0;str[i]!='\0';i++){
		char ch=tolower(str[i]);
		if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='A'&&ch!='I'&&
		ch!='E'&&ch!='O'&&ch!='U'){
			res[j++]=str[i];
		}
	}
	res[j]='\0';
	cout<<"after removing vowel:"<<res<<endl;
}
