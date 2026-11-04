#include<iostream>
using namespace std;
int main()
{
	int number1,number2;
	char sign;
	cout<<"enter the number 1";
	cin>>number1;
	cout<<"enter sign";
	cin>>sign;
	cout<<"enter the number 2";
	cin>>number2;
	if(sign='+'){
	cout<<"number1-number2="<<number1-number2<<endl;
    }
    if(sign='-'){
	cout<<"number1+number2="<<number1+number2<<endl;
    }
    if(sign='/'){
    	cout<<"number1*number2="<<number1*number2<<endl;
	}
	if(sign='*'){
    cout<<"number1/number2="<<number1/number2<<endl;
	}
	return 0;

}
