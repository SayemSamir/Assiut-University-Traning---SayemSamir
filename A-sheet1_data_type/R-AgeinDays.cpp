#include<iostream>
using namespace std;
int main(){
 int N;
 cin>>N;
 int year=N/365;
 cout<<year<<" years"<<endl;
 int month =(N%365)/30;
 cout<<month<<" months"<<endl;
 int day = (N%365)%30;
 cout<<day<<" days"<<endl;

/* int age;
  cin>>age;
  int year = age / 365;
  cout<<year<<" years"<<endl;
  age-= year*365;
  int month = age/30;
  cout<<month<<" months"<<endl;
  age-=month*30;
  int day= age;
  cout<<day<<" days"<<endl;
  */
}




