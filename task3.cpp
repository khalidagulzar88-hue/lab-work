#include<iostream>
#include<fstream>
using namespace std;
void calculatefrequency(string task3,char ch);
main(){
char ch;
cout<<"enter the character"<<endl;
cin>>ch;
calculatefrequency("task3.text",ch);
}
void calculatefrequency(string task3, char ch){
   fstream file;
   file.open("task3.text",ios::in);
   if(!file){
    cout<<"error"<<endl;
    return ;
   }
   string line;
    int count=0;
    ch=tolower(ch);
   while(getline(file,line)){
    for(char c :line){
        if(tolower(c)==ch){
            count++;
        }
    }
       
    }
    file.close();
    cout<<"total number of character:"<<ch<<":"<<count;

}