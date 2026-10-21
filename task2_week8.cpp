#include<iostream>
using namespace std;
double cd(string,string,double,double);
int main(){
	string yt,ot;
	double ap,od,damage;
	cout<<"enter your type:";
	cin>>yt;
	cout<<"enter opponent type:";
	cin>>ot;
	cout<<"enter your attack power:";
	cin>>ap;
	cout<<"enter opponent defense:";
	cin>>od;
	damage=cd(yt,ot,ap,od);
	cout<<"damage:"<<damage;
	return 0;
}
double cd(string yt,string ot,double ap,double od){
	double e=1.0,damage;
	if(yt=="fire"){
		if(ot=="grass"){
			e=2.0;
		}else if (ot =="water"){
			e=0.5;
		}else if(ot=="electric"){
			e=1.0;
		}
	}else if(yt=="water"){
		if(ot=="fire"){
		e=2.0;
		}else if(ot=="grass"){
			e=0.5;
	 }else if(ot=="electric"){
			e=0.5;
		}
		}else if (yt =="grass"){
		 if(ot=="water"){
			e=2.0;
	}else if(ot=="fire"){
			e=0.5;
		}else if (ot =="electric"){
			e=2.0;
		}
		}else if(yt=="electric"){
		if(ot=="water")
		e=2.0;
		}else if(ot=="grass"){
		e=0.5;
		}else if(yt=="fire"){
			e=1.0;
		}
		damage=50*(ap/od)*e;
		return damage;
	}
