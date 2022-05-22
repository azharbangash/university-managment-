#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
MTSA()
{
	int size=42;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];
float lab4perf[size];float lab5perf[size];float lab6perf[size];
float lab7perf[size];float lab8perf[size];
float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];
float lab13perf[size];float lab14perf[size];
float lab1rep[size];float lab2rep[size];float lab3rep[size];
float lab4rep[size];float lab5rep[size];
float lab6rep[size];float lab7rep[size];float lab8rep[size];
float midterm[size];
float Cea[size];
float final[size];
string line;
ifstream file3("MTSA-CP-GRADES.csv");
int i=0;
while (getline(file3, line)) 
{
    string rand;
    istringstream iss(line); 
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];
	getline(iss, rand, ',');
	 iss >>  lab3perf[i];
	getline(iss, rand, ',');
	 iss >>  lab4perf[i];
	getline(iss, rand, ',');
	 iss >>  lab5perf[i];
	getline(iss, rand, ',');
	 iss >>  lab6perf[i];
	getline(iss, rand, ',');
	 iss >>  lab7perf[i];
	getline(iss, rand, ',');
	 iss >>  lab8perf[i];
	getline(iss, rand, ',');
	 iss >>  lab9perf[i];
	getline(iss, rand, ',');
	 iss >>  lab10perf[i];
	getline(iss, rand, ',');
     iss >>  lab11perf[i];
     getline(iss, rand, ',');
    iss >>  lab12perf[i];
      getline(iss, rand, ',');
    iss >>  lab13perf[i];
      getline(iss, rand, ','); 
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
	 iss >>  lab1rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab2rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab3rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab4rep[i];
	 getline(iss, rand, ',');
	 iss >>  lab5rep[i];
	 getline(iss, rand, ',');
	iss >>  lab6rep[i];
	 getline(iss, rand, ',');
	iss >>  lab7rep[i];
	 getline(iss, rand, ',');
	iss >>  lab8rep[i];
	 getline(iss, rand, ',');
	iss >>  midterm[i];
	 getline(iss, rand, ',');
	 iss >>  Cea[i];
	  getline(iss, rand, ',');
	  iss >>  final[i];
    i++;
}
int x;
char rep;
do
{
cout<<"Enter 1 for class and 2 for students details ";
cin>>x;
if(x==2)
{
	int num;
	cout<<"Enter roll no of student : ";
	cin>>num;
		for(int i=0;i<size;i++)
	{
		int in;
		if (num==rollnum[i])
		{in=i;
		
			char check;
		    float sum_rep,sum_labperf,cea,mid,Final,result;
            sum_rep=(lab1rep[i]+lab2rep[i]+lab3rep[i]+lab4rep[i]+lab5rep[i]+lab6rep[i]+lab7rep[i]+lab8rep[i])/120;
	        sum_rep=(sum_rep)*20;
	        sum_labperf=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+
            lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i])/210;
	sum_labperf=(sum_labperf)*25;
	mid=midterm[i]/55;
	mid=mid*20;
	cea=Cea[i]/20;
	cea=cea*10;
	Final=final[i]/45;
	Final=Final*25;
	result=sum_rep+sum_labperf+mid+cea+Final;
			cout<<"	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_labperf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_rep<<endl;
			cout<<"     Mid term marks : "<<mid<<endl;
			cout<<"     CEA MARKS : "<<cea<<endl;
			cout<<"     Final term marks : "<<Final<<endl;
			cout<<"     Total Marks : "<<result<<endl;
			if(result>=100 && result <=90)
			cout<<"     Grade : A ";
			else if(result>=80 && result <=89)
			cout<<"     Grade : B+ ";
			else if(result>=70 && result <=79)
			cout<<"     Grade : B ";
			else if(result>=60 && result <=69)
			cout<<"     Grade : -B ";
			else if(result>=50 && result <=59)
			cout<<"     Grade : C ";
			else if(result>=40 && result <=59)
			cout<<"     Grade : F ";
			cout<<endl;
			
		}
	}
}
else if(x==1)
{
	for(int i=0;i<size;i++)
{
cout<<name[i]<<setw(6)<<" "<<rollnum[i]<<setw(5)<<lab1perf[i]<<setw(5)<<lab2perf[i]<<setw(5)<<lab3perf[i]<<setw(5)
<<lab4perf[i]<<setw(5)<<lab5perf[i]<<setw(5)<<lab6perf[i]<<setw(5)<<lab7perf[i]<<setw(5)<<lab8perf[i]<<setw(5)
<<lab9perf[i]<<setw(5)<<lab10perf[i]<<setw(5)<<lab11perf[i]<<setw(5)<<lab12perf[i]<<setw(5)<<lab13perf[i]
<<setw(5)<<lab14perf[i]<<setw(5)<<lab1rep[i]<<setw(5)<<lab2rep[i]
<<setw(5)<<lab3rep[i]<<setw(5)<<lab4rep[i]<<setw(5)<<lab5rep[i]<<setw(5)<<lab6rep[i]
<<setw(5)<<lab7rep[i]<<setw(5)<<lab8rep[i]<<setw(5)<<midterm[i]<<setw(5)<<Cea[i]<<setw(5)<<final[i]<<endl<<endl;}
}
cout<<"Press Y/y to check another students details : ";
cin>>rep;
}
while(rep=='Y'|| rep=='y');
}
MTSB()
{
	int size=35;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];
float lab4perf[size];float lab5perf[size];float lab6perf[size];
float lab7perf[size];float lab8perf[size];
float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];
float lab13perf[size];float lab14perf[size];
float lab1rep[size];float lab2rep[size];float lab3rep[size];
float lab4rep[size];float lab5rep[size];
float lab6rep[size];float lab7rep[size];float lab8rep[size];
float midterm[size];
float Cea[size];
float final[size];
string line;
ifstream file3("MTSB-CP-GRADES.csv");
int i=0;
while (getline(file3, line)) 
{
    string rand;
    istringstream iss(line); 
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];
	getline(iss, rand, ',');
	 iss >>  lab3perf[i];
	getline(iss, rand, ',');
	 iss >>  lab4perf[i];
	getline(iss, rand, ',');
	 iss >>  lab5perf[i];
	getline(iss, rand, ',');
	 iss >>  lab6perf[i];
	getline(iss, rand, ',');
	 iss >>  lab7perf[i];
	getline(iss, rand, ',');
	 iss >>  lab8perf[i];
	getline(iss, rand, ',');
	 iss >>  lab9perf[i];
	getline(iss, rand, ',');
	 iss >>  lab10perf[i];
	getline(iss, rand, ',');
     iss >>  lab11perf[i];
     getline(iss, rand, ',');
    iss >>  lab12perf[i];
      getline(iss, rand, ',');
    iss >>  lab13perf[i];
      getline(iss, rand, ','); 
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
	 iss >>  lab1rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab2rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab3rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab4rep[i];
	 getline(iss, rand, ',');
	 iss >>  lab5rep[i];
	 getline(iss, rand, ',');
	iss >>  lab6rep[i];
	 getline(iss, rand, ',');
	iss >>  lab7rep[i];
	 getline(iss, rand, ',');
	iss >>  lab8rep[i];
	 getline(iss, rand, ',');
	iss >>  midterm[i];
	 getline(iss, rand, ',');
	 iss >>  Cea[i];
	  getline(iss, rand, ',');
	  iss >>  final[i];
    i++;
}
for(int i=0;i<size;i++)
{
int x;
char rep;
do
{
cout<<"Enter 1 for class and 2 for students details ";
cin>>x;
if(x==2)
{
	int num;
	cout<<"Enter roll no of student : ";
	cin>>num;
		for(int i=0;i<size;i++)
	{
		int in;
		if (num==rollnum[i])
		{in=i;
		
			char check;
		    float sum_rep,sum_labperf,cea,mid,Final,result;
            sum_rep=(lab1rep[i]+lab2rep[i]+lab3rep[i]+lab4rep[i]+lab5rep[i]+lab6rep[i]+lab7rep[i]+lab8rep[i])/120;
	        sum_rep=(sum_rep)*20;
	        sum_labperf=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+
            lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i])/210;
	sum_labperf=(sum_labperf)*25;
	mid=midterm[i]/55;
	mid=mid*20;
	cea=Cea[i]/20;
	cea=cea*10;
	Final=final[i]/45;
	Final=Final*25;
	result=sum_rep+sum_labperf+mid+cea+Final;
			cout<<"	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_labperf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_rep<<endl;
			cout<<"     Mid term marks : "<<mid<<endl;
			cout<<"     CEA MARKS : "<<cea<<endl;
			cout<<"     Final term marks : "<<Final<<endl;
			cout<<"     Total Marks : "<<result<<endl;
			if(result>=100 && result <=90)
			cout<<"     Grade : A ";
			else if(result>=80 && result <=89)
			cout<<"     Grade : B+ ";
			else if(result>=70 && result <=79)
			cout<<"     Grade : B ";
			else if(result>=60 && result <=69)
			cout<<"     Grade : -B ";
			else if(result>=50 && result <=59)
			cout<<"     Grade : C ";
			else if(result>=40 && result <=59)
			cout<<"     Grade : F ";
			cout<<endl;
			
		}
	}
}
else if(x==1)
{
	for(int i=0;i<size;i++)
{
cout<<name[i]<<setw(6)<<" "<<rollnum[i]<<setw(5)<<lab1perf[i]<<setw(5)<<lab2perf[i]<<setw(5)<<lab3perf[i]<<setw(5)
<<lab4perf[i]<<setw(5)<<lab5perf[i]<<setw(5)<<lab6perf[i]<<setw(5)<<lab7perf[i]<<setw(5)<<lab8perf[i]<<setw(5)
<<lab9perf[i]<<setw(5)<<lab10perf[i]<<setw(5)<<lab11perf[i]<<setw(5)<<lab12perf[i]<<setw(5)<<lab13perf[i]
<<setw(5)<<lab14perf[i]<<setw(5)<<lab1rep[i]<<setw(5)<<lab2rep[i]
<<setw(5)<<lab3rep[i]<<setw(5)<<lab4rep[i]<<setw(5)<<lab5rep[i]<<setw(5)<<lab6rep[i]
<<setw(5)<<lab7rep[i]<<setw(5)<<lab8rep[i]<<setw(5)<<midterm[i]<<setw(5)<<Cea[i]<<setw(5)<<final[i]<<endl<<endl;}
}
cout<<"Press Y/y to check another students details : ";
cin>>rep;
}
while(rep=='Y'|| rep=='y');
}
}
BEEP()
{
	int size=23;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];
float lab4perf[size];float lab5perf[size];float lab6perf[size];
float lab7perf[size];float lab8perf[size];
float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];
float lab13perf[size];float lab14perf[size];
float lab1rep[size];float lab2rep[size];float lab3rep[size];
float lab4rep[size];float lab5rep[size];
float lab6rep[size];float lab7rep[size];float lab8rep[size];
float midterm[size];
float Cea[size];
float final[size];
string line;
ifstream file3("POWER-CP.csv");
int i=0;
while (getline(file3, line)) 
{
    string rand;
    istringstream iss(line); 
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];
	getline(iss, rand, ',');
	 iss >>  lab3perf[i];
	getline(iss, rand, ',');
	 iss >>  lab4perf[i];
	getline(iss, rand, ',');
	 iss >>  lab5perf[i];
	getline(iss, rand, ',');
	 iss >>  lab6perf[i];
	getline(iss, rand, ',');
	 iss >>  lab7perf[i];
	getline(iss, rand, ',');
	 iss >>  lab8perf[i];
	getline(iss, rand, ',');
	 iss >>  lab9perf[i];
	getline(iss, rand, ',');
	 iss >>  lab10perf[i];
	getline(iss, rand, ',');
     iss >>  lab11perf[i];
     getline(iss, rand, ',');
    iss >>  lab12perf[i];
      getline(iss, rand, ',');
    iss >>  lab13perf[i];
      getline(iss, rand, ','); 
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
	 iss >>  lab1rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab2rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab3rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab4rep[i];
	 getline(iss, rand, ',');
	 iss >>  lab5rep[i];
	 getline(iss, rand, ',');
	iss >>  lab6rep[i];
	 getline(iss, rand, ',');
	iss >>  lab7rep[i];
	 getline(iss, rand, ',');
	iss >>  lab8rep[i];
	 getline(iss, rand, ',');
	iss >>  midterm[i];
	 getline(iss, rand, ',');
	 iss >>  Cea[i];
	  getline(iss, rand, ',');
	  iss >>  final[i];
    i++;
}
int x;
char rep;
do
{
cout<<"Enter 1 for class and 2 for students details ";
cin>>x;
if(x==2)
{
	int num;
	cout<<"Enter roll no of student : ";
	cin>>num;
		for(int i=0;i<size;i++)
	{
		int in;
		if (num==rollnum[i])
		{in=i;
		
			char check;
		    float sum_rep,sum_labperf,cea,mid,Final,result;
            sum_rep=(lab1rep[i]+lab2rep[i]+lab3rep[i]+lab4rep[i]+lab5rep[i]+lab6rep[i]+lab7rep[i]+lab8rep[i])/120;
	        sum_rep=(sum_rep)*20;
	        sum_labperf=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+
            lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i])/210;
	sum_labperf=(sum_labperf)*25;
	mid=midterm[i]/55;
	mid=mid*20;
	cea=Cea[i]/20;
	cea=cea*10;
	Final=final[i]/45;
	Final=Final*25;
	result=sum_rep+sum_labperf+mid+cea+Final;
			cout<<"	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_labperf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_rep<<endl;
			cout<<"     Mid term marks : "<<mid<<endl;
			cout<<"     CEA MARKS : "<<cea<<endl;
			cout<<"     Final term marks : "<<Final<<endl;
			cout<<"     Total Marks : "<<result<<endl;
			if(result>=100 && result <=90)
			cout<<"     Grade : A ";
			else if(result>=80 && result <=89)
			cout<<"     Grade : B+ ";
			else if(result>=70 && result <=79)
			cout<<"     Grade : B ";
			else if(result>=60 && result <=69)
			cout<<"     Grade : -B ";
			else if(result>=50 && result <=59)
			cout<<"     Grade : C ";
			else if(result>=40 && result <=59)
			cout<<"     Grade : F ";
			cout<<endl;
			
		}
	}
}
else if(x==1)
{
	for(int i=0;i<size;i++)
{
cout<<name[i]<<setw(6)<<" "<<rollnum[i]<<setw(5)<<lab1perf[i]<<setw(5)<<lab2perf[i]<<setw(5)<<lab3perf[i]<<setw(5)
<<lab4perf[i]<<setw(5)<<lab5perf[i]<<setw(5)<<lab6perf[i]<<setw(5)<<lab7perf[i]<<setw(5)<<lab8perf[i]<<setw(5)
<<lab9perf[i]<<setw(5)<<lab10perf[i]<<setw(5)<<lab11perf[i]<<setw(5)<<lab12perf[i]<<setw(5)<<lab13perf[i]
<<setw(5)<<lab14perf[i]<<setw(5)<<lab1rep[i]<<setw(5)<<lab2rep[i]
<<setw(5)<<lab3rep[i]<<setw(5)<<lab4rep[i]<<setw(5)<<lab5rep[i]<<setw(5)<<lab6rep[i]
<<setw(5)<<lab7rep[i]<<setw(5)<<lab8rep[i]<<setw(5)<<midterm[i]<<setw(5)<<Cea[i]<<setw(5)<<final[i]<<endl<<endl;}
}
cout<<"Press Y/y to check another students details : ";
cin>>rep;
}
while(rep=='Y'|| rep=='y');

}
BEBME()
{
	int size=30;
string name[size];
int rollnum[size];
float lab1perf[size];float lab2perf[size];float lab3perf[size];
float lab4perf[size];float lab5perf[size];float lab6perf[size];
float lab7perf[size];float lab8perf[size];
float lab9perf[size];float lab10perf[size];
float lab11perf[size];float lab12perf[size];
float lab13perf[size];float lab14perf[size];
float lab1rep[size];float lab2rep[size];float lab3rep[size];
float lab4rep[size];float lab5rep[size];
float lab6rep[size];float lab7rep[size];float lab8rep[size];
float midterm[size];
float Cea[size];
float final[size];
string line;
ifstream file3("BEBME-OOP-GRADES.csv");
int i=0;
while (getline(file3, line)) 
{
    string rand;
    istringstream iss(line); 
    iss >> rollnum[i];
    getline(iss, rand, ',');
    getline(iss, name[i], ',');
    iss >> lab1perf[i];
    getline(iss, rand, ',');
    iss >>  lab2perf[i];
	getline(iss, rand, ',');
	 iss >>  lab3perf[i];
	getline(iss, rand, ',');
	 iss >>  lab4perf[i];
	getline(iss, rand, ',');
	 iss >>  lab5perf[i];
	getline(iss, rand, ',');
	 iss >>  lab6perf[i];
	getline(iss, rand, ',');
	 iss >>  lab7perf[i];
	getline(iss, rand, ',');
	 iss >>  lab8perf[i];
	getline(iss, rand, ',');
	 iss >>  lab9perf[i];
	getline(iss, rand, ',');
	 iss >>  lab10perf[i];
	getline(iss, rand, ',');
     iss >>  lab11perf[i];
     getline(iss, rand, ',');
    iss >>  lab12perf[i];
      getline(iss, rand, ',');
    iss >>  lab13perf[i];
      getline(iss, rand, ','); 
    iss >>  lab14perf[i];
    getline(iss, rand, ',');
	 iss >>  lab1rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab2rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab3rep[i];
	 getline(iss, rand, ',');
	  iss >>  lab4rep[i];
	 getline(iss, rand, ',');
	 iss >>  lab5rep[i];
	 getline(iss, rand, ',');
	iss >>  lab6rep[i];
	 getline(iss, rand, ',');
	iss >>  lab7rep[i];
	 getline(iss, rand, ',');
	iss >>  lab8rep[i];
	 getline(iss, rand, ',');
	iss >>  midterm[i];
	 getline(iss, rand, ',');
	 iss >>  Cea[i];
	  getline(iss, rand, ',');
	  iss >>  final[i];
    i++;
}
int x;
char rep;
do
{
cout<<"Enter 1 for class and 2 for students details ";
cin>>x;
if(x==2)
{
	int num;
	cout<<"Enter roll no of student : ";
	cin>>num;
		for(int i=0;i<size;i++)
	{
		int in;
		if (num==rollnum[i])
		{in=i;
		
			char check;
		    float sum_rep,sum_labperf,cea,mid,Final,result;
            sum_rep=(lab1rep[i]+lab2rep[i]+lab3rep[i]+lab4rep[i]+lab5rep[i]+lab6rep[i]+lab7rep[i]+lab8rep[i])/120;
	        sum_rep=(sum_rep)*20;
	        sum_labperf=(lab1perf[i]+lab2perf[i]+lab3perf[i]+lab4perf[i]+lab5perf[i]+lab6perf[i]+lab7perf[i]+lab8perf[i]+lab9perf[i]+lab10perf[i]+
            lab11perf[i]+lab12perf[i]+lab13perf[i]+lab14perf[i])/210;
	sum_labperf=(sum_labperf)*25;
	mid=midterm[i]/55;
	mid=mid*20;
	cea=Cea[i]/20;
	cea=cea*10;
	Final=final[i]/45;
	Final=Final*25;
	result=sum_rep+sum_labperf+mid+cea+Final;
			cout<<"	Roll Number Of Student: "<<rollnum[i]<<endl;
			cout<<"	Name Of Student: "<<name[i]<<endl;
			cout<<"	Lab Performance Marks: "<<sum_labperf<<endl;
			cout<<"	Lab Reports Marks: "<<sum_rep<<endl;
			cout<<"     Mid term marks : "<<mid<<endl;
			cout<<"     CEA MARKS : "<<cea<<endl;
			cout<<"     Final term marks : "<<Final<<endl;
			cout<<"     Total Marks : "<<result<<endl;
			if(result>=100 && result <=90)
			cout<<"     Grade : A ";
			else if(result>=80 && result <=89)
			cout<<"     Grade : B+ ";
			else if(result>=70 && result <=79)
			cout<<"     Grade : B ";
			else if(result>=60 && result <=69)
			cout<<"     Grade : -B ";
			else if(result>=50 && result <=59)
			cout<<"     Grade : C ";
			else if(result>=40 && result <=59)
			cout<<"     Grade : F ";
			cout<<endl;
			
		}
	}
}
else if(x==1)
{
	for(int i=0;i<size;i++)
{
cout<<name[i]<<setw(6)<<" "<<rollnum[i]<<setw(5)<<lab1perf[i]<<setw(5)<<lab2perf[i]<<setw(5)<<lab3perf[i]<<setw(5)
<<lab4perf[i]<<setw(5)<<lab5perf[i]<<setw(5)<<lab6perf[i]<<setw(5)<<lab7perf[i]<<setw(5)<<lab8perf[i]<<setw(5)
<<lab9perf[i]<<setw(5)<<lab10perf[i]<<setw(5)<<lab11perf[i]<<setw(5)<<lab12perf[i]<<setw(5)<<lab13perf[i]
<<setw(5)<<lab14perf[i]<<setw(5)<<lab1rep[i]<<setw(5)<<lab2rep[i]
<<setw(5)<<lab3rep[i]<<setw(5)<<lab4rep[i]<<setw(5)<<lab5rep[i]<<setw(5)<<lab6rep[i]
<<setw(5)<<lab7rep[i]<<setw(5)<<lab8rep[i]<<setw(5)<<midterm[i]<<setw(5)<<Cea[i]<<setw(5)<<final[i]<<endl<<endl;}
}
cout<<"Press Y/y to check another students details : ";
cin>>rep;
}
while(rep=='Y'|| rep=='y');
}
	void menu()
{
	cout<<"UNIVERSIY CAFETARIA"<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"No.      MENU                           PRICE"<<endl;
	cout<<" 1      Chicken Biryani                 150 Rs only."<<endl;
	cout<<" 2      Chicken Palao                   150 Rs only."<<endl;
	cout<<" 3      Chinese Rice                    130 Rs only."<<endl;
	cout<<" 4      Chicken korma                   170 Rs only."<<endl;
	cout<<" 5      Crispy Chicken Burger           150 Rs only."<<endl;
	cout<<" 6      Zinger Burger                   200 Rs only."<<endl;
	cout<<" 7      Shawarma                        130 Rs only."<<endl;
	cout<<" 8      Club Sandwich                   120 Rs only."<<endl;
	cout<<" 9      Roll Paratha                    140 Rs only."<<endl;
	cout<<" 10     French Fries                    100 Rs only."<<endl;
    cout<<" 11     Pepsi                           60  Rs only."<<endl;
    cout<<" 12     Coke                            60  Rs only."<<endl;
    cout<<" 13     Sprite                          60  Rs only."<<endl;
	cout<<" 14     Big Apple                       60  Rs only."<<endl;
	cout<<"---------------------------------"<<endl;
 }
    char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	int choice,row,column;
	char turn='X';
	bool draw=false;
void display_board()
{
	
	system("cls");
	//game board layout
	cout<<"\n\tHey!Welcome to university Gaming Zone..\n";
	cout<<"\n\n";              
    cout<<"\t\t\t\t\t\t-( TIC TAC TOE )-\n"<<endl;
    cout<<"\t\t\tPlayer-1[X]\t\t\t";
    cout<<"\t\t\tPlayer-2[O]"<<endl;
	cout<<"\n\n";
    cout<<"\t\t\t\t\t\t     |     |     "<<endl;
    cout<<"\t\t\t\t\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  "<<endl;
    cout<<"\t\t\t\t\t\t_____|_____|_____"<<endl;
    cout<<"\t\t\t\t\t\t     |     |     "<<endl;
    cout<<"\t\t\t\t\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  "<<endl;
    cout<<"\t\t\t\t\t\t_____|_____|_____"<<endl;
    cout<<"\t\t\t\t\t\t     |     |     "<<endl;
    cout<<"\t\t\t\t\t\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  "<<endl;
    cout<<"\t\t\t\t\t\t     |     |     "<<endl;
}
    //functon to get out to update board
    void player_turn(){
    cout<<"\n\n\t";
    if(turn=='X')
    cout<<"PLAYER-1[X] TURN :";
    if(turn=='O')
    cout<<"PLAYER-2[0] TURN :";
    cin>>choice;
//switch case is used to know which row and column will update
switch(choice){
	case 1:
		row=0;column=0;
		break;
		case 2:
		row=0;column=1;
		break;
		case 3:
		row=0;column=2;
		break;
		case 4:
		row=1;column=0;
		break;
		case 5:
		row=1;column=1;
		break;
		case 6:
		row=1;column=2;
		break;
		case 7:
		row=2;column=0;
		break;
		case 8:
		row=2;column=1;
		break;
		case 9:
		row=2;column=2;
		break;
		default :
			cout<<"Invalid Choice";
			break;
}
   if(turn=='X' && board[row][column]!='X' && board[row][column]!='O')
   {board[row][column]='X';
   turn='O';
   }
   else if(turn=='O' && board[row][column]!='X' && board[row][column]!='O')
   {board[row][column]='O';
   turn='X';}
   else       //for when box ar filled
   {cout<<endl<<"\tSorry!Box already filled."<<endl;
   cout<<"\n\t\t\t\t\tPlease try again!!";
   player_turn();
   }
   display_board();
}
//function to get game status
    bool game_over(){
	for(int i=0;i<3;i++)                        //check win
	if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i] && board[0][i]==board[2][i])
	return false;
	if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1]&&board[0][0]==board[2][0])
	return false;
	
	for(int i=0;i<3;i++)                  //if their is any box left 
	for(int j=0;j<3;j++)
	if(board[i][j]!='X' && board[i][j]!='O')
	return true;
//draw case	
	draw=true;
	return false;
}
int main() 
{
	cout<<"\n\t\t                                       ------------  FINAL PROJECT -----------    ";
	cout<<"\n           -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
	cout<<"\n\n\t\t                             ------------------- University Managment -------------------- ";
	cout<<"\n       -**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-";
	cout<<endl;
	int press,x;	
	string c;
	char enter;
	do
	{
		do
		{
			cout<<"\n\n\t\t Enter T or t to open teacher portal\n";
			cout<<"\t\t Enter C or c to go to cafetaria\n";
			cout<<"\t\t Enter G or g to play game \n";
			cout<<"\t\t\t  ";cin>>enter;
		}
		while(enter!='c' && enter!='C' && enter!='g' && enter!='G' && enter!='t' && enter!='T');
	if(enter=='T' || enter =='t')
	{
	cout<<"Classes and subjects : \n";
	do
		{
		cout<<"press 1 for CE-112L MTS 2A  "<<endl;
		cout<<"press 2 for CE-112L MTS 2B  "<<endl;
		cout<<"press 3 for CE-112L BEEP 2A  "<<endl;
		cout<<"press 4 for CE-115L BEBME A  "<<endl;
		cin>>press;
		switch(press)
		{
			case 1:
				MTSA();
				break;
			case 2:
				MTSB();
				break;
			case 3:
				BEEP();
				break;
			case 4:
				BEBME();
				break;
		}
		}
		while(press==1 && press==2 && press==3 && press==4);
	}
	else if(enter=='c' || enter=='C')
	{
	float total=0;
	int n;
	char check;
	float change, pay;
	menu();
  do 
  { 
  cout<<endl;
    cout<<"What Would you like to Purchase (Press 1-14): ";
    cin>>n;
    if(n==1)
   {
   total=total+150;
   }
   else if(n==2)
   {
    total=total+150;
   }
   else if(n==3)
   {
   	total=total+130;
   }
   else if(n==4)
   {
   	total=total+170;
   }
    else if(n==5)
   {
   	total=total+150;
   }
    else if(n==6)
   {
   	total=total+200;
   }
    else if(n==7)
   {
   	total=total+130;
   }
    else if(n==8)
   {
   	total=total+120;
   }
    else if(n==9)
   {
   	total=total+140;
   }
    else if(n==10)
   {
   	total=total+100;
   }
    else if(n==11)
   {
   	total=total+60;
   }
    else if(n==12)
   {
   	total=total+60;
   }
    else if(n==13)
   {
   	total=total+60;
   }
    else if(n==14)
   {
   	total=total+60;
   }
   cout<<endl;
   cout<<"Enter Y to Purchase another item or any Key And Enter to get Total: ";
   cin>>check;}while (check=='Y'||check=='Y');
   cout<<"Total: "<<total<<"RS."<<endl;
   cout<<"Please Pay Chash: ";
   cin>>pay;
   change=pay-total;
   cout<<"Your Change: "<<change<<"RS.";	
	}
	else if (enter=='G' || enter=='g')
	{
		
   while(game_over())
   {
   display_board();
   player_turn();
   game_over();
}
   if(turn=='X' && draw==false)
   cout<<"\n WOW PLAYER-2[O] Wins the game!! Congratulatons\n";
   else if(turn=='O'&& draw==false)
   cout<<"\n WOW PLAYER-1[X] Wins the game!! Congratulatons\n";
   else
   cout<<"Game is DRAW between you guys!!";
	}
	cout<<"\n\t Please Enter 1122 to go to home : ";
	cin>>x;
}
while(x!=1122);
	return 0;
}
