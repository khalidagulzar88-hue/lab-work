#include<iostream>
using namespace std;
int main(){
	float discount;
	int total;
	int amount=500;
	string movie[5]={"idiots","starswars","terminator","traintobusan","captain"};
	string moviename;
	cout<<"entre the movie name:";
	cin>>moviename;
	int movieindex=0;
		for(int i=0;i<5;i++){
			if(movie[i]==moviename){
				movieindex=i;
				break;
			}

	}

		if(movieindex %2!=0){
			discount=amount*0.05;
			total=amount-discount;
			cout<<"final price:"<<total;
		}else{
		
		discount=amount*0.1;
			total=amount-discount;
			cout<<"final price:"<<total;
}
}
