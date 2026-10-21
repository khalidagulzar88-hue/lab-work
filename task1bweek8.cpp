#include<iostream>
using namespace std;
int x =10;
void myfunction(){
	cout<<"the value of x is:"<<x;
	int x=20;
}
int main(){
	myfunction();
	int x=30;
	cout<<"the value of x is:"<<x;
	myfunction();
}
