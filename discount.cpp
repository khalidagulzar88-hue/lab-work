#include<iostream>
using namespace std;
int main()
{
	int bill;
	float discount;
	cout<<"enter the bill";
	cin>>bill;
	if(bill<=5000)
	{discount=bill*0.05;
	bill=bill-discount;
	cout<<"the bill is"<<bill;
	}
	else
	{discount=bill*0.1;
	bill=bill-discount;
	cout<<"the bill is"<<bill;
	}
	return 0;
}
