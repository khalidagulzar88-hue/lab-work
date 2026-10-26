#include<iostream>
#include<fstream>
using namespace std;
const int MAX=100;
void getStudentDetails(string names[],int adNumbers[],float percentages[],int size,int &count,string filename);
void saveToFile(string names[],int adNumbers[],float percentages[],int count,string filename);
main(){
    string names[MAX];
    int adNumbers[MAX];
    float percentages[MAX];
    int count=0;
    getStudentDetails(names,adNumbers,percentages,MAX,count,"Task5.txt");
    saveToFile(names,adNumbers,percentages,count,"TopperStudents.txt");
}
void getStudentDetails(string names[],int adNumbers[],float percentages[],int size,int &count,string filename)
{
    
    fstream file;
    file.open("Task5.txt", ios::in);
    string name;
    int adNum;
    float percentage;

    while (file >> name >> adNum >> percentage)
    {
        if (percentage > 70)
        {
            names[count] = name;
            adNumbers[count] = adNum;
            percentages[count] = percentage;
            count++;
        }
    }
    file.close();
}
void saveToFile(string names[],int adNumbers[],float percentages[],int count,string filename)
{
    fstream writer;
    writer.open(filename,ios::out);
    for(int i=0;i<count;i++){
        writer<<"Name: "<<names[i]<<endl;
        writer<<"Admission Number: "<<adNumbers[i]<<endl;
        writer<<"Percentage: "<<percentages[i]<<endl;
    }
    writer.close();
}